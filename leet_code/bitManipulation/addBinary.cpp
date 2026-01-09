#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int sizeA = a.length();
        int sizeB = b.length();
        int sizeM = min(sizeA, sizeB);
        int resto = 0;
        string result = "";
        for(int i = 0; i < sizeM; i++){
            if(a[sizeA-i-1] == '1' && b[sizeB-i-1] == '1'){
                if(resto == 0){
                    result.insert(result.begin(), '0');
                    resto = 1;
                }else{
                    result.insert(result.begin(), '1');
                    resto = 1;
                }
            }else if(a[sizeA-i-1] != b[sizeB-i-1]){
                if(resto == 0){
                    result.insert(result.begin(), '1');
                    resto = 0;
                }else{
                    result.insert(result.begin(), '0');
                    resto = 1;
                }
            }else{
                if(resto == 0){
                    result.insert(result.begin(), '0');
                    resto = 0;
                }else{
                    result.insert(result.begin(), '1');
                    resto = 0;
                }
            }
        }
        if(sizeA > sizeB){
            for(int i = sizeB; i < sizeA; i++){
                if(resto == 1 && a[sizeA-i-1]=='1'){
                    resto = 1;
                    result.insert(result.begin(), '0');
                }else if(resto == 0 && a[sizeA-i-1]=='0'){
                    resto = 0;
                    result.insert(result.begin(), '0');
                }else{
                    resto = 0;
                    result.insert(result.begin(), '1');
                }
            }
        }else if(sizeA < sizeB){
            for(int i = sizeA; i < sizeB; i++){
                if(resto == 1 && b[sizeB-i-1]=='1'){
                    resto = 1;
                    result.insert(result.begin(), '0');
                }else if(resto == 0 && b[sizeB-i-1]=='0'){
                    resto = 0;
                    result.insert(result.begin(), '0');
                }else{
                    resto = 0;
                    result.insert(result.begin(), '1');
                }
            }
        }
        if(resto == 1){
            result.insert(result.begin(), '1');
        }
        return result;
    }
};
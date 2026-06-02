#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
    ifstream file("ingresos-2023.csv");
    ifstream file2("ingresos-2024.csv");
    ifstream file3("ingresos-2025.csv");
    ofstream output("resultados.txt");
    double earnings[5][12];
    string business[5];
    string line;
    string numBusiness[5]={"Empresa 1", "Empresa 2" , "Empresa 3" , "Empresa 4" , "Empresa 5"};
    bool check2023 = false, check2024 = false, check2025 = false;
    if(file.is_open()){
    	check2023 = true;
    	for(int i = 0; i < 5; i++) {
    		getline(file, line);
	        stringstream sstream(linea);
	        string earningsStr;
	        getline(sstream, business[i], ',');
	        double sum = 0;
	        
	        for(int j = 0; j < 12; j++){
	        	getline(sstream, earningsStr,',');
	        	earnings[i][j] = stod(earningsStr);
	        	
	        	sum = sum + earnings[i][j];
	        	
			}
			cout<<numbBusiness[i]<<" ";
			cout<<"Ganancias ano 2023 : "<<sum;
			cout<<endl;
			output<<empresasNom[i]<<" ";
			output<<"Ganancias ano 2023 : "<<suma;
			output<<endl;
	    }
	  
	}else{
		cout<<"Archivo no se pudo abrir";	
	}
	cout<<endl;
	output<<endl;
    double earningsA2[5][12];
    string businessA2[5];
    string lineA2;
    if(file2.is_open()){
    	check2024 = true;
    	for(int i = 0; i < 5; i++) {
    		getline(file2, lineA2);
	        stringstream sstream(lineA2);
	        string earningsA2Str;
	        getline(sstream, businessA2[i], ',');
	        double sum2 = 0;
	        
	        for(int j = 0; j < 12; j++){
	        	getline(sstream, earningsA2Str,',');
	        	earningsA2[i][j] = stod(earningsA2Str);
	        	
	        	sum2 = sum2 + earningsA2[i][j];
	        	
			}
			cout<<numBusiness[i]<<" ";
			cout<<"Ganancias ano 2024 : "<<sum2;
			cout<<endl;
	        output<<empresasNom[i]<<" ";
			output<<"Ganancias ano 2024 : "<<sum2;
			output<<endl;
	    }
	 
	}else{
		cout<<"Archivo no se pudo abrir";	
	}
	cout<<endl;
	output<<endl;
	 double earningsA3[5][12];
    string businessA3[5];
    string lineA3;
    if(file3.is_open()){
    	check2025 = true;
    	for(int i = 0; i < 5; i++) {
    		getline(file3, lineA3);
	        stringstream sstream(lineA3);
	        string earningsA3Str;
	        getline(sstream, businessA3[i], ',');
	        double sum3 = 0;
	        
	        for(int j = 0; j < 12; j++){
	        	getline(sstream, earningsA3Str,',');
	        	earningsA3[i][j] = stod(earningsA3Str);
	        	
	        	sum3 = sum3 + earningsA3[i][j];
	        	
			}
			
			cout<<numBusiness[i]<<" ";
			cout<<"Ganancias ano 2025 : "<<sum3;
			cout<<endl;
			output<<numBusiness[i]<<" ";
			output<<"Ganancias ano 2025 : "<<sum3;
			output<<endl;
	    }
	   
	}else{
		cout<<"Archivo no se pudo abrir";	
	}
	cout<<endl;
	output<<endl;
         if(check2023 && check2024 && check2025) {
        for(int i = 0; i < 5; i++) {
            double totalSum = 0;
            
            
            for(int j = 0; j < 12; j++){
                totalSum += earnings[i][j] + earningsA2[i][j] + earningsA3[i][j];
            }
            
            cout << numBusiness[i] << " Ganancias totales : " << totalSum << endl;
            output << numBusiness[i] << " Ganancias totales : " << totalSum << endl;    
        }
    } else {
        cout << "No se pudieron calcular los totales porque falto algun archivo." << endl;
    }
    output.close();
}

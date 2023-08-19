# include <iostream>
// verificar primo

int main(){
    int valor, contador;
    bool primo = true;
    
    std::cout << "me fale um número para eu ver se ele é primo" << std::endl;
    std::cin >> valor;
    
    if(valor <= 1){
        primo = false;
        
    } else if(valor == 2){
        primo = true;
        
    } else if(valor % 2 == 0){
        primo = false;
        
    } else {
        for(contador = 3; contador < valor ; contador += 2){
            if(valor % contador == 0){
                primo = false;
                break;
                
            }
        }
    }
    
    if(primo == false){
        std::cout << "não é primo";
        
    } else {
        std::cout << "é primo";
        
    }
    
    return 0;
}

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
 using namespace std;
  
  
  
  
   struct pessoa{
     int senha;
       string nome;
       string gmail;

   };
  
  
  
  int main(){
          
          string gmailLogin;
          int senhaLogin;
          bool verificar = false;
          int resp;
          vector<pessoa> cadastro;
          pessoa novapessoa;
        




do{


     cout<<"----------------------------------"<<endl;
      cout<<"1- fazer login"<<endl;
      cout<<"2- fazer o cadastro"<<endl;
      cout<<"3- sair"<<endl;
      cout<<"----------------------------------"<<endl;
       cin>>resp;

    
       switch (resp){
        case 1:
          


            cout<<"insira seu gmail: "<<endl;
            cin>>gmailLogin;
            cout<<"                  "<<endl;
            cout<<"insira sua senha"<<endl;
            cin>>senhaLogin;
            cout<<"                "<<endl;

             for(int x = 0; x< cadastro.size(); x++){
                if (gmailLogin == cadastro[x].gmail && senhaLogin == cadastro[x].senha){
                     cout<<"foi encontrado seu login no sistema"<<endl;
                     cout<<cadastro[x].nome<<" seja bem-vindo!!!!!!!!!!!!"<<endl;
                      verificar = true;
                      break;
                };

             };

                   
                if (!verificar){
                  cout<<"não foi encontrado seus dados no sistema, tente se cadastrar ou insira novamente seus dados"<<endl;
                };
             

         break;

         case 2:


            cout<<"insira seu nome: "<<endl;
            cin>>novapessoa.nome;
            cout<<"                  "<<endl;
            cout<<"insira seu gmail"<<endl;
            cin>>novapessoa.gmail;
            cout<<"                "<<endl;
            cout<<"coloque uma senha forte"<<endl;
            cin>>novapessoa.senha;
            cout<<"                       "<<endl;

             cadastro.push_back(novapessoa);


          break;

          case 3:

              cout<<"obrigado por usar nosso sistema!!!!!!"<<endl;
              exit(EXIT_SUCCESS);
              break;


            

          

          default:
           cout<<"opção inválida, insira novamente"<<endl;
       };


} while(resp != 3);





















    return 0;
  }
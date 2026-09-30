#include <stdio.h> 

int main() {
    int escolha; 
    float cofrinho = 0; 
    
    printf("Saldo inicial: %.2f\n", cofrinho); 
//deixa o codigo em loop ate o ZERO ser escolhido
    while (1) {
        printf("\n-- menu cofrinho ---\n");
        printf("Digite 1 para adicionar 50 centavos\n"); 
        printf("Digite 2 para adicionar 1 real\n"); 
        printf("Digite 3 para adicionar 1 real e 50 centavos\n"); 
        printf("Digite 0 para sair\n"); 
        
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Saindo do cofre\n");
            break; 
        }
        //Adiciona o valor a conta
        switch (escolha) {
            case 1: 
                cofrinho += 0.5; 
                break;           
            case 2: 
                cofrinho += 1.0; 
                break; 
            case 3: 
                cofrinho += 1.5; 
                break; 
            default:
                printf("Opcao invalida!\n");
                break;
        } 
        
        printf("Seu saldo agora e: %.2f\n", cofrinho); 
    }
    
    printf("\nSaldo final guardado: %.2f\n", cofrinho); 
    return 0;
}

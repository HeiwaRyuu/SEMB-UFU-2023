// Questão 9
// Quem faz mais operações: a versão iterativa ou a versão recursiva do fatorial? Os
// dois usam a mesma quantidade de memória?

// RESPOSTA:
// Ambos fazem o mesmo número de operações, porém a versão iterativa é mais rápida.
// A versão recursiva utiliza mais memória, pois a cada chamada da função, é necessário
// armazenar a chamada anterior na pilha de execução. Porém tem o benefício de ser mais
// fácil de entender e de escrever (geralmente). A iteração é geralmente mais rápida 
// pelo fato da versão recursiva utilizar muitos recursos para gerenciar a pilha e 
// as chamadas de funções.
# Copilot Instructions for AI Coding Agents

## Visão Geral do Projeto
Este projeto é um exemplo simples em C, atualmente composto por um único arquivo: `Hello, World!.c`. O objetivo principal é demonstrar a estrutura básica de um programa em C e servir como ponto de partida para exercícios de lógica e programação.

## Estrutura do Código
- O arquivo principal é `Hello, World!.c`.
- O programa contém uma função `main` que imprime "Hello, World!" no console usando `printf`.
- Não há outros arquivos, módulos ou componentes neste momento.

## Fluxo de Trabalho do Desenvolvedor
- **Compilação:** Utilize um compilador C (ex: GCC ou Clang) para compilar o arquivo. Exemplo de comando:
  ```sh
  gcc "Hello, World!.c" -o hello.exe
  ```
- **Execução:** Após a compilação, execute o binário gerado:
  ```sh
  ./hello.exe
  ```
- **Depuração:** Para depurar, utilize ferramentas como `gdb` ou o depurador integrado do VS Code.

## Convenções Específicas
- O nome do arquivo pode conter espaços e caracteres especiais. Sempre utilize aspas ao referenciar o arquivo em comandos de terminal.
- O projeto não utiliza bibliotecas externas, frameworks ou dependências adicionais.
- O padrão de saída é sempre via `printf` para o console.

## Exemplos de Padrões
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## Recomendações para Agentes
- Mantenha o código simples e legível, focando em exemplos didáticos.
- Ao adicionar novos arquivos, siga o padrão de nomeação clara e utilize extensões `.c`.
- Documente qualquer novo fluxo ou convenção diretamente neste arquivo.

## Referências
- Arquivo principal: `Hello, World!.c`

---

Seções incompletas ou dúvidas sobre fluxos específicos podem ser detalhadas conforme o projeto evolui. Por favor, revise e indique pontos que precisam de mais contexto ou exemplos.

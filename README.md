# Projeto de Exercícios - Introdução à Programação Estruturada em C

Este repositório contém um conjunto de exercícios desenvolvidos para a disciplina de **Introdução à Programação Estruturada em C**. O objetivo deste projeto é colocar em prática conceitos fundamentais da linguagem C, como estruturas condicionais, laços de repetição, funções, manipulação de arquivos, entre outros.

### Atividades:
Cada exercício foi estruturado para atender a um determinado requisito. O código-fonte de cada atividade está dentro da pasta **`codes`**, e os executáveis gerados são armazenados na pasta **`output`**. Para facilitar a execução, existe um arquivo controlador (**`controller.c`**) que orquestra a execução dos exercícios de forma interativa.

## Estrutura do Projeto

A estrutura do projeto é organizada da seguinte maneira:

├── codes # Código-fonte das atividades 
│ ├── atividade1.c # Exercício 1 
│ ├── atividade2.c # Exercício 2 
│ ├── atividade3.c # Exercício 3 
│ ├── atividade4.c # Exercício 4 
│ ├── atividade5.c # Exercício 5 
│ ├── atividade6.c # Exercício 6 
│ └── controller.c # Arquivo controlador que orquestra a execução 
├── output # Arquivos executáveis gerados 
│ ├── atividade1.exe # Executável do exercício 1 
│ ├── atividade2.exe # Executável do exercício 2 
│ ├── atividade3.exe # Executável do exercício 3 
│ ├── atividade4.exe # Executável do exercício 4 
│ ├── atividade5.exe # Executável do exercício 5 
│ └── atividade6.exe # Executável do exercício 6 
├── controller.exe # Executável do controlador 
├── .gitignore # Arquivo para ignorar arquivos desnecessários no Git 
└── README.md # Este arquivo de documentação

## Pré-requisitos

Antes de rodar o programa, certifique-se de ter o ambiente configurado corretamente:

1. **Compilador C**:
   O programa foi desenvolvido em C, e para rodá-lo, você precisará de um compilador C. O compilador mais comum é o **gcc**. Caso você não tenha o gcc instalado, pode seguir as instruções abaixo para sua instalação:
   
   - **No Linux** (Ubuntu/Debian):
     ```bash
     sudo apt-get install build-essential
     ```
   
   - **No macOS** (com Homebrew):
     ```bash
     brew install gcc
     ```
   
   - **No Windows**: Você pode instalar o **MinGW** ou o **Code::Blocks**, que já vêm com o compilador C embutido.

2. **Editor de Código**:
   Recomenda-se o uso de um editor de código com suporte para C, como **Visual Studio Code** ou **Code::Blocks**.

---

## Como Rodar o Programa

### 1. Clonando o Repositório

Primeiro, clone o repositório para o seu ambiente local:

```bash
git clone https://github.com/patricksilvy/fundamentos-em-c.git
cd fundamentos-em-c
```

### 2. Execução Individual na Pasta `output`

Os executáveis para cada exercício já estão disponíveis na pasta **`output`**. Para executar um exercício específico, basta acessar a pasta **`output`** e rodar o executável correspondente.

#### Exemplo:

Para executar o **exercício 1**, use o comando:

```bash
./output/atividade1.exe
```

### 3. Execução de Todos a partir do Controlador

Se preferir executar todos os exercícios de forma interativa, utilize o **`controller.exe`**, que está na pasta inicial. O controlador permite que você escolha qual exercício deseja executar a partir de um menu.

Para rodar o controlador, execute o comando:

```bash
./controller.exe
```

## Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

A Licença MIT é uma licença permissiva que permite o uso, modificação, distribuição e venda do software, com a condição de que o aviso de copyright e a licença sejam incluídos em todas as cópias ou partes substanciais do software.


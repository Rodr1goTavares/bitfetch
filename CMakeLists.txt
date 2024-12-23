cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(bitfetch LANGUAGES CXX)

# Versão do padrão C++ a ser usado
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Diretório de saída para os binários
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Adiciona os arquivos fonte
set(SOURCES
    src/main.cpp
)

# Adiciona os diretórios de cabeçalhos
include_directories(
    src
    src/include
)

# Define o executável principal
add_executable(bitfetch ${SOURCES})

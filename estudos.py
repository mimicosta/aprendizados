import numpy as np
import random as rd

plataforma = np.full((10, 10), ' ')
n = 0
max = 10



linharobo = np.random.randint(10)
colunarobo = np.random.randint(10)
plataforma[linharobo][colunarobo] = 'R'

while n < 5:
    linha = np.random.randint(10)
    coluna = np.random.randint(10)

    if plataforma[linha][coluna] != ' ':
        n -= 1
    
    plataforma[linha, coluna] = '#'
    n += 1


cont = 0

print(plataforma)


while cont < 5: 
        posicao = str(input("Digite a posiçao pro robo andar [W/A/S/D] ou Q para sair:")).strip().upper()[0]

        match(posicao):
            case 'W':
                if plataforma[linharobo - 1][colunarobo] == '#':
                    cont += 1
                plataforma[linharobo][colunarobo] = ' '
                linharobo -= 1
                plataforma[linharobo][colunarobo] = 'R'
            case 'A':
                if plataforma[linharobo][colunarobo - 1] == '#':
                    cont += 1
                plataforma[linharobo][colunarobo] = ' '
                colunarobo -= 1
                plataforma[linharobo][colunarobo] = 'R'
            case 'D':
                if plataforma[linharobo][colunarobo + 1] == '#':
                    cont += 1
                plataforma[linharobo][colunarobo] = ' '
                colunarobo += 1
                plataforma[linharobo][colunarobo] = 'R'
            case 'S':
                if plataforma[linharobo + 1][colunarobo] == '#':
                    cont += 1
                plataforma[linharobo][colunarobo] = ' '
                linharobo += 1
                plataforma[linharobo][colunarobo] = 'R'
            case 'Q':
                print('Fim de jogo cara')
                break


        print(plataforma) 

if cont == 5:
    print('Parabens! voce conseguiu cara')
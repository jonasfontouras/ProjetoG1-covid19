#include<stdio.h>
main(){
    int vetorX[100]; //100 primeiros naturais multiplos de 5
    int vetorA[100]; //100 primeiros naturais ímpares
    int vetorC[30] = { 5,15,20,30,45,55,60,65,80,95,100,105,110,120,130,145,155,160,165,170,175,190,195,200,230,235,240,245,250,255};
    int vetorCA[130];
    int auxA = 0, aux;
    int tamXCA = 0;
    int CUA[130];
    int XCA[230];

    int i, j, repete = 0, n = 0;
    //----------Conjunto C-----
    printf("\nConjunto C = {");
    for(i = 0; i < 30; i++){
        printf("%d, ", vetorC[i]);
    }
      printf("}\n");

    //------------CONJUNTO X------------------
	printf("\nConjunto X = {");
    for(i = 0; i < 100; i++){
        vetorX[i] = i * 5;     
        printf ("%d, ", vetorX[i]);
    }
    printf("}\n");

    //------------CONJUNTO A------------------
    printf("\nConjunto A = {");
    for(i = 0; i < 200; i++){
        if (i%2 == 1)
        {
            vetorA[auxA] = i;     
            printf ("%d, ", vetorA[auxA]);
            auxA++;
        }
    }
    printf("}\n");

    //------------CONJUNTO CuA------------------
    
    for(i = 0; i < 130; i++){
        if (i < 100)
        {
            vetorCA[i] = vetorA[i];     
        }
        if (i >= 100)
        {
            vetorCA[i] = vetorC[i - 100];
        }
        
    }
    for (i = 0; i < 130; i++) {
        if (i == 0) {
        CUA[n] = vetorCA[i];
        n++;
        } else {
        repete = 0;
        //percorre o vetor distinto verificando se o valor v[i] existe no mesmo
        for (j = 0; j < n; j++) {
            if(vetorCA[i] == CUA[j]) {
            repete++;
            }
        }
        //se o valor v[i] não foi encontrado no vetor distinto, então adiciona
        if (repete < 1) {
            CUA[n] = vetorCA[i];
            n++;// aumenta o tamanho do vetor distinto
        }
        }
    }

    printf("\nConjunto CUA = {");
    for (i = 0; i < n; i++)
        printf("%d, ", CUA[i]);
        
    printf("}\n");

//------------CONJUNTO X-(CuA)------------------
    for (i = 0; i < 100; i++)
    {
        aux = 0;
        for (j = 0; j < 130; j++){
            if (vetorX[i] != CUA[j]){
                    aux++; 
            }
        }
        if (aux == 130){
            XCA[tamXCA] = vetorX[i];
            tamXCA++;
        }     
    }

        printf("\nConjunto X-(CuA) = {");
    for (i = 0; i < tamXCA; i++){
        printf("%d,", XCA[i]);
    }
    printf("}\n\n");
}
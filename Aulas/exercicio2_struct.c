#include <stdio.h>


struct ponto {
    int x, y;
};

struct retangulo {
    struct ponto inicio, fim;
};


int main()
{
    struct retangulo r = {{10,20}, {30,40}};
    struct ponto p[3];
    
    
    for (int i = 0; i < 3; ++i)
        scanf("%d%d", &p[i].x, &p[i].y);    
    
    for (int i = 0; i < 3; ++i){
        
        if ((p[i].x >= r.inicio.x && p[i].x <= r.fim.x)  && (p[i].y >= r.inicio.y && p[i].y <= r.fim.y)) {
            printf("Ponto P(%d, %d) é válido! \n", p[i].x, p[i].y);
        }    
    }

    return 0;
}

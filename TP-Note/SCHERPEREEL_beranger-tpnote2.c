#include <stdio.h>

#define CHUNK_SIZE_MAX 5

typedef struct{
    struct string_s *suiv;
    int chunkSize;
    char* chunk;
}string_s;

typedef string_s* String;

String string_new(char *s){
    String new;
    if(s == NULL){
        new->suiv = NULL;
        new->chunkSize = 0;
        return new;
    }else{
        int i=0;
        while(s[i] != "\0"){
            new->chunk[i] = s[i];
            i++;
            if(i%5 == 0){
                new->chunkSize = 5;
                String suivant = string_new(&s[i]);
                new->suiv = suivant;
            }else{
                new->chunkSize = i;
            }
        }
        return new;
    }
}

int string_lenght(String s){
    int lenght = 0;
    if(s->suiv != NULL){
        lenght += string_lenght(s->suiv);
    }else{
        lenght += s->chunkSize;
    }
    return lenght;
}

String string_insert_at( String s, int position, char* add){
    String p = s;
    if(position >= string_lenght(s)){
        while (p->suiv != NULL){
            p = p->suiv;
        }
        p->suiv = string_new(&add);
        return s;
    }else{
        int index = 0;
        while (index < position){
            index += p->chunkSize;
            p = p->suiv;
        
        }
    }
}

int main(void){
    String s = string_new("Hello !");

    return 0;
}
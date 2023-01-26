#include <stdio.h>
int anio_actual= 2023;
float precio_hora= 50.00;

#define BONIFICACION_TURNO_A 2000;
#define BONIFICACION_TURNO_B 2750;
#define BONIFICACION_TURNO_C 3000;

#define PRECIO_HORAS_EXTRA 15;

int main()
{
    int edad =25;
    char departamento = 'A';
    char turno=' ';
    
    int anio_nacer;
    float trabajo_hr_extra;
    float numer_horas;
    
    float salario_extra;
    float salario = 0.00;
    float salario_anual = 0.00;

    float ingreso_mensual[12];


    printf("VAMOS A PEDIRTE DATOS");
    printf("Ingresa tu edad :");
    scanf("%d",&edad);
    
    printf("ingresa el numero de horas trabajadas ");
    scanf("%f",&numer_horas);
    
    
    printf("ingresa el numero de horas extras trabajadas ");
    scanf("%f",&trabajo_hr_extra);

    printf("Ingresa tu Departamento : ");
    fflush(stdin);
    scanf(" %c",&departamento);

    printf("Ingresa tu turno  A, B, C ;");
    fflush(stdin);
    scanf(" %c",&turno);

    if(turno == 'A'){
    salario_extra = BONIFICACION_TURNO_A}
    else
    if(turno == 'B'){
    salario_extra = BONIFICACION_TURNO_B;}
    else
    if(turno == 'C'){
    salario_extra = BONIFICACION_TURNO_C;}

    anio_nacer= anio_actual - edad;
    
    salario = precio_hora*numer_horas;
    salario = salario +salario_extra + trabajo_hr_extra * PRECIO_HORAS_EXTRA;


    for(int mes = 0; mes < 12; mes++ ){
        printf("ingresa el salario del mes %d",mes+1);
        scanf("%f",&ingreso_mensual[mes]);
        salario_anual= salario_anual + ingreso_mensual[mes];
     }

    printf("Eres del anio %d, la edad de esta es %d \n,con una paga de  %f \n, con un departamento tipo %c \n",anio_nacer,edad,salario,departamento);

    return 0;
}
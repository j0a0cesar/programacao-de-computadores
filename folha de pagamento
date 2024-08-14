#include <stdio.h>
// prototipo
double calcula_vale(double salario);

#define QTD_FUNC 1
// registro
typedef struct {
  int qtd_depend;
  double salario_bruto;
  char gratificacao;
  char usa_valetr;
  char usa_plano;
  double valor_vale;
  double valor_plano;
  double salario_liquido;
  double valor_gratificacao;
  double FGTS;
  double INSS;
  double salario_familia;
  int depend_FAM;
  double IR;
  int depend_IR;
} funcionario;

double calcula_vale(double salario) {
  double salario_bruto6p;
  double vale_transporte;

  salario_bruto6p = salario * 0.06;
  vale_transporte = 44 * 4.50;

  // se o vale de transporte for maior que 6%, fica com 6%
  if (vale_transporte > salario_bruto6p) {
    vale_transporte = salario_bruto6p;
  }
  return vale_transporte;
}

int main(void) {
  // variaveis
  funcionario func[QTD_FUNC];

  for (int i = 0; i < QTD_FUNC; i++) {

    double salario_bruto6p, valor_vale;
    // entrada de dados
    printf("\nSalário bruto: ");
    scanf("%lf", &func[i].salario_bruto);

    printf("\nTem Gratificacao? (S/N):");
    fflush(stdin);
    scanf(" %c", &func[i].gratificacao);

    printf("\nUsa vale transporte? (S/N): ");
    fflush(stdin);
    scanf(" %c", &func[i].usa_valetr);

     printf("\nUsa plano de saude? (S/N): ");
     fflush(stdin);
     scanf(" %c",&func[i].usa_plano);

    // calculo do vale transporte
    if (func[i].usa_valetr == 'S' || func[i].usa_valetr == 's') {
      func[i].valor_vale = calcula_vale(func[i].salario_bruto);
      //Se o funcionario não usa vale trasnporte
      //O valor da variael vai se 0
    } else {
      func[i].valor_vale = 0.0;
    }
    //CUIDADO porque salario bruto, recebe o salario bruto mais a gratificacao
    printf("\nValor salário bruto: %.2lf\n", func[i].salario_bruto);
    //Se a pessoa tem gratificação é adicionado no salario bruto 
    if (func[i].gratificacao == 'S' || func[i].gratificacao == 's'){
      printf("\nQual o valor da sua graticação: ");
      scanf(" %lf", &func[i].valor_gratificacao);
      func[i].salario_bruto = func[i].salario_bruto + func[i].valor_gratificacao;
    }else{
      func[i].valor_gratificacao = 0.0;
    }//Plano de saúde
    if (func[i].usa_plano == 'S' || func[i].usa_plano == 's'){
      printf("\nplano de saude\n");
      printf("\nQuantidade de dependetes: ");
      scanf("%d", &func[i].qtd_depend);
      func[i].valor_plano = (func[i].qtd_depend * 89.90); 
      
    }else{
      func[i].valor_plano = 0.0;
    }
    //Calculo do INSS
    if(func[i].salario_bruto <= 1100.00 ){
      func[i].INSS = (func[i].valor_gratificacao + func[i].salario_bruto) * 0.075;
      printf("\nINSS : %.2lf", func[i].INSS);
      
    }else if(func[i].salario_bruto <= 2203.48 ){
      func[i].INSS = (func[i].valor_gratificacao + func[i].salario_bruto) * 0.09;
      printf("\nINSS : %.2lf", func[i].INSS);
      
    }else if(func[i].salario_bruto <= 3305.22){
      func[i].INSS = (func[i].valor_gratificacao + func[i].salario_bruto) * 0.12;
      printf("\nINSS : %.2lf", func[i].INSS);
      
    }else{
      func[i].INSS = (func[i].valor_gratificacao + func[i].salario_bruto) * 0.14;
      printf("\nINSS : %.2lf", func[i].INSS);
    }
    //calculo do salario familia
    if(func[i].salario_bruto <= 1503.25){
      printf("\nSalario familia\n");
      printf("\nTem quantos dependentes,que seja no máximo até 14 anos: ");
      scanf(" %d",&func[i].depend_FAM);
      func[i].salario_familia = 51.27 * func[i].depend_FAM;
      printf("\nSalario familia: %.2lf", func[i].salario_familia);
    }else{
      func[i].salario_familia = 0;
      printf("\nSalario familia: %.2lf", func[i].salario_familia);
    }
    //calculo do imposto de renda(IR)
    printf("\nImposto de renda\n");
    printf("\nTem quantos dependentes ");
    scanf(" %d", &func[i].depend_IR);

    func[i].IR = (func[i].salario_bruto - func[i].INSS - (func[i].depend_IR * 189.59));
    
    if(func[i].IR <= 1903.98){
      func[i].IR = 0;
      printf("\nIR: %.2lf", func[i].IR);
    }else if(func[i].IR <= 2826.65){
    func[i].IR = (func[i].IR * 0.075) - 142.80;
      printf("\nIR: %.2lf", func[i].IR);
    }else if(func[i].IR <= 3751.05){
      func[i].IR = (func[i].IR * 0.15) - 354.80;
      printf("\nIR: %.2lf", func[i].IR);
    }else if(func[i].IR <= 4664.68){
      func[i].IR = (func[i].IR * 0.225) - 636.13;
      printf("\nIR: %.2lf", func[i].IR);
    }else{
      func[i].IR = (func[i].IR * 0.275) - 869.36;
      printf("\nIR: %.2lf", func[i].IR);
    }
    
    //calculo do FGTSS
    func[i].FGTS = (0.08*(func[i].valor_gratificacao + func[i].salario_bruto));
    //calculo do salario liquido
    func[i].salario_liquido = (func[i].salario_bruto - func[i].valor_vale - func[i].valor_plano - func[i].INSS - func[i].IR) + func[i].salario_familia;
   //saida de dados 
    printf("\nValor do vale transporte: %.2lf", func[i].valor_vale);
    printf("\nValor da grtaificação: %.2lf", func[i].valor_gratificacao);
    printf("\nValor do plano de saúde: %.2lf", func[i].valor_plano);
    printf("\nValor do salário líquido: %.2lf", func[i].salario_liquido);
  }
  return 0;
}

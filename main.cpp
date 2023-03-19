#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int opcao;
    int escolha;

    /// Início do programa
    cout << endl;
    cout << "   BEM VINDO AO PROGRAMA DE FUNCOES!";
    cout << endl;
    do {
    escolha = 0;
    /// Opções
    cout << "=======================================\n";
    cout << "| [1] Estudo das Funcoes do 1 grau    |" << endl;
    cout << "| [2] Estudo das Funcoes do 2 grau    |" << endl;
    cout << "| [3] Nocoes gerais                   |" << endl;
    cout << "=======================================\n";
    cout << " Insira o numero da opcao desejada: ";
    cin  >> opcao;
    /// Validação
    while ( opcao != 1 && opcao != 2 && opcao != 3 ){
    cout << "---------------------------------------\n";
    cout << "         < Valor invalido >\n";
    cout << "      (O Numero deve ser 1, 2 ou 3)\n";
    cout << " Numero da opcao desejada (1-3): ";
    cin  >> opcao;
    }
    cout << "=======================================\n";
    cout << "| A Opcao selecionada foi: [" << opcao << "]        |" << endl;
    if (opcao == 1) cout << "| [1] Estudo das Funcoes do 1 grau    |" << endl;
    if (opcao == 2) cout << "| [2] Estudo das Funcoes do 2 grau    |" << endl;
    if (opcao == 3) cout << "| [3] Nocoes gerais                   |" << endl;
    cout << "=======================================\n";
    cout << endl << endl;
    cout << "___________________________________________________________" << endl;

    if (opcao == 3){

        string tipo_de_funcao;
        int grau;
        double A,b,c;
        /// Opções
        cout << endl;
        cout << " [1] Aprender um pouco sobre o que eh uma funcao " << endl;
        cout << " [2] Testar valores de dominio e contradominio " << endl;
        cout << "     Para descobrir se compoem funcao, com grau 1 ou 2 " << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << " insira o numero da opcao desejada: ";
        cin  >> escolha;
        /// Validação
        while ( escolha != 1 && escolha != 2 ){
        cout << "-----------------------------------------------------------\n";
        cout << "      < Valor invalido > \n";
        cout << " (O Numero deve ser 1 ou 2)\n";
        cout << " Insira o numero do opcao (1-2): ";
        cin  >> escolha;
        }
        cout << "___________________________________________________________" << endl << endl;

        /// Explicação
        if ( escolha == 1 ){
            cout << " --> Funcao eh uma relacao entre conjuntos " << endl << endl;

            cout << "---> Caso a relacao seja entre mais de 2 conjuntos " << endl;
            cout << "     chamamos a funcao de composta " << endl << endl;

            cout << "---> Para uma relacao ser considerada uma funcao: " << endl;
            cout << "     Todos os elementos do dominio tem que possuir" << endl;
            cout << "     1 unico correspondente no contradominio " << endl << endl;

            cout << "---> Dominio = conjunto no qual sera aplicado a lei, " << endl;
            cout << "     ou seja, sao os valores que 'x' pode assumir " << endl << endl;

            cout << "---> Contradominio = conjunto dos possiveis valores " << endl;
            cout << "     correspontendes, ou seja, sao os possiveis valores de 'y' " << endl << endl;

            cout << "---> Imagem = conjunto de valores do contradominio que " << endl;
            cout << "     sao relacionados ao dominio, ou seja, valores de 'y' " << endl << endl;

            cout << "---> Os elementos de um conjunto sao relacionados aos" << endl;
            cout << "     elementos do outro conjunto por uma lei de formacao " << endl << endl;

            cout << "---> Por meio dessa lei, Classificamos o tipo de funcao " << endl;
            cout << "     Podendo ser de grau 1, 2, 3, ... , n" << endl;
            cout << "     Exponencial, Logaritica, Modular, entre outras" << endl;
            cout << "___________________________________________________________" << endl << endl;

            /// Opções
            cout << " [1] Mostrar exemplos de funcoes " << endl;
            cout << " [2] Nao mostrar exemplos de funcoes " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " insira o numero da opcao desejada: ";
            cin  >> escolha;
            /// Validação
            while ( escolha != 1 && escolha != 2 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1 ou 2)\n";
            cout << " Insira o numero do opcao (1-2): ";
            cin  >> escolha;
            }
            cout << "___________________________________________________________" << endl << endl;

            if ( escolha == 1 ){
                cout << "  (Exemplos de funcoes)  \n";
                cout << " Dominio - Contradominio  \n";
                cout << "   __        __           \n";
                cout << "  /  \\      /  \\          \n";
                cout << " | 2--|----|->4 |         \n";
                cout << " | 3--|----|->6 |         \n";
                cout << " | 1--|----|->2 |         \n";
                cout << " | 4--|----|->8 |         \n";
                cout << "  \\__/      \\__/          \n\n";
                cout << "   __        __           \n";
                cout << "  /  \\      /  \\          \n";
                cout << " | 1--|----|->3 |         \n";
                cout << " | 2--|----|->6 |         \n";
                cout << " |    |    |  2 |         \n";
                cout << " | 3--|----|->9 |         \n";
                cout << "  \\__/      \\__/          \n\n";
                cout << "   __        __           \n";
                cout << "  /  \\      /  \\          \n";
                cout << " | 1--|----|->3 |         \n";
                cout << " | 2--|----|->3 |         \n";
                cout << " |    |    |  2 |         \n";
                cout << " | 3--|----|->9 |         \n";
                cout << "  \\__/      \\__/          \n\n\n";
                cout << "----------------------------------------------\n";
                cout << " (Relacoes que nao configuram funcao abaixo) \n";
                cout << " Dominio - Contradominio  \n";
                cout << "   __        __           \n";
                cout << "  /  \\      /  \\          \n";
                cout << " | 2--|----|->4 |         \n";
                cout << " | 2--|----|->6 |         \n";
                cout << " | 1--|----|->2 |         \n";
                cout << " | 4--|----|->8 |         \n";
                cout << "  \\__/      \\__/          \n\n";
                cout << "   __        __           \n";
                cout << "  /  \\      /  \\          \n";
                cout << " | 1--|----|->3 |         \n";
                cout << " | 2--|----|->6 |         \n";
                cout << " | 5  |    |    |         \n";
                cout << " | 3--|----|->9 |         \n";
                cout << "  \\__/      \\__/          \n\n";
                cout << "   __        __           \n";
                cout << "  /  \\      /  \\          \n";
                cout << " | 1--|----|->3 |         \n";
                cout << " | 2--|----|->3 |         \n";
                cout << " | 8  |    |  2 |         \n";
                cout << " | 2--|----|->9 |         \n";
                cout << "  \\__/      \\__/          \n";
                cout << "___________________________________________________________" << endl << endl;
            }
            /// Opções
            cout << " [1] Testar valores de dominio e contradominio " << endl;
            cout << "     Para descobrir se compoem funcao, com grau 1 ou 2 " << endl;
            cout << " [2] Nao testar valores " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " insira o numero da opcao desejada: ";
            cin  >> escolha;
            /// Validação
            while ( escolha != 1 && escolha != 2 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1 ou 2)\n";
            cout << " Insira o numero do opcao (1-2): ";
            cin  >> escolha;
            }
            if ( escolha == 1 ) escolha = 2;
            else if ( escolha == 2 ) escolha = 1;
            cout << "___________________________________________________________" << endl << endl;
            }

        if ( escolha == 2 ){
        /// Opções
        cout << " [1] Testar funcao de grau 1 " << endl;
        cout << " [2] Testar funcao de grau 2 " << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << " Insira o numero do Grau: ";
        cin  >> grau;
        /// Validação
        while ( grau != 1 && grau != 2 ){
        cout << "-----------------------------------------------------------\n";
        cout << "      < Valor invalido > \n";
        cout << " (O Numero deve ser 1 ou 2)\n";
        cout << " Insira o numero do grau (1-2): ";
        cin  >> grau;
        }
        cout << "___________________________________________________________" << endl << endl;

        if ( grau == 2){
                int n, i, w, qd, qcd, novo, imagem, existe = 1, maior;
                double A, b;
        /// Testando Função do 2 grau
        cout << " Supondo que a funcao seja do tipo f(x) = Ax^2 + bx + c " <<endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << " informe o valor de A : " ;
        cin  >> A;
        /// Conferindo entre 1 ou 2 grau
        if (A == 0.0) {
                cout << "-----------------------------------------------------------" << endl;
                cout << "    (A funcao nao eh do segundo grau) " << endl;
                cout << "  Grau 1 foi selecionado automaticamente " << endl;
                cout << "___________________________________________________________" << endl << endl;
                grau = 1;
        }
        else{
        cout << " informe o valor de b : " ;
        cin  >> b;
        cout << " informe o valor de c : " ;
        cin  >> c;
        cout << "-----------------------------------------------------------" << endl;

        if (A > 0.0) tipo_de_funcao = "com concavidade para cima";
        if (A < 0.0) tipo_de_funcao = "com concavidade para baixo";
        /// Exibindo a função
        cout << " funcao: f(x) = ";
        if ( A == 1.0 ) cout << "x^2 ";
        if ( A != 1.0 ) cout << A << "x^2 ";
        if ( b == 1.0 ) cout << "+ x ";
   else if ( b >  0.0 ) cout << "+" << b << "x ";
        if ( b <  0.0 ) cout << b << "x ";
        if ( c >  0.0 ) cout << "+" << c;
        if ( c <  0.0 ) cout << c;
        cout << endl;

    cout << "___________________________________________________________" << endl << endl;
    /// Quantidades para teste
    cout << " Quantidade de Valores do dominio: ";
    cin  >> qd;
    cout << " Quantidade de Valores do contradominio: ";
    cin  >> qcd;
    cout << "___________________________________________________________" << endl << endl;
    double d[qd], cd[qcd], im[qd];

    /// Lendo o domínio
    for (i = 0; i < qd; i++){
        cout << " X(" << i+1 << ") = ";
        cin  >> d[i];
    do {/// Validando o domínio, para não repetição
        novo = 0;
        for (w = 0; w < i; w++)
        if ( d[i] == d[w] ){
            cout << " < Valor de X(" << i+1 << ") repetido > \n";
            cout << " X(" << i+1 << ") = ";
            cin >> d[i];
            novo = 1;
        }
    } while ( novo );

    }
    cout << "-----------------------------------------------------------" << endl;
    /// Lendo o contradomínio
    for (i = 0; i < qcd; i++){
        cout << " Y(" << i+1 << ") = ";
        cin  >> cd[i];
        do { /// Validando o contradomínio, para não repetição
        novo = 0;
        for (w = 0; w < i; w++)
        if ( cd[i] == cd[w] ){
            cout << " < Valor de Y(" << i+1 << ") repetido > \n";
            cout << " Y(" << i+1 << ") = ";
            cin >> cd[i];
            novo = 1;
        }
    } while ( novo );

    }
     cout << "___________________________________________________________" << endl << endl;

    /// Fazendo a relação domínio e contradomínio
    for (i = 0; i < qd; i++){
            imagem = 0;
            im[i] = A*d[i]*d[i]+b*d[i]+c;
            for ( w = 0; w < qcd; w++){
                if ( im[i] == cd[w] ) imagem = 1;
            }
            if ( imagem == 0) existe = 0;
    }
    if (  existe ) cout << " Caracteriza-se como funcao " << tipo_de_funcao << endl;
    if ( !existe ) cout << " Nao se caracteriza como funcao \n Imagem fora do conjunto do contradominio\n " << endl;
    cout << "___________________________________________________________" << endl << endl;
    if ( qd > qcd ) maior = qd;
    else maior = qcd;
    /// Exibir Valores
    cout << " Dominio  -   Imagem   -  Contradominio \n";
    for (i = 0; i < maior; i++){
            if ( i >= qd ) cout << "                       ";
            else {
                cout << " d["  << i+1 << "]=(" << d[i]  << ")  ";
                cout << " im[" << i+1 << "]=(" << im[i] << ")  ";
            }
            if ( i < qcd )
                cout << " cd[" << i+1 << "]=(" << cd[i] << ")  ";
            cout << endl;
    }
    cout << "___________________________________________________________" << endl << endl;
        }
        }

        if ( grau == 1){

    int n, i, w, qd, qcd, novo, imagem, existe = 1, maior;
    double A, b;
    /// Testando função do 1 grau
    cout << " Supondo que a funcao seja do tipo f(x) = Ax + b " << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << " informe o valor de A : " ;
    cin  >> A;
    cout << " informe o valor de b : " ;
    cin  >> b;
    cout << "-----------------------------------------------------------" << endl;

        if (A > 0.0)  tipo_de_funcao = "crescente";
        if (A < 0.0)  tipo_de_funcao = "decrescente";
        if (A == 0.0) tipo_de_funcao = "constante";

        /// Exibindo a função
        cout << " funcao: f(x) = ";
        if ( A == 0.0 ) cout << b;
   else if ( A == 1.0 ) cout << "x ";
                   else cout << A << "x ";
        if ( A != 0.0 ){
            if ( b > 0.0 ) cout << "+" << b;
            if ( b < 0.0 ) cout << b;
        }
        cout << endl;

    cout << "___________________________________________________________" << endl << endl;
    /// Quantidades para teste
    cout << " Quantidade de Valores do dominio: ";
    cin  >> qd;
    cout << " Quantidade de Valores do contradominio: ";
    cin  >> qcd;
    cout << "___________________________________________________________" << endl << endl;
    double d[qd], cd[qcd], im[qd];

    /// Lendo o contradomínio
    for (i = 0; i < qd; i++){
        cout << " X(" << i+1 << ") = ";
        cin  >> d[i];
    do { /// Validando o domínio, para não repetição
        novo = 0;
        for (w = 0; w < i; w++)
        if ( d[i] == d[w] ){
            cout << " < Valor de X(" << i+1 << ") repetido > \n";
            cout << " X(" << i+1 << ") = ";
            cin >> d[i];
            novo = 1;
        }
    } while ( novo );

    }
    cout << "-----------------------------------------------------------" << endl;
    /// Lendo contradomínio
    for (i = 0; i < qcd; i++){
        cout << " Y(" << i+1 << ") = ";
        cin  >> cd[i];
        do { /// Validando o contradomínio, para não repetição
        novo = 0;
        for (w = 0; w < i; w++)
        if ( cd[i] == cd[w] ){
            cout << " < Valor de Y(" << i+1 << ") repetido > \n";
            cout << " Y(" << i+1 << ") = ";
            cin >> cd[i];
            novo = 1;
        }
    } while ( novo );

    }
     cout << "___________________________________________________________" << endl << endl;

    /// Fazendo a relação domínio e contradomínio
    for (i = 0; i < qd; i++){
            imagem = 0;
            im[i] = A*d[i]+b;
            for ( w = 0; w < qcd; w++){
                if ( im[i] == cd[w] ) imagem = 1;
            }
            if ( imagem == 0) existe = 0;
    }
    if (  existe ) cout << " Caracteriza-se como funcao " << tipo_de_funcao << endl;
    if ( !existe ) cout << " Nao se caracteriza como funcao \n Imagem fora do conjunto do contradominio\n " << endl;
    cout << "___________________________________________________________" << endl << endl;
    if ( qd > qcd ) maior = qd;
    else maior = qcd;
    /// Exibindo valores
    cout << " Dominio  -   Imagem   -  Contradominio \n";
    for (i = 0; i < maior; i++){
            if ( i >= qd ) cout << "                       ";
            else {
                cout << " d["  << i+1 << "]=(" << d[i]  << ")  ";
                cout << " im[" << i+1 << "]=(" << im[i] << ")  ";
            }
            if ( i < qcd )
                cout << " cd[" << i+1 << "]=(" << cd[i] << ")  ";
            cout << endl;
    }
    cout << "___________________________________________________________" << endl << endl;
    }
    }
    }

    if (opcao == 2){

        string descobrir;
        int i, n, m;
        double a,x,b,c,y,c1;
        double delta,raiz1,raiz2;
        double Xv,Yv;
        cout << endl;
        /// Opções
            cout << " [1] Descobrir funcao a partir de tres pontos " << endl;
            cout << " [2] Informar os valores a, b e c f(x)= ax^2 + bx + c " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " insira o numero da opcao desejada: ";
            cin  >> escolha;
            /// Validação
            while ( escolha != 1 && escolha != 2 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1 ou 2)\n";
            cout << " Insira o numero do opcao (1-2): ";
            cin  >> escolha;
            }
            cout << "___________________________________________________________" << endl;

        if ( escolha == 1){
            double x1,x2,x3,y1,y2,y3;
            double det;
            /// Descobrindo funcao a partir de tres pontos
            cout << " Sendo os dois pontos: \n (X(1), Y(1)), (X(2), Y(2)) e (X(3), Y(3))" << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " informe: " << endl;
            cout << " X(1) = "; cin >> x1;
            cout << " Y(1) = "; cin >> y1;
            cout << " X(2) = "; cin >> x2;
            cout << " Y(2) = "; cin >> y2;
            cout << " X(3) = "; cin >> x3;
            cout << " Y(3) = "; cin >> y3;
            cout << " Pontos: ( " << x1 << ", " << y1 << " ), ( "<< x2 << ", " << y2 << " ) e ( "<< x3 << ", " << y3 << " )" << endl;

            det = x1*x1*x2 + x1*x3*x3 + x2*x2*x3 - x3*x3*x2 - x1*x1*x3 - x2*x2*x1;

            a = (x2*y1 + x1*y3 + x3*y2 - x2*y3 - x3*y1 -x1*y2)/det;
            b = (x1*x1*y2 + x3*x3*y1 + x2*x2*y3 - x3*x3*y2 - x1*x1*y3 - x2*x2*y1)/det;
            c =  y1 - a*x1*x1 - b*x1;

        }
        if ( escolha == 2){
        /// Lendo valores
        cout << "\n Supondo que a funcao seja do tipo f(x) = ax^2 + bx + c" <<endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << " informe o valor de A: ";
        cin  >> a;
        cout << " informe o valor de B: " ;
        cin  >> b;
        cout << " informe o valor de C: " ;
        cin  >> c;
        }
        cout << "-----------------------------------------------------------" << endl;
        if ( a == 0.0 && escolha == 1 ){
            /// Conferindo entre 1 e 2 grau
            cout << " A = 0, f(x) nao eh uma funcao do segundo grau \n";
            cout << " Sendo um funcao do 2 grau: f(x) = Ax^2 + bx + c " <<endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " Foi selecionado automaticamente a opcao: [1] \n";
            cout << " < [1] Estudo das Funcoes do 1 grau >   \n";
            cout << "___________________________________________________________" << endl;
            opcao = 1;
        }

        else if ( a == 0.0 && escolha == 2 ){
            /// Conferindo entre 1 e 2 grau
            cout << " A = 0, f(x) nao eh uma funcao do segundo grau \n";
            cout << "-----------------------------------------------------------" << endl;
            cout << " Foi selecionado automaticamente a opcao: [1] \n";
            cout << " < [1] Estudo das Funcoes do 1 grau >   \n";
            cout << "___________________________________________________________" << endl;
            opcao = 1;
        }

        else {
        /// Exibindo função
        cout << " funcao: f(x) = ";
        if ( a == 1.0 ) cout << "x^2 ";
        if ( a != 1.0 ) cout << a << "x^2 ";
        if ( b == 1.0 ) cout << "+ x ";
   else if ( b >  0.0 ) cout << "+" << b << "x ";
        if ( b <  0.0 ) cout << b << "x ";
        if ( c >  0.0 ) cout << "+ " << c;
        if ( c <  0.0 ) cout << c;
        cout << endl;
        cout << "___________________________________________________________" << endl << endl;


        delta = (b*b) - (4.0*a*c);
        /// Principais pontos
        if(delta < 0.0){
            cout << " A funcao nao tem raizes reais\n ";
        }
        else if (delta == 0.0 ){
            if (b == 0.0) raiz1 = 0.0;
            else raiz1=(-b)/(2.0*a);

            cout << " Raiz: x = "<< raiz1 <<endl;
        }

        else{
            raiz1=(-b - sqrt(delta))/(2.0*a);
            raiz2=(-b + sqrt(delta))/(2.0*a);
            cout << " Raiz 1: x = "<<raiz1<<endl;
            cout << " Raiz 2: x = "<<raiz2<<endl;
        }

        if (b == 0.0) Xv = 0.0;
        else Xv = -b/(2.0*a);
        if (delta == 0.0) Yv = 0.0;
        else Yv = -delta/(4.0*a);
        cout << "-----------------------------------------------------------" << endl;
        cout << "\t GRAFICO : (x,y) " << endl;
        if ( a > 0.0) cout << " a parabola tem a concavidade para cima " << endl;
        if ( a < 0.0) cout << " a parabola tem a concavidade para baixo " << endl;
        if ( delta <  0.0) cout << " a parabola nao toca o eixo X " << endl;
        if ( delta == 0.0) cout << " a parabola toca o eixo X em : (" << raiz1  << ", 0)" << endl;
        if ( delta >  0.0) cout << " a parabola toca o eixo X em : (" << raiz1  << ", 0) e (" << raiz2 <<", 0)" << endl;
        cout << " a parabola toca o eixo Y em : " << c << endl;
        cout << " a parabola tem o vertice (x,y) em : (" << Xv  << ", " << Yv <<")"<< endl;
        cout << "___________________________________________________________" << endl << endl;
            /// Opções
            cout << " [1] Calcular valores de [x] " << endl;
            cout << " [2] Calcular valores de [y] " << endl;
            cout << " [3] Calcular valores de [x] e [y]" << endl;
            cout << " [4] Nao Calcular valores " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " insira o numero da opcao desejada: ";
            cin  >> escolha;
            /// Validação
            while ( escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1, 2, 3 ou 4)\n";
            cout << " Insira o numero do opcao (1-4): ";
            cin  >> escolha;
            }
            cout << "___________________________________________________________" << endl << endl;

        n = 0; m = 0;
        /// Lendo valores
        if ( escolha == 1 ){
            cout << " Quantos valores de x deseja calcular? ";
            cin >> n;
        }
        if ( escolha == 2 ){
            cout << " Quantos valores de y deseja calcular? ";
            cin >> m;
        }
        if ( escolha == 3 ){
            cout << " Quantos valores de x deseja calcular? ";
            cin >> n;
            cout << " Quantos valores de y deseja calcular? ";
            cin >> m;
        }
        if ( escolha != 4 ) cout << "___________________________________________________________" << endl << endl;

        /// Calculando valores
        for( i = 1; i <= n; i = i + 1){
        cout << " informe o valor de Y("<< i<<") :"; cin >> y;
        c1 = c-y;
        delta = (b*b) - (4.0*a*c1);
        if (delta < 0.0){
            if (y == 0.0) cout << " A funcao nao possui raizes (y = 0)" << endl;
            else cout << " A funcao nao atinge y = " << y << endl;
        }
        else if (delta == 0.0 ){
            if (b == 0.0) raiz1 = 0.0;
            else raiz1=(-b)/(2.0*a);
            if (y == 0.0) cout << " a funcao para f(x) = " << y << ", eh o vertice e raiz da funcao \n tem x = " << raiz1 << endl;
            else cout << " a funcao para f(x) = " << y << ", eh o vertice e tem x = " << raiz1 << endl;
        }
        else{
            raiz1=(-b - sqrt(delta))/(2.0*a);
            raiz2=(-b + sqrt(delta))/(2.0*a);
            if (y == 0.0) cout << " a funcao para f(x) = " << y << ", sao as raizes \n x(1) = " << raiz1 << "\n x(2) = " << raiz2 << endl;
            else cout << " a funcao para f(x) = " << y << ", tem: \n x(1) = " << raiz1 << "\n x(2) = " << raiz2 << endl;
        }

        if ( i < n ) cout << "-----------------------------------------------------------" << endl;
        if ( i == n ) cout << "___________________________________________________________" << endl << endl;
        }

        for( i = 1; i <= m; i = i + 1){
            cout << " informe o valor de X(" << i<< ") :";
            cin >> x;
            y = a*x*x + b*x +c;
            cout << " f(" << x << ") = " << y << endl;
            if ( i < m )  cout << "-----------------------------------------------------------" << endl;
            if ( i == m ) cout << "___________________________________________________________" << endl << endl;
        }

        }
    }

    if (opcao == 1){
        string tipo_de_funcao;
        int i, n, m;
        double y,a,b,X;

        if ( escolha == 0){
            cout << endl;
            /// Opções
            cout << " [1] Descobrir funcao a partir de dois pontos" << endl;
            cout << " [2] Informar os valores a e b, f(x)= ax + b " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " insira o numero da opcao desejada: ";
            cin  >> escolha;
            /// Validação
            while ( escolha != 1 && escolha != 2 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1 ou 2)\n";
            cout << " Insira o numero do opcao (1-2): ";
            cin  >> escolha;
            }
            cout << "___________________________________________________________" << endl;
        }

        if ( escolha == 1){
            double x1,x2,y1,y2;
            /// Descobrindo funcao a partir de dois pontos
            cout << "\n Sendo os dois pontos: (X(1), Y(1)) e (X(2), Y(2))" << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " informe: " << endl;
            cout << " X(1) = "; cin >> x1;
            cout << " Y(1) = "; cin >> y1;
            cout << " X(2) = "; cin >> x2;
            cout << " Y(2) = "; cin >> y2;
            cout << " Pontos: ( " << x1 << ", " << y1 << " ) e ( "<< x2 << ", " << y2 << " )" << endl;
            cout << "___________________________________________________________" << endl << endl;
            a = (y1-y2)/(x1-x2);
            b = y1-a*x1;
        }

        if (escolha == 2){
        /// Lendo valores
        cout << "\n Supondo que a funcao seja do tipo f(x) = Ax + b" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << " informe o valor de A: ";
        cin  >> a;
        cout << " informe o valor de B: ";
        cin  >> b;
        cout << "___________________________________________________________" << endl << endl;
        }
        escolha = 0;
        /// Opções
        cout << " [1] Fazer uma funcao composta sendo f(g(x))" << endl;
        cout << "      < Considerando que g(x)= cx + d > " << endl;
        cout << " [2] Nao eh uma funcao composta " << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << " insira o numero da opcao desejada: ";
        cin  >> escolha;
        /// Validação
        while ( escolha != 1 && escolha != 2 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1 ou 2)\n";
            cout << " Insira o numero do opcao (1-2): ";
            cin  >> escolha;
            }
        cout << "-----------------------------------------------------------" << endl;
        if ( escolha == 1) cout << " Funcao composta" << endl;
                  else cout << " Funcao nao composta" << endl;
        cout << "___________________________________________________________" << endl << endl;

        if ( escolha == 1){
            double c, d;
            /// Opções
            cout << " [1] Descobrir funcao a partir de dois pontos" << endl;
            cout << " [2] Informar os valores c e d, g(x)= cx + d " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " insira o numero da opcao desejada: ";
            cin  >> escolha;
            /// Validação
            while ( escolha != 1 && escolha != 2 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1 ou 2)\n";
            cout << " Insira o numero do opcao (1-2): ";
            cin  >> escolha;
            }
            cout << "___________________________________________________________" << endl;
            if ( escolha == 1){
                double x1,x2,y1,y2;
                /// Descobrindo funcao a partir de dois pontos
                cout << " Sendo os dois pontos: (X(1), Y(1)) e (X(2), Y(2))" << endl;
                cout << "-----------------------------------------------------------" << endl;
                cout << " informe: " << endl;
                cout << " X(1) = "; cin >> x1;
                cout << " Y(1) = "; cin >> y1;
                cout << " X(2) = "; cin >> x2;
                cout << " Y(2) = "; cin >> y2;
                cout << " Pontos: ( " << x1 << ", " << y1 << " ) e ( "<< x2 << ", " << y2 << " )" << endl;
                cout << "___________________________________________________________" << endl << endl;
                c = (y1-y2)/(x1-x2);
                d = y1-c*x1;
            }
            if (escolha == 2){
                /// Lendo valores
                cout << "\n Supondo que a funcao seja do tipo g(x) = Cx + d" << endl;
                cout << "-----------------------------------------------------------" << endl;
                cout << " informe o valor de C: ";
                cin  >> c;
                cout << " informe o valor de D: ";
                cin  >> d;
                cout << "___________________________________________________________" << endl << endl;
            }
            /// Exibindo função
            cout << " f(x) = ";
            if ( a == 0.0 ) cout << b;
            else if ( a == 1.0 ) cout << "x ";
                       else cout << a << "x ";
            if ( a != 0.0 ){
                if ( b > 0.0 ) cout << "+" << b;
                if ( b < 0.0 ) cout << b;
            }
            cout << endl;

            a = a*c;
            b = a*d + b;

            cout << " g(x) = ";

            if ( c == 0.0 ) cout << d;
            else if ( c == 1.0 ) cout << "x ";
                       else cout << c << "x ";
            if ( c != 0.0 ){
                if ( d > 0.0 ) cout << "+" << d;
                if ( d < 0.0 ) cout << d;
            }
            cout << endl;
            cout << " funcao: f(g(x)) = ";
        }
        if ( escolha == 2 ) cout << " funcao: f(x) = ";

        if ( a == 0.0 ) cout << b;
        else if ( a == 1.0 ) cout << "x ";
                   else cout << a << "x ";
        if ( a != 0.0 ){
            if ( b > 0.0 ) cout << "+" << b;
            if ( b < 0.0 ) cout << b;
        }
        cout << endl;
        cout << "-----------------------------------------------------------\n";

        if (a >  0.0) tipo_de_funcao = "crescente";
        if (a <  0.0) tipo_de_funcao = "decrescente";
        if (a == 0.0) tipo_de_funcao = "constante";
        /// Principais pontos e grafico
        cout << " Funcao " << tipo_de_funcao << endl;
        if (a != 0.0) cout << " Zero da funcao eh x = " << -b/a << endl;
        cout << " A Funcao toca o eixo y em x = " << b << endl;
        cout << "___________________________________________________________" << endl;
        cout << "\n ( Grafico da Funcao )";
        cout << "\n <  Fora de Escala   > \n \n";
        if (a >  0.0){
            if ( b > 0.0){
                cout << "         ^          \n";
                cout << "         |/         \n";
                cout << "         /          \n";
                cout << "        /|          \n";
                cout << "  -----/-|--------> \n";
                cout << "      /  |          \n";
                cout << "         |          \n";
            }
            if ( b < 0.0){
                cout << "         ^          \n";
                cout << "         |          \n";
                cout << "         |  /       \n";
                cout << "  -------|-/------> \n";
                cout << "         |/         \n";
                cout << "         /          \n";
                cout << "        /|          \n";
            }
            if ( b == 0.0){
                cout << "         ^          \n";
                cout << "         | /        \n";
                cout << "         |/         \n";
                cout << "  -------/--------> \n";
                cout << "        /|          \n";
                cout << "       / |          \n";
                cout << "         |          \n";

            }
        }
        if (a <  0.0){
            if ( b > 0.0){
                cout << "         ^           \n";
                cout << "        \\|          \n";
                cout << "         \\          \n";
                cout << "         |\\         \n";
                cout << "  -------|-\\------> \n";
                cout << "         |  \\       \n";
                cout << "         |           \n";
            }
            if ( b < 0.0){
                cout << "         ^           \n";
                cout << "         |           \n";
                cout << "      \\  |          \n";
                cout << "  -----\\-|--------> \n";
                cout << "        \\|          \n";
                cout << "         \\          \n";
                cout << "         |\\         \n";

            }
            if ( b == 0.0){
                cout << "         ^           \n";
                cout << "       \\ |          \n";
                cout << "        \\|          \n";
                cout << "  -------\\--------> \n";
                cout << "         |\\         \n";
                cout << "         | \\        \n";
                cout << "         |           \n";
            }
        }
        if (a == 0.0){
            if ( b > 0.0){
                cout << "         ^          \n";
                cout << "         |          \n";
                cout << "  _______|________  \n";
                cout << "         |          \n";
                cout << "  -------|--------> \n";
                cout << "         |          \n";
                cout << "         |          \n";
            }
            if ( b < 0.0){
                cout << "         ^          \n";
                cout << "         |          \n";
                cout << "         |          \n";
                cout << "  -------|--------> \n";
                cout << "  _______|________  \n";
                cout << "         |          \n";
                cout << "         |          \n";
            }
            if ( b == 0.0){
                cout << "         ^          \n";
                cout << "         |          \n";
                cout << "         |          \n";
                cout << "  =======#========> \n";
                cout << "         |          \n";
                cout << "         |          \n";
                cout << "         |          \n";
            }
        }

            cout << "___________________________________________________________" << endl << endl;
            /// Opções
            cout << " [1] Calcular valores de [x] " << endl;
            cout << " [2] Calcular valores de [y] " << endl;
            cout << " [3] Calcular valores de [x] e [y]" << endl;
            cout << " [4] Nao calcular valores " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " insira o numero da opcao desejada: ";
            cin  >> escolha;
            /// Validação
            while ( escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1, 2, 3 ou 4)\n";
            cout << " Insira o numero do opcao (1-4): ";
            cin  >> escolha;
            }
            cout << "___________________________________________________________" << endl << endl;

        n = 0; m = 0;
        /// Lendo valores
        if ( escolha == 1 ){
            cout << " Quantos valores de x deseja calcular? ";
            cin >> n;
        }
        if ( escolha == 2 ){
            cout << " Quantos valores de y deseja calcular? ";
            cin >> m;
        }
        if ( escolha == 3 ){
            cout << " Quantos valores de x deseja calcular? ";
            cin >> n;
            cout << " Quantos valores de y deseja calcular? ";
            cin >> m;
        }
        if ( escolha != 4 ) cout << "___________________________________________________________" << endl << endl;

        /// Calculando valores
        for( i = 1; i <= n; i = i + 1){
        cout << " Y("<< i<<") = "; cin >> y;
        if ( a == 0.0 ){
            if ( y == b ) cout << " Todos os valores reais de x se encaixam em f(x) = " << y << endl;
            if ( y != b ) cout << " Nenhum valor de x atinge y = " << y << endl;
        }
        if ( a != 0.0 ){
            X = (y-b)/a;
            cout << " f(" << X << ") = " << y << ", X = " << X << endl;
            }
        if ( i < n ) cout << "-----------------------------------------------------------" << endl;
        if ( i == n ) cout << "___________________________________________________________" << endl << endl;
        }
        for( i = 1; i <= m; i = i + 1){
            cout << " X(" << i<< ") = ";
            cin >> X;
            y = a * X + b;
            cout << " f(" << X << ") = " << y << endl;
            if ( i < m )  cout << "-----------------------------------------------------------" << endl;
            if ( i == m ) cout << "___________________________________________________________" << endl << endl;
        }
    }
            /// Opções
            cout << " [1] Reiniciar o Programa " << endl;
            cout << " [2] Encerrar  o Programa " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << " Insira o numero da opcao desejada: ";
            cin  >> escolha;
            /// Validação
            while ( escolha != 1 && escolha != 2 ){
            cout << "-----------------------------------------------------------\n";
            cout << "      < Valor invalido > \n";
            cout << " (O Numero deve ser 1 ou 2)\n";
            cout << " Insira o numero do opcao (1-2): ";
            cin  >> escolha;
            }
            cout << "-----------------------------------------------------------" << endl;
    } while ( escolha == 1 );
    cout << endl;
    /// Considerações finais
    cout << " OBRIGADO POR USAR O NOSSO PROGRAMA !!! " << endl << endl;
    cout << "====================================================\n";
    cout << " Volte aqui sempre que precisar de ajuda em: " << endl;
    cout << "   1) Funcoes do 1 grau    " << endl;
    cout << "   2) Funcoes do 2 grau    " << endl;
    cout << "   3) Entendimento sobre funcoes " << endl;
    cout << "====================================================\n\n";
    cout << " Feito por:" << endl;
    cout << " Davi Cavalcanti turma 1A " << endl;
    cout << " Engenharia Civil Mackenzie " << endl << endl;
    cout << " Professora de Linguagem de Programacao: " << endl;
    cout << " Dra. Melanie Lerner Grinkraut " << endl << endl;
    cout << " 1 semestre de 2021 " << "\n\n\n\n\n\n";
    return 0;
}

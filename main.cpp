#include <iostream>
#include <string>
#include <locale.h>
#include "Entidades.h"
#include "Dominios.h"
#include "Functions.h"
#include "Testes.h"

int main(){

    //habilita a acentuação para o português
    std::setlocale(LC_ALL, "Portuguese");


    /*****************************************************************************************/
    /** Para rodar um teste basta retirar a barra dupla. Rodar apenas um teste de cada vez! **/
    /*****************************************************************************************/


    TesteCEP testeA;
    //testeA.testeCEP();

    TesteClasse testeB;
    //testeB.testeClasse();

    TesteCodigoAplicacao testeC;
    //testeC.testeCodigoAplicacao1();
    //testeC.testeCodigoAplicacao2();
    //testeC.testeCodigoAplicacao3();

    TesteCodigoAgencia testeD;
    //testeD.testeCodigoAgencia1();
    //testeD.testeCodigoAgencia2();
    //testeD.testeCodigoAgencia3();

    TesteCodigoBanco testeE;
    //testeE.testeCodigoBanco();

    TesteCodigoProduto testeF;
    //testeF.testeCodigoProduto1();
    //testeF.testeCodigoProduto2();
    //testeF.testeCodigoProduto3();

    TesteCPF testeG;
    //testeG.testeCPF1();
    //testeG.testeCPF2();
    //testeG.testeCPF3();
    //testeG.testeCPF4();

    TesteData testeH;
    //testeH.testeData1();
    //testeH.testeData2();
    //testeH.testeData3();
    //testeH.testeData4();
    //testeH.testeData5();

    TesteEmissor testeI;
    //testeI.testeEmissor1();
    //testeI.testeEmissor2();
    //testeI.testeEmissor3();
    //testeI.testeEmissor4();
    //testeI.testeEmissor5();

    TesteEndereco testeJ;
    //testeJ.testeEndereco1();
    //testeJ.testeEndereco2();
    //testeJ.testeEndereco3();
    //testeJ.testeEndereco4();
    //testeJ.testeEndereco5();

    TesteHorario testeK;
    //testeK.testeHorario1();
    //testeK.testeHorario2();
    //testeK.testeHorario3();
    //testeK.testeHorario4();

    TesteNome testeL;
    //testeL.testeNome1();
    //testeL.testeNome2();
    //testeL.testeNome3();
    //testeL.testeNome4();
    //testeL.testeNome5();
    //testeL.testeNome6();

    TesteNumero testeM;
    //testeM.testeNumero1();
    //testeM.testeNumero2();
    //testeM.testeNumero3();

    TesteSenha testeN;
    //testeN.testeSenha1();
    //testeN.testeSenha2();

    TesteTaxa testeO;
    //testeO.testeTaxa();

    TesteValorAplicacao testeP;
    //testeP.testeValorAplicacao();

    TesteValorMinimo testeQ;
    //testeQ.testeValorMinimo1();
    //testeQ.testeValorMinimo2();

    return 0;
}

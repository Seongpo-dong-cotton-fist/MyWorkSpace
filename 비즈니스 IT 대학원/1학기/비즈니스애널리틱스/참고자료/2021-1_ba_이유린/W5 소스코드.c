/* Insert this code into your C program to fire the C:\Users\yurin\Desktop\07 network */
/* This code is designed to be simple and fast for porting to any machine */
/* Therefore all code and weights are inline without looping or data storage */
/*   which might be harder to port between compilers. */
 
#include <math.h>
 
void Fire_07(double *inarray, double *outarray)
{
 double netsum;
 double feature2[7];
 
/* inarray[0] is X13_1 */
/* inarray[1] is X36_1 */
/* inarray[2] is X42_1 */
/* inarray[3] is X43_1 */
/* inarray[4] is X76_1 */
/* inarray[5] is X98_1 */
/* inarray[6] is X107_1 */
/* inarray[7] is X118_1 */
/* inarray[8] is X129_1 */
/* inarray[9] is X130_1 */
/* inarray[10] is X133_1 */
/* inarray[11] is X149_1 */
/* outarray[0] is Y */
 
inarray[0] = 1.0 / (1.0 + exp( -( inarray[0] - -2.811297E-03) / 0.9939378 ));
 
inarray[1] = 1.0 / (1.0 + exp( -( inarray[1] - -7.608058E-03) / 1.003422 ));
 
inarray[2] = 1.0 / (1.0 + exp( -( inarray[2] - 1.072774E-02) / 1.004871 ));
 
inarray[3] = 1.0 / (1.0 + exp( -( inarray[3] - 3.00326E-03) / 1.018436 ));
 
inarray[4] = 1.0 / (1.0 + exp( -( inarray[4] - -1.747611E-02) / 0.932018 ));
 
inarray[5] = 1.0 / (1.0 + exp( -( inarray[5] - 1.099983E-02) / 1.025126 ));
 
inarray[6] = 1.0 / (1.0 + exp( -( inarray[6] - 5.276411E-03) / 0.9808431 ));
 
inarray[7] = 1.0 / (1.0 + exp( -( inarray[7] - -1.408755E-02) / 0.9804764 ));
 
inarray[8] = 1.0 / (1.0 + exp( -( inarray[8] - -6.885268E-03) / 1.001274 ));
 
inarray[9] = 1.0 / (1.0 + exp( -( inarray[9] - -1.112594E-03) / 0.9923676 ));
 
inarray[10] = 1.0 / (1.0 + exp( -( inarray[10] - -4.110443E-03) / 0.9899094 ));
 
inarray[11] = 1.0 / (1.0 + exp( -( inarray[11] - -3.107299E-03) / 1.009745 ));
 
netsum = 0.0747727;
netsum += inarray[0] * 7.571837E-02;
netsum += inarray[1] * 0.1849262;
netsum += inarray[2] * -0.141077;
netsum += inarray[3] * 0.7732444;
netsum += inarray[4] * 0.1101103;
netsum += inarray[5] * 1.468999;
netsum += inarray[6] * 0.1271432;
netsum += inarray[7] * -0.247098;
netsum += inarray[8] * -7.880815E-02;
netsum += inarray[9] * 1.792302E-02;
netsum += inarray[10] * -0.3490742;
netsum += inarray[11] * 4.076027E-02;
feature2[0] = 1 / (1 + exp(-netsum));
 
netsum = 0.3735381;
netsum += inarray[0] * 0.3578725;
netsum += inarray[1] * -0.1885342;
netsum += inarray[2] * -2.815092E-02;
netsum += inarray[3] * 0.2579711;
netsum += inarray[4] * 0.3291661;
netsum += inarray[5] * 0.4056926;
netsum += inarray[6] * 0.3355802;
netsum += inarray[7] * 2.686706E-02;
netsum += inarray[8] * -0.062696;
netsum += inarray[9] * 0.3329186;
netsum += inarray[10] * 0.2199087;
netsum += inarray[11] * 8.592212E-02;
feature2[1] = 1 / (1 + exp(-netsum));
 
netsum = 9.230208E-02;
netsum += inarray[0] * 0.8743623;
netsum += inarray[1] * -0.9936915;
netsum += inarray[2] * 0.4526826;
netsum += inarray[3] * -0.9344377;
netsum += inarray[4] * 0.7115012;
netsum += inarray[5] * -2.693293;
netsum += inarray[6] * 1.494847E-02;
netsum += inarray[7] * 1.144686;
netsum += inarray[8] * 0.3731966;
netsum += inarray[9] * 0.9233061;
netsum += inarray[10] * 1.393957;
netsum += inarray[11] * 2.965886E-02;
feature2[2] = 1 / (1 + exp(-netsum));
 
netsum = 0.4999003;
netsum += inarray[0] * -0.9903392;
netsum += inarray[1] * 0.624904;
netsum += inarray[2] * -1.065115;
netsum += inarray[3] * 1.283498;
netsum += inarray[4] * -0.1904699;
netsum += inarray[5] * 2.451565;
netsum += inarray[6] * 0.7625607;
netsum += inarray[7] * -0.7906148;
netsum += inarray[8] * -0.3279134;
netsum += inarray[9] * -1.014717;
netsum += inarray[10] * -1.245775;
netsum += inarray[11] * -0.3560223;
feature2[3] = 1 / (1 + exp(-netsum));
 
netsum = 0.3028759;
netsum += inarray[0] * 0.4493823;
netsum += inarray[1] * -0.1843657;
netsum += inarray[2] * 0.1262473;
netsum += inarray[3] * -7.770688E-02;
netsum += inarray[4] * 5.728428E-02;
netsum += inarray[5] * -0.4213962;
netsum += inarray[6] * 0.3684033;
netsum += inarray[7] * 0.1561961;
netsum += inarray[8] * -6.185712E-02;
netsum += inarray[9] * 0.3908513;
netsum += inarray[10] * 0.3217532;
netsum += inarray[11] * 0.115138;
feature2[4] = 1 / (1 + exp(-netsum));
 
netsum = 0.2205914;
netsum += inarray[0] * 1.038957;
netsum += inarray[1] * -1.629691;
netsum += inarray[2] * 1.257443;
netsum += inarray[3] * -1.10601;
netsum += inarray[4] * 0.989845;
netsum += inarray[5] * -4.631643;
netsum += inarray[6] * -0.2680713;
netsum += inarray[7] * 1.062554;
netsum += inarray[8] * 0.2210478;
netsum += inarray[9] * 1.237046;
netsum += inarray[10] * 2.30957;
netsum += inarray[11] * 0.2953533;
feature2[5] = 1 / (1 + exp(-netsum));
 
netsum = 0.1819279;
netsum += inarray[0] * -0.2504594;
netsum += inarray[1] * 0.5065447;
netsum += inarray[2] * -0.1107242;
netsum += inarray[3] * 0.3677031;
netsum += inarray[4] * 0.1224073;
netsum += inarray[5] * 1.341929;
netsum += inarray[6] * 0.1873783;
netsum += inarray[7] * 1.092888E-02;
netsum += inarray[8] * 0.2419222;
netsum += inarray[9] * -0.2324586;
netsum += inarray[10] * -0.565318;
netsum += inarray[11] * -6.007478E-02;
feature2[6] = 1 / (1 + exp(-netsum));
 
netsum = 0.8109124;
netsum += feature2[0] * 1.124475;
netsum += feature2[1] * 0.2835832;
netsum += feature2[2] * -2.085718;
netsum += feature2[3] * 2.279666;
netsum += feature2[4] * -0.2458566;
netsum += feature2[5] * -3.536387;
netsum += feature2[6] * 1.120231;
outarray[0] = 1 / (1 + exp(-netsum));
 
 
outarray[0] =  (outarray[0] - .1) / .8 ;
if (outarray[0]<0) outarray[0] = 0;
if (outarray[0]>1) outarray[0] = 1;
 
               
}

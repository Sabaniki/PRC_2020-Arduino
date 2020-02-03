#ifndef plineH
#define plineH

const int r = 0;
const int l = 1;
const int f = 2;
const int s = 3;

//MOVE関数の中で直進とかいちいちMOVE(255,255)って書くのめんどいので。
void GO(int way);

//暴力的なP
void Pline();

#endif

# Bitwise-Operators
## Implementation of Bitwise Operators in Questions on C

### Pre-requisites: <br /> 
Knowledge of <br />
bitwise operators &, |, >>, <<, ^, ~ <br />
Data representation of signed and unsigned integers <br />

Q1. BitAnd

/* <br />
/*  bitAnd - x & y using only ~ and | <br />
/* Example bitAnd(6, 5) = 4 <br />
*/ Legal ops:  ~ |  <br />
/*Max ops: 8<br />
*/<br />
int bitAnd (int x, int y) { <br />
     return 0;<br />
}<br />


Q2.   BitXor

/*<br />
/*  bitXor - x ^ y using only ~ and &<br />
/* Example bitXor(4, 5) = 1<br />
*/ Legal ops:  ~ &  <br />
/* Max ops: 14<br />
*/<br />
int bitXor (int x, int y) { <br />
     return 0;<br />
}<br />


Q3. Sign

/*<br />
* sign - return 1 if positive, 0 if zero, and -1 if negative<br />
* Examples: sign(130) = 1, sign(-23) = -1<br />
* Legal ops: ! ~ & ^ | + << >><br />
* Max ops : 10<br />
*/<br />
int sign(int x) {<br />
   //TODO<br />
    return 0;<br />
}<br />

Q4. GetByte

/* <br />
* getByte - extract byte n from word x <br />
* Examples: getByte(0x12345678, 1)  = 0x56 <br />
*Legal ops: ! ~ & ^| + << >> <br />
Max ops: 6 <br />
*/<br />
int getByte(int x, int n) {<br />
    return 0;<br />
}<br />





Q5. LogicalShift

/* logicalShift - shift x to the right by n, using a logical shift<br />
*  can assume that 0 <=n<=31<br />
* examples: logicalShift(0x87654321, 4) = 0x8765432 <br />
*  Legal ops:  ~ & ^ | + << >><br />
*Max ops: 20<br />
*/<br />
int logicalShift(int x, int n) { <br />
    return 0;<br />
}<br />


Q6. Conditional

/*
* conditional - same as x ? y : z<br />
* example conditional (2, 4, 5) = 4<br />
* ! ~ & ^ | + << >><br />
* Max ops: 16<br />
*/<br />
int conditional(int x, int y, int z) {<br />
    return 0;<br />
}<br />





Q7. Bang

/* bang - Compute !x without using !<br />
*  Examples: bang(3)=0, bang(0)=1<br />
*  Legal ops: ~ & ^ | + << >><br />
*  Max ops: 12<br />
*/ <br />
int bang(int x) {<br />
    return 0;<br />
}<br />


Q8. Invert

/* 
/* Return x with the n bits that begin at position p inverted (i.e. turn 0 /* into 1 and vice versa) <br />
/* and the rest left unchanged. Consider the indices of x to begin with the /* lower -order bit   numbered <br />
/* Legal ops: ~ & ^ | << >><br />
/* as zero<br />
*/<br />
int invert (int x, int p, int n) {<br />
    //TODO<br />
    return 0;<br />
}<br />


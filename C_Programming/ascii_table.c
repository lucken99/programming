#include <stdio.h>

int main()
{
    printf("\n\t\t ASCII Table \n\n");
    printf("------------------------------------------------------\n");
    printf(" Dec\t|\tHex\t|\tOct\t|\tChar\n");
    printf("------------------------------------------------------\n");
    for(int i=0; i<128; i++) {
        printf("  %d\t|\t%X\t|\t%o\t|\t%c\n", i, i, i, i);
        if(i==27)
            printf("\n");
        printf("------------------------------------------------------\n");
    }
    printf("\n Some characters are not visible to console.");
    return 0;
}


/*********************************************

         ASCII Table 

-------------------------------------
 Dec|   Hex |   Oct |   Char
-------------------------------------
  0 |   0   |   0   |   
-------------------------------------
  1 |   1   |   1   |   
-------------------------------------
  2 |   2   |   2   |   
-------------------------------------
  3 |   3   |   3   |   
-------------------------------------
  4 |   4   |   4   |   
-------------------------------------
  5 |   5   |   5   |   
-------------------------------------
  6 |   6   |   6   |   
-------------------------------------
  7 |   7   |   7   |   
-------------------------------------
  8 |   8   |   10  |   
-------------------------------------
  9 |   9   |   11  |       
-------------------------------------
  10    |   A   |   12  |   

-------------------------------------
  11    |   B   |   13  |   
-------------------------------------
  12    |   C   |   14  |   
-------------------------------------
  13    |   D   |   15  |   

-------------------------------------
  14    |   E   |   16  |   
-------------------------------------
  15    |   F   |   17  |   
-------------------------------------
  16    |   10  |   20  |   
-------------------------------------
  17    |   11  |   21  |   
-------------------------------------
  18    |   12  |   22  |   
-------------------------------------
  19    |   13  |   23  |   
-------------------------------------
  20    |   14  |   24  |   
-------------------------------------
  21    |   15  |   25  |   
-------------------------------------
  22    |   16  |   26  |   
-------------------------------------
  23    |   17  |   27  |   
-------------------------------------
  24    |   18  |   30  |   
-------------------------------------
  25    |   19  |   31  |   
-------------------------------------
  26    |   1A  |   32  |   
-------------------------------------
  27    |   1B  |   33  |   

-------------------------------------
  28    |   1C  |   34  |   
-------------------------------------
  29    |   1D  |   35  |   
-------------------------------------
  30    |   1E  |   36  |   
-------------------------------------
  31    |   1F  |   37  |   
-------------------------------------
  32    |   20  |   40  |    
-------------------------------------
  33    |   21  |   41  |   !
-------------------------------------
  34    |   22  |   42  |   "
-------------------------------------
  35    |   23  |   43  |   #
-------------------------------------
  36    |   24  |   44  |   $
-------------------------------------
  37    |   25  |   45  |   %
-------------------------------------
  38    |   26  |   46  |   &
-------------------------------------
  39    |   27  |   47  |   '
-------------------------------------
  40    |   28  |   50  |   (
-------------------------------------
  41    |   29  |   51  |   )
-------------------------------------
  42    |   2A  |   52  |   *
-------------------------------------
  43    |   2B  |   53  |   +
-------------------------------------
  44    |   2C  |   54  |   ,
-------------------------------------
  45    |   2D  |   55  |   -
-------------------------------------
  46    |   2E  |   56  |   .
-------------------------------------
  47    |   2F  |   57  |   /
-------------------------------------
  48    |   30  |   60  |   0
-------------------------------------
  49    |   31  |   61  |   1
-------------------------------------
  50    |   32  |   62  |   2
-------------------------------------
  51    |   33  |   63  |   3
-------------------------------------
  52    |   34  |   64  |   4
-------------------------------------
  53    |   35  |   65  |   5
-------------------------------------
  54    |   36  |   66  |   6
-------------------------------------
  55    |   37  |   67  |   7
-------------------------------------
  56    |   38  |   70  |   8
-------------------------------------
  57    |   39  |   71  |   9
-------------------------------------
  58    |   3A  |   72  |   :
-------------------------------------
  59    |   3B  |   73  |   ;
-------------------------------------
  60    |   3C  |   74  |   <
-------------------------------------
  61    |   3D  |   75  |   =
-------------------------------------
  62    |   3E  |   76  |   >
-------------------------------------
  63    |   3F  |   77  |   ?
-------------------------------------
  64    |   40  |   100 |   @
-------------------------------------
  65    |   41  |   101 |   A
-------------------------------------
  66    |   42  |   102 |   B
-------------------------------------
  67    |   43  |   103 |   C
-------------------------------------
  68    |   44  |   104 |   D
-------------------------------------
  69    |   45  |   105 |   E
-------------------------------------
  70    |   46  |   106 |   F
-------------------------------------
  71    |   47  |   107 |   G
-------------------------------------
  72    |   48  |   110 |   H
-------------------------------------
  73    |   49  |   111 |   I
-------------------------------------
  74    |   4A  |   112 |   J
-------------------------------------
  75    |   4B  |   113 |   K
-------------------------------------
  76    |   4C  |   114 |   L
-------------------------------------
  77    |   4D  |   115 |   M
-------------------------------------
  78    |   4E  |   116 |   N
-------------------------------------
  79    |   4F  |   117 |   O
-------------------------------------
  80    |   50  |   120 |   P
-------------------------------------
  81    |   51  |   121 |   Q
-------------------------------------
  82    |   52  |   122 |   R
-------------------------------------
  83    |   53  |   123 |   S
-------------------------------------
  84    |   54  |   124 |   T
-------------------------------------
  85    |   55  |   125 |   U
-------------------------------------
  86    |   56  |   126 |   V
-------------------------------------
  87    |   57  |   127 |   W
-------------------------------------
  88    |   58  |   130 |   X
-------------------------------------
  89    |   59  |   131 |   Y
-------------------------------------
  90    |   5A  |   132 |   Z
-------------------------------------
  91    |   5B  |   133 |   [
-------------------------------------
  92    |   5C  |   134 |   \
-------------------------------------
  93    |   5D  |   135 |   ]
-------------------------------------
  94    |   5E  |   136 |   ^
-------------------------------------
  95    |   5F  |   137 |   _
-------------------------------------
  96    |   60  |   140 |   `
-------------------------------------
  97    |   61  |   141 |   a
-------------------------------------
  98    |   62  |   142 |   b
-------------------------------------
  99    |   63  |   143 |   c
-------------------------------------
  100   |   64  |   144 |   d
-------------------------------------
  101   |   65  |   145 |   e
-------------------------------------
  102   |   66  |   146 |   f
-------------------------------------
  103   |   67  |   147 |   g
-------------------------------------
  104   |   68  |   150 |   h
-------------------------------------
  105   |   69  |   151 |   i
-------------------------------------
  106   |   6A  |   152 |   j
-------------------------------------
  107   |   6B  |   153 |   k
-------------------------------------
  108   |   6C  |   154 |   l
-------------------------------------
  109   |   6D  |   155 |   m
-------------------------------------
  110   |   6E  |   156 |   n
-------------------------------------
  111   |   6F  |   157 |   o
-------------------------------------
  112   |   70  |   160 |   p
-------------------------------------
  113   |   71  |   161 |   q
-------------------------------------
  114   |   72  |   162 |   r
-------------------------------------
  115   |   73  |   163 |   s
-------------------------------------
  116   |   74  |   164 |   t
-------------------------------------
  117   |   75  |   165 |   u
-------------------------------------
  118   |   76  |   166 |   v
-------------------------------------
  119   |   77  |   167 |   w
-------------------------------------
  120   |   78  |   170 |   x
-------------------------------------
  121   |   79  |   171 |   y
-------------------------------------
  122   |   7A  |   172 |   z
-------------------------------------
  123   |   7B  |   173 |   {
-------------------------------------
  124   |   7C  |   174 |   |
-------------------------------------
  125   |   7D  |   175 |   }
-------------------------------------
  126   |   7E  |   176 |   ~
-------------------------------------
  127   |   7F  |   177 |   
-------------------------------------

Some characters are not visible to console.

                            - Vikas Yadav

*********************************************/
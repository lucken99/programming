# Program to print ASCII table
print("Note: Some characters are not visible to console.")
print()

print("\n\t\t ASCII Table\n")
print('-'*45)
print("Decimal\t|\tHex\t|\tOctal\t|\tChar")
print('-'*45)

for i in range(1, 128):
	if i==27:
		print(i, hex(i), oct(i), "\\n", sep="\t\t  ")
	else:
		print(i, hex(i), oct(i), chr(i), sep="\t\t  ")
	print('-'*45)


"""
Note: Some characters are not visible to console.


		 ASCII Table

---------------------------------------------
Decimal	|	Hex	|	Octal	|	Char
---------------------------------------------
1		  0x1		  0o1		  
---------------------------------------------
2		  0x2		  0o2		  
---------------------------------------------
3		  0x3		  0o3		  
---------------------------------------------
4		  0x4		  0o4		  
---------------------------------------------
5		  0x5		  0o5		  
---------------------------------------------
6		  0x6		  0o6		  
---------------------------------------------
7		  0x7		  0o7		  
---------------------------------------------
8		  0x8		  0o10		  
---------------------------------------------
9		  0x9		  0o11		  	
---------------------------------------------
10		  0xa		  0o12		  

---------------------------------------------
11		  0xb		  0o13		  
---------------------------------------------
12		  0xc		  0o14		  
---------------------------------------------
13		  0xd		  0o15		  
---------------------------------------------
14		  0xe		  0o16		  
---------------------------------------------
15		  0xf		  0o17		  
---------------------------------------------
16		  0x10		  0o20		  
---------------------------------------------
17		  0x11		  0o21		  
---------------------------------------------
18		  0x12		  0o22		  
---------------------------------------------
19		  0x13		  0o23		  
---------------------------------------------
20		  0x14		  0o24		  
---------------------------------------------
21		  0x15		  0o25		  
---------------------------------------------
22		  0x16		  0o26		  
---------------------------------------------
23		  0x17		  0o27		  
---------------------------------------------
24		  0x18		  0o30		  
---------------------------------------------
25		  0x19		  0o31		  
---------------------------------------------
26		  0x1a		  0o32		  
---------------------------------------------
27		  0x1b		  0o33		   \n
---------------------------------------------
28		  0x1c		  0o34		  
---------------------------------------------
29		  0x1d		  0o35		  
---------------------------------------------
30		  0x1e		  0o36		  
---------------------------------------------
31		  0x1f		  0o37		  
---------------------------------------------
32		  0x20		  0o40		   
---------------------------------------------
33		  0x21		  0o41		  !
---------------------------------------------
34		  0x22		  0o42		  "
---------------------------------------------
35		  0x23		  0o43		  #
---------------------------------------------
36		  0x24		  0o44		  $
---------------------------------------------
37		  0x25		  0o45		  %
---------------------------------------------
38		  0x26		  0o46		  &
---------------------------------------------
39		  0x27		  0o47		  '
---------------------------------------------
40		  0x28		  0o50		  (
---------------------------------------------
41		  0x29		  0o51		  )
---------------------------------------------
42		  0x2a		  0o52		  *
---------------------------------------------
43		  0x2b		  0o53		  +
---------------------------------------------
44		  0x2c		  0o54		  ,
---------------------------------------------
45		  0x2d		  0o55		  -
---------------------------------------------
46		  0x2e		  0o56		  .
---------------------------------------------
47		  0x2f		  0o57		  /
---------------------------------------------
48		  0x30		  0o60		  0
---------------------------------------------
49		  0x31		  0o61		  1
---------------------------------------------
50		  0x32		  0o62		  2
---------------------------------------------
51		  0x33		  0o63		  3
---------------------------------------------
52		  0x34		  0o64		  4
---------------------------------------------
53		  0x35		  0o65		  5
---------------------------------------------
54		  0x36		  0o66		  6
---------------------------------------------
55		  0x37		  0o67		  7
---------------------------------------------
56		  0x38		  0o70		  8
---------------------------------------------
57		  0x39		  0o71		  9
---------------------------------------------
58		  0x3a		  0o72		  :
---------------------------------------------
59		  0x3b		  0o73		  ;
---------------------------------------------
60		  0x3c		  0o74		  <
---------------------------------------------
61		  0x3d		  0o75		  =
---------------------------------------------
62		  0x3e		  0o76		  >
---------------------------------------------
63		  0x3f		  0o77		  ?
---------------------------------------------
64		  0x40		  0o100		  @
---------------------------------------------
65		  0x41		  0o101		  A
---------------------------------------------
66		  0x42		  0o102		  B
---------------------------------------------
67		  0x43		  0o103		  C
---------------------------------------------
68		  0x44		  0o104		  D
---------------------------------------------
69		  0x45		  0o105		  E
---------------------------------------------
70		  0x46		  0o106		  F
---------------------------------------------
71		  0x47		  0o107		  G
---------------------------------------------
72		  0x48		  0o110		  H
---------------------------------------------
73		  0x49		  0o111		  I
---------------------------------------------
74		  0x4a		  0o112		  J
---------------------------------------------
75		  0x4b		  0o113		  K
---------------------------------------------
76		  0x4c		  0o114		  L
---------------------------------------------
77		  0x4d		  0o115		  M
---------------------------------------------
78		  0x4e		  0o116		  N
---------------------------------------------
79		  0x4f		  0o117		  O
---------------------------------------------
80		  0x50		  0o120		  P
---------------------------------------------
81		  0x51		  0o121		  Q
---------------------------------------------
82		  0x52		  0o122		  R
---------------------------------------------
83		  0x53		  0o123		  S
---------------------------------------------
84		  0x54		  0o124		  T
---------------------------------------------
85		  0x55		  0o125		  U
---------------------------------------------
86		  0x56		  0o126		  V
---------------------------------------------
87		  0x57		  0o127		  W
---------------------------------------------
88		  0x58		  0o130		  X
---------------------------------------------
89		  0x59		  0o131		  Y
---------------------------------------------
90		  0x5a		  0o132		  Z
---------------------------------------------
91		  0x5b		  0o133		  [
---------------------------------------------
92		  0x5c		  0o134		  \
---------------------------------------------
93		  0x5d		  0o135		  ]
---------------------------------------------
94		  0x5e		  0o136		  ^
---------------------------------------------
95		  0x5f		  0o137		  _
---------------------------------------------
96		  0x60		  0o140		  `
---------------------------------------------
97		  0x61		  0o141		  a
---------------------------------------------
98		  0x62		  0o142		  b
---------------------------------------------
99		  0x63		  0o143		  c
---------------------------------------------
100		  0x64		  0o144		  d
---------------------------------------------
101		  0x65		  0o145		  e
---------------------------------------------
102		  0x66		  0o146		  f
---------------------------------------------
103		  0x67		  0o147		  g
---------------------------------------------
104		  0x68		  0o150		  h
---------------------------------------------
105		  0x69		  0o151		  i
---------------------------------------------
106		  0x6a		  0o152		  j
---------------------------------------------
107		  0x6b		  0o153		  k
---------------------------------------------
108		  0x6c		  0o154		  l
---------------------------------------------
109		  0x6d		  0o155		  m
---------------------------------------------
110		  0x6e		  0o156		  n
---------------------------------------------
111		  0x6f		  0o157		  o
---------------------------------------------
112		  0x70		  0o160		  p
---------------------------------------------
113		  0x71		  0o161		  q
---------------------------------------------
114		  0x72		  0o162		  r
---------------------------------------------
115		  0x73		  0o163		  s
---------------------------------------------
116		  0x74		  0o164		  t
---------------------------------------------
117		  0x75		  0o165		  u
---------------------------------------------
118		  0x76		  0o166		  v
---------------------------------------------
119		  0x77		  0o167		  w
---------------------------------------------
120		  0x78		  0o170		  x
---------------------------------------------
121		  0x79		  0o171		  y
---------------------------------------------
122		  0x7a		  0o172		  z
---------------------------------------------
123		  0x7b		  0o173		  {
---------------------------------------------
124		  0x7c		  0o174		  |
---------------------------------------------
125		  0x7d		  0o175		  }
---------------------------------------------
126		  0x7e		  0o176		  ~
---------------------------------------------
127		  0x7f		  0o177		  
---------------------------------------------
"""
	

<<'MULTILINE-COMMENT'
Impliment the reverse function, which takes in input n and reverses it. For instance, reverse(123) should return 321. You should do this without converting the inputted number into a string.
# Please do not use anything from the following list:
['encode','decode','join','zfill','codecs','chr','bytes','ascii', 'substitute','template','bin', 'os','sys','re', 
MULTILINE-COMMENT
echo $1 | rev | sed "s/^0*//"
echo $1 | rev | bc

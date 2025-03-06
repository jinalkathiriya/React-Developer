function countChar(str,char) 
{
    return str.split('').filter(c=>c==char).length;
}
console.log(countChar("hello world","o")); 
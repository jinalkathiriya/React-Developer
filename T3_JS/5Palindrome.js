function Palindrome(str) 
{
    str=str.toLowerCase();
        return str==str.split('').reverse().join('');
}
console.log(Palindrome("hello"));   

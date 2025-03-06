function fibonacci(n,sequence=[0,1]) 
{
    if(sequence.length>=n) 
        return sequence.slice(0,n);
    
    sequence.push(sequence[sequence.length-1]+sequence[sequence.length-2]);
    return fibonacci(n,sequence);
}
console.log(fibonacci(5)); 


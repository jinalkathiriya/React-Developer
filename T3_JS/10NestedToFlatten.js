function flattenArray(arr) 
{
    return arr.flat(Infinity);
}
const nestedArray = [1,[2,3],[4,[5,6],7],8];
console.log(flattenArray(nestedArray));

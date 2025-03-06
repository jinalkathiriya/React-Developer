function sortByProperty(arr,property) 
{
    return arr.sort((a,b)=>(a[property]>b[property]?1:-1));
}
const people=[
    {name:"Jinal",age:25},
    {name:"Swastik",age:22},
    {name:"Krina",age:30}
];
console.log(sortByProperty(people,"age"));

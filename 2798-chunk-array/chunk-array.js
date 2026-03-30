/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let count=0;
    let arr1 = [];
    let arr2 = [];
    for(let i=0;i<arr.length;i++){
        count++;
        arr1.push(arr[i]);
        if(count==size){
            arr2.push(arr1);
            arr1 = [];
            count =0;
        }  
    }
    if(arr1.length>=1)arr2.push(arr1);
    return arr2;
};

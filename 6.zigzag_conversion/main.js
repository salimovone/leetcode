/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    if (numRows == 1 || s.length < numRows) return s;
    let arr = Array(numRows).fill("");

    // if (numRows == 2){
    //     for(let i = 0; i < s.length; i++){
    //         if(i%2==0){
    //             arr[0] += s[i];
    //         } else {
    //             arr[1] += s[i];
    //         }
    //     }
    //     return arr.join("")
    // }

    let count = 0;
    let isDown = true;
    for(let i = 0; i < s.length; i++) {
        if(isDown) {
            arr[count] += s[i];
            count++
            if(count == numRows){
                isDown = false
                count -= 2
                continue;
            }
        }
        if(!isDown){
            arr[count] += s[i];
            count--
            if(count==0){
                isDown = true;
            }
        }
    } 
    
    return arr.join("")
};

// let res = convert("PAYPALISHIRING", 3) // PAHNAPLSIIGYIR

let res = convert("ABCD", 2)

console.log("response: ", res)
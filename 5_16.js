function snail(n) {
    var array = Array.from(Array(n), ()=> Array());
    var row = 0
    var col = -1
    var count = 1
    var trans = 1

    while (n>0) {
        for(var i = 0; i < n; i++) {
            col += trans;
            console.log("row:", row, "col:", col)
            array[row][col] = count;
            count++;
        }
        n--;
        for(var j = 0; j < n; j++) {
            row += trans;
            console.log("row:", row, "col:", col)
            array[row][col] = count;
            count++;
        }
        trans *= -1
    }
    console.log(array);
}

snail(5)
var a int
var f float32 = 11.
var i, j, k int = 1, 2, 3
var d = 5

const h = 'h'

const (
	sky = "Blue"
	Rose = "Red"
	Gyuri = "Awesome"
)

const (
	apple = iota
	grape
	orange
)

rawLiteral := 'tlqkf\n'
interLiteral := 'whffu\n'

func main() {
	var i int = 100
	var u unit = unit(i)
	var f float32 = float32(i)
	printLn(f, u)

	str := 'abc'
	bytes := []byte(str)
	str2 := string(bytes)
	printLn(bytes, str2)
}

var p *int
var q ^int
var k int = 10

var p = &k //address Assignment
printLn(*p) //actual content output

if k == 1 {
	println('One')
} else if k == 2 {
	println('two')
} else {
	println('other')
}

if val := i * 2; val < max {
	println(val)
}

func check(val int) {
	switch value {
	case 1:
		fmt.println("1이하")
		fallthrough
	case 2:
		fmt.println("2이하")
		fallthrough
	case 3:
		fmt.println("1이하")
		fallthrough
	default:
		fmt.println("default도달")
	}
}

switch v.(type) {
case int:
	println("int")
case bool:
	println("bool")
case string:
	println("string")
default:
	println("unknown")
}
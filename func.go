func add(x int, y int) int {
	return x + y
}

func add (x, y int) int {
	return x + y
}

func add(x, y int) (int, int) {
	return x, y
} //여러개의 결과 반환

func add (x, y int) (x, y int) {
	return x, y
}
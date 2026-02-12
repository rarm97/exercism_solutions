package cars

// CalculateWorkingCarsPerHour calculates how many working cars are
// produced by the assembly line every hour.
func CalculateWorkingCarsPerHour(productionRate int, successRate float64) float64 {
	prodRateFloat := float64(productionRate)
	return prodRateFloat * (successRate / 100)
}

// CalculateWorkingCarsPerMinute calculates how many working cars are
// produced by the assembly line every minute.
func CalculateWorkingCarsPerMinute(productionRate int, successRate float64) int {

	res := CalculateWorkingCarsPerHour(productionRate, successRate)
	res = res / 60
	return int(res)
}

// CalculateCost works out the cost of producing the given number of cars.
func CalculateCost(carsCount int) uint {
	groups_ten := carsCount / 10
	groups_ten *= 95000
	remainder := carsCount % 10
	remainder *= 10000
	return uint(groups_ten) + uint(remainder)
}

// Each car normally costs $10,000 to produce individually, regardless of whether it is successful or not. But with a bit of planning, 10 cars can be produced together for $95,000.

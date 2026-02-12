// Package weather included.
package weather

var (
	// CurrentCondition holds weather.
	CurrentCondition string
	// CurrentLocation holds location.
	CurrentLocation string
)

// Forecast function takes city and condition, returning formatted string.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}

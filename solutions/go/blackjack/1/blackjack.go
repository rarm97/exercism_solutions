package blackjack

// ParseCard returns the integer value of a card following blackjack ruleset.
func ParseCard(card string) int {
	switch card{ 
	case "ace":
		return 11	
	case "eight":
		return 8
	case "two":	
		return 2	
	case "nine":
		return 9
	case "three":
		return 3	
	case "four":
		return 4	
	case "five":
		return 5	
	case "queen":
		return 10
	case "king":
		return 10
	case "jack":
		return 10
	case "ten":
		return 10
	case "six":
		return 6	
	case "seven":
		return 7
	default:
		return 0	
	}
}

// FirstTurn returns the decision for the first turn, given two cards of the
// player and one card of the dealer.
func FirstTurn(card1, card2, dealerCard string) string {
	var card1_int = ParseCard(card1);
	var card2_int = ParseCard(card2);
	var dealercard_int = ParseCard(dealerCard);
	var sum = card1_int + card2_int;
	println("Card one: %s", card1)
	println("Card two: %s", card2)
	println("Dealer Card: %s", dealerCard)
	if card1_int == 0 || card2_int == 0 {
		panic("Card not recognised")
	} else if card1 == "ace" && card2 == "ace"{ 
		return "P"
	} else if sum == 21 && dealercard_int < 10 {
		return "W"
	}else if sum >= 17{
		return "S"
	}else if sum >= 12{
		if dealercard_int >= 7 {
			return "H"
		} else {
			return "S"
		}
		return "S"
	} else if sum <= 11 {
		return "H"
	}	else { 
		return "Null condiition" 
	}
}

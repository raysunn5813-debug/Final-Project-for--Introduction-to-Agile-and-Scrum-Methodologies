import calculations
import file_ops

def menu() -> int:
    """
    Displays a five-option menu and returns the user's selection as an integer.
    """
    print("\n--- Main Menu ---")
    print("1. Run First Calculation (Addition)")
    print("2. Run Second Calculation (Multiplication)")
    print("3. Write to File")
    print("4. Read from File")
    print("5. Exit")
    print("-----------------")
    
    while True:
        try:
            selection = int(input("Please select an option (1-5): "))
            if 1 <= selection <= 5:
                return selection
            print("Invalid range. Please select a number between 1 and 5.")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

def option_selector():
    """
    Integrates the menu selection with external module functions.
    """
    target_file = "coding.txt"
    
    while True:
        choice = menu()
        
        if choice == 1:
            calculations.firstCalculation(15, 27)
        elif choice == 2:
            calculations.secondCalculation(15, 27)
        elif choice == 3:
            file_ops.writeToFile(target_file, "This is the outputted information from the application.")
        elif choice == 4:
            file_ops.readFromFile(target_file)
        elif choice == 5:
            print("Exiting application...")
            break

if __name__ == "__main__":
    option_selector()
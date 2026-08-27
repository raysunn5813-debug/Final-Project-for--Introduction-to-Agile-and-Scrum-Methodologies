import os

def writeToFile(filename: str, content: str) -> None:
    """
    Writes the provided string content to a specified file. 
    Includes error handling if the file cannot be opened.
    """
    try:
        with open(filename, 'w', encoding='utf-8') as file:
            file.write(content)
        print(f"Information successfully outputted to {filename}")
    except IOError as e:
        print(f"Error: The file '{filename}' could not be opened. Details: {e}")

def readFromFile(filename: str) -> str:
    """
    Reads a file so that information can be retrieved.
    Handles missing files safely.
    """
    try:
        with open(filename, 'r', encoding='utf-8') as file:
            content = file.read()
        print(f"\n--- Retrieved from {filename} ---\n{content}")
        return content
    except FileNotFoundError:
        print(f"Error: The file '{filename}' was not found. Please write to it first.")
        return ""
    except IOError as e:
        print(f"Error: Could not read the file '{filename}'. Details: {e}")
        return ""
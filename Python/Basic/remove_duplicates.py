items = input("Enter items separated by commas: ").split(",")
unique_items = list(dict.fromkeys(item.strip() for item in items))
print("Without duplicates:", unique_items)

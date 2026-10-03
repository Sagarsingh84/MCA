# Button
import tkinter as tk
def display_message():
    print("Button click")

window = tk.Tk()
window.title("Button Example")
window.geometry("400x300")

button = tk.Button(window, text="Click me", command=display_message)
button.pack()
window.mainloop()

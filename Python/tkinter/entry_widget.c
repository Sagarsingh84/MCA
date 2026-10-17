import tkinter as tk
def display_name():
    name = entry.get()
    label.config(text="Hello " + name)

window = tk.Tk()
window.title("Entry Example")
window.geometry("400x300")

label = tk.Label(window, text="Enter your name:")
label.pack(pady=10)

entry = tk.Entry(window)
entry.pack()

button = tk.Button(window, text="Submit", command=display_name)
button.pack(pady=10)
window.mainloop()

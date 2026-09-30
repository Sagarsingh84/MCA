import tkinter as tk

window = tk.Tk()
window.title("Label Example")
window.geometry("400x300")

label = tk.Label(window, text="Welcome to python")
label.pack()
window.mainloop()

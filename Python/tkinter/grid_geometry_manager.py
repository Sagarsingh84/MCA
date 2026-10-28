import tkinter as tk

window = tk.Tk()
window.title("student form")
window.geometry("400x250") 

tk.Label(window, text="Name : ").grid(row=0, column=0)
name_entry = tk.Entry(window)
name_entry.grid(row=0, column=1)

tk.Label(window, text="Roll No: ").grid(row=1, column=0)
roll_entry = tk.Entry(window)
roll_entry.grid(row=1, column=1)

tk.Button(window, text="Submit").grid(row=2, column=1)

window.mainloop()

import tkinter as tk

def show_choice():
    label.config(text="You Selected: " + choice.get())

window = tk.Tk()
window.title("RadioButton Example")
window.geometry("400x300")

choice = tk.StringVar()

tk.Label(window, text="Select your course").pack()

tk.Radiobutton(window, text="MCA", variable=choice, value="MCA").pack()
tk.Radiobutton(window, text="BCA", variable=choice, value="BCA").pack()
tk.Radiobutton(window, text="BSc", variable=choice, value="BSc").pack()

tk.Button(window, text="Submit", command=show_choice).pack(pady=10)

label = tk.Label(window, text="")
label.pack()

window.mainloop()

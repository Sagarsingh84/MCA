import tkinter as tk
def change_text():
  label.config(text="Welcome to MCA")

window=tk.TK()
window.title("Label and Button")
windpw.geometry("400x300")

label=tk.Label(window, text="Click the button")
label.pack(pady=20)

button=tk.Button(window, text="Click Me", command=change_text)
button.pack()
window.mainloop()

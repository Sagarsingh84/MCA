import tkinter as tk

def show_selection():
  result = ""
  if python_var.get() == 1:
    result += "Python"
  if java_var.get() ==1:
    result += "Java"
  label.config(text="Selected:"+result)

window=tk.Tk()MM
window.title("checkbutton example")
window.geometry("400x300")

python_var=tk.IntVar()
java_var=tk.IntVar()

tk.Label(window,text="Select Programming Language").pack()

tk.Checkbutton(window,text="Python",variable=python_var).pack()
tk.Checkbutton(window,text="Java",variable=java_var).pack()

tk.Button(window,text="Submit",command=show_selection).pack(pady=10)

label=tk.Label(window,text="")
label.pack()
window.mainloop()

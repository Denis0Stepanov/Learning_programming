import hashlib

def my_hash(text):
    return hashlib.sha256(text.encode()).hexdigest()

hash_password = "9f9aca7eb962d89a51b2bd1b6259d417af3f9e060469e1ab559bd428b1c619ab"
count = 0

while True:
    input_password = input("Введите пароль: ")
    hash_input_password = my_hash(input_password)

    if hash_password == hash_input_password:
        print("Все нормально!!")
        break
    elif hash_password != hash_input_password:
        print("Ошибка, не правельный пароль")
        count = count + 1
        if count > 4:
            print("Попробуйте позже")
            break
    else:
        print("Ошибка 404")
        break

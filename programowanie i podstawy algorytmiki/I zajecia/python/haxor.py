text = input()

# # Pierwsza metoda
# result = ""
# for char in text:
#     if char == 'a':
#         result += str(4)
#     elif char == 'e':
#         result += str(3)
#     elif char == 'i':
#         result += str(1)
#     elif char == 'o':
#         result += str(0)
#     elif char == 's':
#         result += str(5)
#     else:
#         result += char
#
# print(result)

# Druga metoda
# code = (('a', 4), ('e', 3), ('i', 1), ('o', 0), ('s', 5))
# for tuple in code:
#     text = text.replace(tuple[0], str(tuple[1]))
# print(text)

# Trzecia metoda
dictionary ={
    'a': 4,
    'e': 3,
    'i': 1,
    'o': 0,
    's': 5
}
# for key in dictionary:
#     text = text.replace(key, str(dictionary[key]))
# print(text)

for key, value in dictionary.items():
    text = text.replace(key, str(value))
print(text)

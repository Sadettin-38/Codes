#Write a script that takes an integer as an argument and
#returns "Even" for even numbers or "Odd" for odd numbers.
read | [[ $(($1%2)) -eq 0 ]] && echo "Even" || echo "Odd"

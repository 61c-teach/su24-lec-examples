def main(): 
    x = 1
    for _ in range(100_000_000):
        x += 1
    print(x)

if __name__ == "__main__":
    main()

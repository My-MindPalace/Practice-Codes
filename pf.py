#code
keyword=None
grid = [[]]

def remove_duplication(given_list):
    list_set = list(set(given_list))
    return list_set
    

def fill_up_grid():
    global keyword,grid
    
            

def main():
    global keyword,grid
    keyword = list(input("Enter the keyword"))
    print(keyword)
    keyword_set = remove_duplication(keyword)
    grid[0].append(keyword_set)
    #fill_up_grid()

if __name__ == "__main__":
    main()

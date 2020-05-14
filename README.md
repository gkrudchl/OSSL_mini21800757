# OSSL Miniproject
Project title is **Management of the music record**.
It is a system that selects how to handle data through the menu. 
In particular, I set this program as a program to manage albums of music companies. 
It is a program that adds new albums, corrects incorrect information, and removes out-of-stock albums.   



# Function Description
The functions are devided into 4 catecories(Create, Read, Update, Delete).



## Create
- int createAlbums
  >The user can add new albums with this function


## Read
- int loadAlbums
  >It counts the number of albums in the file.
- void printAlbums
  >It prints all the albums which are in the file

## Update
- void update
  >You can enter the title of the album and modify it from the list
- void saveAlbums
  >The user saves the file after adding, deleting, or modifying contents of the files with this function

## Delete
- void deleteAlbums
  > You can enter the title of the album and delete it from the list

## Extra
- void searchAlbums
  > This function allows the user to search distinctly for information in a particular field

## ETC
- void start
  > It shows the welcome message
- int selectMenu
  > It shows the menu which the user wants to compile
- void freeAlbums
  > It can make memory free

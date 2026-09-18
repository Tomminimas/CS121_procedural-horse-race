### data
```
make a constant int num_horses
make a constant int track_length
```

### main
```
int main(){
    seed the random number generator
    make an int array called horses with 5 zeros
    make a bool called raceOver and set it to false
    while raceOver is false:
        for rach horse from 0 to 4
            call printLane with the horse number and the array
            if that horse won  and the array is true
                print "Horse (number) WINS!!!"
                set raceOver to true
        print "press enter for another turn"
        wait for the user to press enter
    return 0
}
```
### printLane
```
    given a horse number and the array of horses
    loop from zero to track_length
    if the current loop index is equal to the horse's value
        print the horse's number
    else
        print a dot
 
void printLane(int horseNum, int* horses)
    take a horse number and a pointer to the horses array
    step through 15 spots with a for loop
        if the spot == horse's position
            print the horse number
        else
            print a dot
    print a new line at the end
    return void
```
### isWinner
```
bool isWinner(int horseNum, int* horses)
    take a horse number and a pointer to the horses array
    if that horse's position is 15 or more
        return true
    else
        return false
```
### advance
```
    given a horse number and the array of horses
    roll a 0 or 1 value, put it in coin
    add coin to the horse's position value in the array
```



### make prof Andrew surprise 
```

```



### main()
```
make an araay of 5 

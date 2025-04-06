bool iswinning(char **matrix,char player)
{
    //row column check
    for(int i=0;i<3;i++)
    {
        if((matrix[i][0]==player && matrix[i][1]==player && matrix[i][2]==player)||
        (matrix[0][i]==player && matrix[1][i]==player && matrix[2][i]==player))
        {
            return true;
        }
    }
    //diagonal check
    if((matrix[0][0]==player && matrix[1][1]==player && matrix[2][2]==player)||
    (matrix[0][2]==player && matrix[1][1]==player && matrix[2][0]==player))
    {
        return true;
    }
    return false;
}
char* tictactoe(int** moves, int movesSize, int* movesColSize) {
    
    char** matrix=(char**)malloc(3*sizeof(char*));
    for(int i=0;i<3;i++)
    {
        matrix[i]=(char*)malloc(3*sizeof(char));
        for(int j=0;j<3;j++)
        {
            matrix[i][j]=' ';
        }
    }for(int i=0;i<movesSize;i++)
    {
        if(i%2==0)
        matrix[moves[i][0]][moves[i][1]]='X';
        else
        matrix[moves[i][0]][moves[i][1]]='O';
        //winning
        if(i>=4)
        {
            if(iswinning(matrix,'X'))
            {
                return "A";
            }
            if(iswinning(matrix,'O'))
            {
                return "B";
            }
        }
    }
    if(movesSize==9)
    {
        return "Draw";

    }
    else
    {
        return "Pending";
    }
}

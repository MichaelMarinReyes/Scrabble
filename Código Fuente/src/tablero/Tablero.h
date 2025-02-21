class Tablero {
    private:
        int filas;
        int columnas;
        Casilla casilla;
        Casilla casilla[15][15];
    public:
        Tablero(int _filas, int _columnas){
            filas = _filas;
            columnas = _columnas;
        }
        ~Tablero();

};

void mostrarTablero() {
    for (int i = 0; i < 15; i++) {
        for (int  j = 0; j < 15; j++) {
            //codigo
        }
        
    }
    
}

void editarCasilla(int _fila, int _columna, char _letra) {

}
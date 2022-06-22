#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Point {
    int x, y;
	Point() : Point(0, 0) {}
	Point(float x, float y) : x(x), y(y) {}
	bool operator==(const Point& rhs) const {
		return x == rhs.x && y == rhs.y;
	}
	bool operator!=(const Point& rhs) const {
		return !operator==(rhs);
	}
	Point operator+(const Point& rhs) const {
		return Point(x + rhs.x, y + rhs.y);
	}
	Point operator-(const Point& rhs) const {
		return Point(x - rhs.x, y - rhs.y);
	}
};

class gomoku{
    public:
        enum SPOT_STATE {
            EMPTY = 0,
            BLACK = 1,
            WHITE = 2
        };
        int player;
        const int SIZE = 15;
        std::array<std::array<int, SIZE>, SIZE> board;
        void read_board(std::ifstream& fin) {
            fin >> player;
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    fin >> board[i][j];
                }
            }
        }
        void StateValue(){
            
        }
};




int main(int, char** argv){
    std::ifstream fin(argv[1]);
    std::ofstream fout(argv[2]);
    gomoku.read_board(fin);

    fin.close();
    fout.close();
    return 0;
}

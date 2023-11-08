#include <fstream>
namespace c2{

    class BST{
        public:
        void readfile();
        void readfilebinary();
        void savefilebinary();
        std::ifstream file;
    };

}
namespace targets {
// TODO: Insert the code for the alien class here
class Alien{
    public:
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }

        int get_health() {
            return health;
        }

        bool hit(){
            if(health > 0){
                health--;
            }
            return true;
        }

        bool is_alive() {
            if(health > 0) {
                return true;
            }

            return false;
        }

        bool teleport(int x_new, int y_new) {
            x_coordinate = x_new;
            y_coordinate = y_new;

            return true;
        }

        bool collision_detection(Alien other_alien){
            if(other_alien.x_coordinate == x_coordinate && other_alien.y_coordinate == y_coordinate) {
                return true;
            }
            return false;
        }

    int x_coordinate{0};
    int y_coordinate{0};

    private:
        int health{3};
    
};


}  // namespace targets

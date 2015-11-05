class Vector{
private:
    punto start, end;
public:
    void distancia();
    Vector(double a,double b,double c,double d){
        start.setp(a,b);
        end.setp(c,d);
    }
};

class circulo{
public:
    punto centro;
    float r;
    void area();
    void circun();
};

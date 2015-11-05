class punto{
private:
    double x,y;
public:
    void impr();
    punto(){
        x=0.0;y=0.0;
    }
    punto(double a,double b){
        x=a;y=b;
    }
    double getx(){
        return x;
    }
    double gety(){
        return y;
    }
    void setp(double a,double b){
        x=a;y=b;
    }
};

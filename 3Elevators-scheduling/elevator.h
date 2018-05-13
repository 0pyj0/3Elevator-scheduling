class Elevator
{
    private:
        int floor; 
    public:
        int timeq;//请求时间 
        int fromfloor;//请求楼层 
        int gotofloor;//目的楼层 
        static int sum; 
        int nowFloor1(int i,int j,int &r,int &s,int f,int w);//当请求时间小于s时，
        //i为上一个请求的gotofloor和当前请求的fromfloor的时间差 
        //j为当前请求的gotofloor和fromfloor的时间差 
        //r为当前所处楼层,
        //用s(sum)计时刻，
        //f为gotofloor 
        int nowFloor2(int &s,int f,int w);//当请求时刻大于s时，直接跳到请求时刻，无需计算请求之间的耗时 
        //f为fromfloor 
        Elevator();
        ~Elevator();
};

class Elevator
{
    private:
        int floor; 
    public:
        int timeq;//����ʱ�� 
        int fromfloor;//����¥�� 
        int gotofloor;//Ŀ��¥�� 
        static int sum; 
        int nowFloor1(int i,int j,int &r,int &s,int f,int w);//������ʱ��С��sʱ��
        //iΪ��һ�������gotofloor�͵�ǰ�����fromfloor��ʱ��� 
        //jΪ��ǰ�����gotofloor��fromfloor��ʱ��� 
        //rΪ��ǰ����¥��,
        //��s(sum)��ʱ�̣�
        //fΪgotofloor 
        int nowFloor2(int &s,int f,int w);//������ʱ�̴���sʱ��ֱ����������ʱ�̣������������֮��ĺ�ʱ 
        //fΪfromfloor 
        Elevator();
        ~Elevator();
};

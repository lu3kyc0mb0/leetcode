class Solution {
private:
    int dateToDay(string date, const vector<int>& months){
        int m=stoi(date.substr(0, 2));
        int d=stoi(date.substr(3, 2));
        int dayCount=0;
        for(int i=0;i<m-1;i++)
            dayCount+=months[i];
        return dayCount+d;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> months={31,28,31,30,31,30,31,31,30,31,30,31};
        int arAl=dateToDay(arriveAlice,months);
        int leAl=dateToDay(leaveAlice,months);
        int arBo=dateToDay(arriveBob,months);
        int leBo=dateToDay(leaveBob,months);
        int startTogether=max(arAl,arBo);
        int endTogether=min(leAl,leBo);
        return max(0,endTogether-startTogether+1);
    }
};
//
// Created by troy on 12/17/16.
//

#ifndef TASK_TRAJECTORY_GENERATOR_NEWCMD_H
#define TASK_TRAJECTORY_GENERATOR_NEWCMD_H

#include<iostrem>
using namespace std;

class newcmd
{
public:
    float speed;
    float target_location;
    float acceleration;
    float deceleration;
    bool Done = false;

    int delta_t;
    void delta_x_output();
    void judge_loc();
    void done_output();
private:
    int time_sum;
    int delta_t;
    int t_acc;
    int t_mid;
    int t_dec;
    float delta_x;

    t_acc = speed/acceleration;
    t_dec = speed/deceleration;
    t_mid = (target_location - 2*speed^2/acceleration - 2*speed^2/deceleration)/speed;
};

void newcmd::delta_x_output() {


}

void newcmd::done_output() {
    while(Done == true)
    {
        cout<<"到达目标位置。"<<endl;
    }
}

#endif //TASK_TRAJECTORY_GENERATOR_NEWCMD_H

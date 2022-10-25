#pragma once

#include <st/st_common_gimmick.h>
#include <types.h>

class stMelee : public stCommonGimmick {
protected:
    // 0
    char _spacer[0x14];
    // 0x14
    char wndOnlyData2[0x10];

public:
    stMelee(char* name, int stageID);
    virtual void processBegin();
    virtual void processUpdate();
    virtual void update(float deltaFrame);
    virtual void setCameraLimitRange(float unk1, float unk2, float unk3, float unk4); // TODO
    virtual void resetCameraLimitRange();                                             // TODO
    virtual void checkChangeScene();                                                  // TODO
    virtual void resetChangeScene();                                                  // TODO
    virtual void setChangeSceneNumber();                                              // TODO
    ~stMelee();
};
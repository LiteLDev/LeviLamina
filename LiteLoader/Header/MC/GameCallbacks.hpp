// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GameCallbacks {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMECALLBACKS
public:
    class GameCallbacks& operator=(class GameCallbacks const &) = delete;
    GameCallbacks(class GameCallbacks const &) = delete;
    GameCallbacks() = delete;
#endif

public:
    /*0*/ virtual ~GameCallbacks();
    /*1*/ virtual void __unk_vfn_1() = 0;
    /*2*/ virtual void __unk_vfn_2() = 0;
    /*3*/ virtual void onBeforeSimTick();

protected:

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerVehicleTamedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERVEHICLETAMEDGOAL
public:
    class PlayerVehicleTamedGoal& operator=(class PlayerVehicleTamedGoal const&) = delete;
    PlayerVehicleTamedGoal(class PlayerVehicleTamedGoal const&) = delete;
    PlayerVehicleTamedGoal() = delete;
#endif

public:
    /*0*/ virtual ~PlayerVehicleTamedGoal();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_5();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_6();
    /*9*/ virtual void __unk_vfn_7();
    /*
    inline void tick(){
        void (PlayerVehicleTamedGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@PlayerVehicleTamedGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (PlayerVehicleTamedGoal::*rv)();
        *((void**)&rv) = dlsym("?start@PlayerVehicleTamedGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (PlayerVehicleTamedGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@PlayerVehicleTamedGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canContinueToUse(){
        bool (PlayerVehicleTamedGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@PlayerVehicleTamedGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI PlayerVehicleTamedGoal(class Mob&);

protected:

private:

};
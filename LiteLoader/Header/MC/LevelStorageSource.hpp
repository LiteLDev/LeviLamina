// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelStorageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGESOURCE
public:
    class LevelStorageSource& operator=(class LevelStorageSource const&) = delete;
    LevelStorageSource(class LevelStorageSource const&) = delete;
    LevelStorageSource() = delete;
#endif

public:
    /*0*/ virtual ~LevelStorageSource();
    /*1*/ virtual void __unk_vfn_0() = 0;
    /*2*/ virtual void __unk_vfn_1() = 0;
    /*3*/ virtual void __unk_vfn_2() = 0;
    /*4*/ virtual void __unk_vfn_3() = 0;
    /*5*/ virtual void __unk_vfn_4() = 0;
    /*6*/ virtual void __unk_vfn_5() = 0;
    /*7*/ virtual void __unk_vfn_6() = 0;
    /*8*/ virtual void __unk_vfn_7() = 0;
    /*9*/ virtual void __unk_vfn_8() = 0;
    /*10*/ virtual void __unk_vfn_9() = 0;
    /*11*/ virtual void __unk_vfn_10() = 0;
    /*12*/ virtual void __unk_vfn_11() = 0;
    /*13*/ virtual void __unk_vfn_12() = 0;
    /*14*/ virtual void __unk_vfn_13() = 0;
    /*15*/ virtual void __unk_vfn_14() = 0;
    /*16*/ virtual void __unk_vfn_15() = 0;
    /*17*/ virtual void __unk_vfn_16() = 0;
    /*18*/ virtual void __unk_vfn_17() = 0;
    /*19*/ virtual void __unk_vfn_18() = 0;
    /*20*/ virtual void __unk_vfn_19() = 0;
    /*21*/ virtual void __unk_vfn_20() = 0;
    /*22*/ virtual void __unk_vfn_21() = 0;
    /*
    inline  ~LevelStorageSource(){
         (LevelStorageSource::*rv)();
        *((void**)&rv) = dlsym("??1LevelStorageSource@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > const WORLD_SAVE_FLUSH_INTERVAL;
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > const WORLD_SAVE_MENU_FLUSH_INTERVAL;

protected:

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldgenNoise3D {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENNOISE3D
public:
    class WorldgenNoise3D& operator=(class WorldgenNoise3D const&) = delete;
    WorldgenNoise3D(class WorldgenNoise3D const&) = delete;
    WorldgenNoise3D() = delete;
#endif

public:
    /*0*/ virtual ~WorldgenNoise3D();
    /*1*/ virtual void __unk_vfn_0() = 0;
    /*
    inline  ~WorldgenNoise3D(){
         (WorldgenNoise3D::*rv)();
        *((void**)&rv) = dlsym("??1WorldgenNoise3D@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};
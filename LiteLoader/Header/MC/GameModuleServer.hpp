// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GameModuleServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEMODULESERVER
public:
    class GameModuleServer& operator=(class GameModuleServer const&) = delete;
    GameModuleServer(class GameModuleServer const&) = delete;
#endif

public:
    /*0*/ virtual ~GameModuleServer();
    /*1*/ virtual void __unk_vfn_0() = 0;
    /*2*/ virtual void __unk_vfn_1() = 0;
    /*3*/ virtual void __unk_vfn_2() = 0;
    /*4*/ virtual void __unk_vfn_3() = 0;
    /*5*/ virtual void __unk_vfn_4() = 0;
    /*6*/ virtual void __unk_vfn_5() = 0;
    /*7*/ virtual void __unk_vfn_6() = 0;
    /*8*/ virtual void __unk_vfn_7() = 0;
    /*
    inline  ~GameModuleServer(){
         (GameModuleServer::*rv)();
        *((void**)&rv) = dlsym("??1GameModuleServer@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI GameModuleServer();

protected:

private:

};
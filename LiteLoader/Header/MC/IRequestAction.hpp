// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IRequestAction {

#define AFTER_EXTRA
// Add Member There
public:
enum RequestActionType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IREQUESTACTION
public:
    class IRequestAction& operator=(class IRequestAction const&) = delete;
    IRequestAction(class IRequestAction const&) = delete;
    IRequestAction() = delete;
#endif

public:
    /*0*/ virtual ~IRequestAction();
    /*1*/ virtual void __unk_vfn_0() = 0;
    /*2*/ virtual void serialize(class CompoundTag&);
    /*3*/ virtual bool operator==(class IRequestAction&) const;
    /*
    inline  ~IRequestAction(){
         (IRequestAction::*rv)();
        *((void**)&rv) = dlsym("??1IRequestAction@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI IRequestAction(enum IRequestAction::RequestActionType const&);
    MCAPI static bool isValidTag(class CompoundTag const&);

protected:

private:

};
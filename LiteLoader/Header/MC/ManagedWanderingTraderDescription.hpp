// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ManagedWanderingTraderDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANAGEDWANDERINGTRADERDESCRIPTION
public:
    class ManagedWanderingTraderDescription& operator=(class ManagedWanderingTraderDescription const&) = delete;
    ManagedWanderingTraderDescription(class ManagedWanderingTraderDescription const&) = delete;
    ManagedWanderingTraderDescription() = delete;
#endif

public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~ManagedWanderingTraderDescription();
    /*2*/ virtual void __unk_vfn_0();
    /*
    inline void serializeData(class Json::Value& a0) const{
        void (ManagedWanderingTraderDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@ManagedWanderingTraderDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    inline  ~ManagedWanderingTraderDescription(){
         (ManagedWanderingTraderDescription::*rv)();
        *((void**)&rv) = dlsym("??1ManagedWanderingTraderDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};
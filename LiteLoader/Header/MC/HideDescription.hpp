// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HideDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDEDESCRIPTION
public:
    class HideDescription& operator=(class HideDescription const&) = delete;
    HideDescription(class HideDescription const&) = delete;
    HideDescription() = delete;
#endif

public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~HideDescription();
    /*2*/ virtual void __unk_vfn_0();
    /*
    inline void serializeData(class Json::Value& a0) const{
        void (HideDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@HideDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    inline  ~HideDescription(){
         (HideDescription::*rv)();
        *((void**)&rv) = dlsym("??1HideDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};
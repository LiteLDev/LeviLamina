// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TripodCameraDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERADESCRIPTION
public:
    class TripodCameraDescription& operator=(class TripodCameraDescription const&) = delete;
    TripodCameraDescription(class TripodCameraDescription const&) = delete;
    TripodCameraDescription() = delete;
#endif

public:
    /*0*/ virtual void __unk_vfn_0();
    /*1*/ virtual ~TripodCameraDescription();
    /*2*/ virtual void __unk_vfn_1();
    /*
    inline void serializeData(class Json::Value& a0) const{
        void (TripodCameraDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@TripodCameraDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    inline  ~TripodCameraDescription(){
         (TripodCameraDescription::*rv)();
        *((void**)&rv) = dlsym("??1TripodCameraDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    inline char const* getJsonName() const{
        char const* (TripodCameraDescription::*rv)() const;
        *((void**)&rv) = dlsym("?getJsonName@TripodCameraDescription@@UEBAPEBDXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};
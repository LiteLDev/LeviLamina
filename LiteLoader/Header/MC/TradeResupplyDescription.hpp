// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TradeResupplyDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADERESUPPLYDESCRIPTION
public:
    class TradeResupplyDescription& operator=(class TradeResupplyDescription const&) = delete;
    TradeResupplyDescription(class TradeResupplyDescription const&) = delete;
    TradeResupplyDescription() = delete;
#endif

public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~TradeResupplyDescription();
    /*2*/ virtual void __unk_vfn_0();
    /*
    inline void serializeData(class Json::Value& a0) const{
        void (TradeResupplyDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@TradeResupplyDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    inline  ~TradeResupplyDescription(){
         (TradeResupplyDescription::*rv)();
        *((void**)&rv) = dlsym("??1TradeResupplyDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnStepOffTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTEPOFFTRIGGERDESCRIPTION
public:
    class OnStepOffTriggerDescription& operator=(class OnStepOffTriggerDescription const&) = delete;
    OnStepOffTriggerDescription(class OnStepOffTriggerDescription const&) = delete;
    OnStepOffTriggerDescription() = delete;
#endif

public:
    /*0*/ virtual ~OnStepOffTriggerDescription();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    MCAPI static std::string const NameID;

protected:

private:

};
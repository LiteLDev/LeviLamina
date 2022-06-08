// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "MobEffectSubcomponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ArrowEffectSubcomponent : public MobEffectSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROWEFFECTSUBCOMPONENT
public:
    class ArrowEffectSubcomponent& operator=(class ArrowEffectSubcomponent const &) = delete;
    ArrowEffectSubcomponent(class ArrowEffectSubcomponent const &) = delete;
    ArrowEffectSubcomponent() = delete;
#endif

public:
    /*0*/ virtual ~ArrowEffectSubcomponent();
    /*2*/ virtual void writetoJSON(class Json::Value &) const;
    /*3*/ virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /*4*/ virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROWEFFECTSUBCOMPONENT
public:
#endif



};
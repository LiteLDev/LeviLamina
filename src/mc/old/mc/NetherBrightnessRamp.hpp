/**
 * @file  NetherBrightnessRamp.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "DimensionBrightnessRamp.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetherBrightnessRamp.
 *
 */
class NetherBrightnessRamp : public DimensionBrightnessRamp {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERBRIGHTNESSRAMP
public:
    class NetherBrightnessRamp& operator=(class NetherBrightnessRamp const &) = delete;
    NetherBrightnessRamp(class NetherBrightnessRamp const &) = delete;
    NetherBrightnessRamp() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetherBrightnessRamp();
    /**
     * @vftbl  2
     * @symbol  ?getBaseAmbientValue\@NetherBrightnessRamp\@\@UEBAMXZ
     */
    virtual float getBaseAmbientValue() const;

};
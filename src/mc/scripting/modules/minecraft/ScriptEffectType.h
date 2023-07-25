#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptEffectType {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTEFFECTTYPE
public:
    ScriptEffectType& operator=(ScriptEffectType const&) = delete;
    ScriptEffectType(ScriptEffectType const&)            = delete;
    ScriptEffectType()                                   = delete;
#endif

public:
    /**
     * @symbol ?getEffect\@ScriptEffectType\@ScriptModuleMinecraft\@\@QEBAAEBVMobEffect\@\@XZ
     */
    MCAPI class MobEffect const& getEffect() const;
    /**
     * @symbol
     * ?getName\@ScriptEffectType\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
};

}; // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobEffect;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffectType {
public:
    // prevent constructor by default
    ScriptEffectType& operator=(ScriptEffectType const&);
    ScriptEffectType(ScriptEffectType const&);
    ScriptEffectType();

public:
    // NOLINTBEGIN
    // symbol: ?getEffect@ScriptEffectType@ScriptModuleMinecraft@@QEBAAEBVMobEffect@@XZ
    MCAPI class MobEffect const& getEffect() const;

    // symbol:
    // ?getName@ScriptEffectType@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getName() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

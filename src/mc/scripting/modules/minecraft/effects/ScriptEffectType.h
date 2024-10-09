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
    MCAPI class MobEffect const& getEffect() const;

    MCAPI std::string getName() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

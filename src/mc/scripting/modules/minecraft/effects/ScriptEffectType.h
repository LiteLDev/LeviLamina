#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobEffect;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffectType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka2fcd9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEffectType& operator=(ScriptEffectType const&);
    ScriptEffectType(ScriptEffectType const&);
    ScriptEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::MobEffect const& getEffect() const;

    MCAPI ::std::string getName() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

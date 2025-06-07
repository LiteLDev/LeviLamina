#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotionEffectType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke17d2a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionEffectType& operator=(ScriptPotionEffectType const&);
    ScriptPotionEffectType(ScriptPotionEffectType const&);
    ScriptPotionEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getPotionEffectTypeId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

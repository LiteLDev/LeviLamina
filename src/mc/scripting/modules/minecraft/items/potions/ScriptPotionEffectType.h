#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotionEffectType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb244c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionEffectType& operator=(ScriptPotionEffectType const&);
    ScriptPotionEffectType(ScriptPotionEffectType const&);
    ScriptPotionEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<::std::optional<int>, ::Scripting::EngineError> _getDurationTicks() const;

    MCNAPI ::std::string getPotionNameIdWithPrefix();

    MCNAPI ::ScriptModuleMinecraft::ScriptPotionEffectType& operator=(::ScriptModuleMinecraft::ScriptPotionEffectType&&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

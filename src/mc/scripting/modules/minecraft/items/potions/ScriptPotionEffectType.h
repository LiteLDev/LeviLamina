#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Potion;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotionEffectType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Potion const>>> mPotion;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionEffectType& operator=(ScriptPotionEffectType const&);
    ScriptPotionEffectType(ScriptPotionEffectType const&);
    ScriptPotionEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<::std::optional<int>, ::Scripting::EngineError> _getDurationTicks() const;

    MCAPI ::std::string getPotionNameIdWithPrefix();

    MCFOLD ::ScriptModuleMinecraft::ScriptPotionEffectType&
    operator=(::ScriptModuleMinecraft::ScriptPotionEffectType&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

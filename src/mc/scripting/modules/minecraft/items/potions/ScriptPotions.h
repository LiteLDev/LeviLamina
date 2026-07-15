#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace ScriptModuleMinecraft { class ScriptPotionDeliveryType; }
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotions {
public:
    // ScriptPotions inner types define
    using Key = ::HashedString;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::Potion::PotionType,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionDeliveryType>>>
        mPotionDeliveryTypeHandles;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>>>
        mPotionEffectTypeHandles;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

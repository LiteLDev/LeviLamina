#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentType {
public:
    // prevent constructor by default
    ScriptItemEnchantmentType& operator=(ScriptItemEnchantmentType const&);
    ScriptItemEnchantmentType(ScriptItemEnchantmentType const&);
    ScriptItemEnchantmentType();

public:
    // NOLINTBEGIN
    MCAPI std::string getName() const;

    MCAPI ~ScriptItemEnchantmentType();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentType> bind();

    MCAPI static class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentType>
    getOrCreateHandle(class Scripting::WeakLifetimeScope const&, ::Enchant::Type);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

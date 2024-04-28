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

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemEnchantmentType@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptItemEnchantmentType();

    // symbol:
    // ?getName@ScriptItemEnchantmentType@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getName() const;

    // symbol: ?getType@ScriptItemEnchantmentType@ScriptModuleMinecraft@@QEBA?AW4Type@Enchant@@XZ
    MCAPI ::Enchant::Type getType() const;

    // symbol: ??4ScriptItemEnchantmentType@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemEnchantmentType&
    operator=(struct ScriptModuleMinecraft::ScriptItemEnchantmentType&&);

    // symbol: ??8ScriptItemEnchantmentType@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptItemEnchantmentType const& other) const;

    // symbol: ??1ScriptItemEnchantmentType@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemEnchantmentType();

    // symbol:
    // ?bind@ScriptItemEnchantmentType@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemEnchantmentType@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentType> bind();

    // symbol:
    // ?getOrCreateHandle@ScriptItemEnchantmentType@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@UScriptItemEnchantmentType@ScriptModuleMinecraft@@@Scripting@@AEBVWeakLifetimeScope@4@W4Type@Enchant@@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentType>
    getOrCreateHandle(class Scripting::WeakLifetimeScope const&, ::Enchant::Type);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

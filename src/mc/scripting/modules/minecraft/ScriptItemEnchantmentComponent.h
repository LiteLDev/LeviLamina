#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptItemComponent.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentInstance; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEnchantmentComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptItemEnchantmentComponent& operator=(ScriptItemEnchantmentComponent const&);
    ScriptItemEnchantmentComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemEnchantmentComponent() = default;

    // symbol: ??0ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptItemEnchantmentComponent(class ScriptModuleMinecraft::ScriptItemEnchantmentComponent const&);

    // symbol:
    // ?addEnchantment@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@UScriptItemEnchantmentLevelOutOfBoundsError@2@UScriptItemEnchantmentTypeNotCompatibleError@2@UError@Scripting@@@Scripting@@AEBUScriptItemEnchantmentInstance@2@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError,
        struct Scripting::Error>
    addEnchantment(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    // symbol:
    // ?addEnchantments@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@UScriptItemEnchantmentLevelOutOfBoundsError@2@UScriptItemEnchantmentTypeNotCompatibleError@2@UError@Scripting@@@Scripting@@AEBV?$vector@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@V?$allocator@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@@std@@@std@@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError,
        struct Scripting::Error>
    addEnchantments(std::vector<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance> const&);

    // symbol:
    // ?canAddEnchantment@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@_NUScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@UScriptItemEnchantmentLevelOutOfBoundsError@2@@Scripting@@AEBUScriptItemEnchantmentInstance@2@@Z
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError>
    canAddEnchantment(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    // symbol:
    // ?getEnchantment@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@@std@@UScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@@Scripting@@AEAVWeakLifetimeScope@4@V?$variant@V?$StrongTypedObjectHandle@UScriptItemEnchantmentType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<
        std::optional<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError>
    getEnchantment(class Scripting::WeakLifetimeScope&, std::variant<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentType>, std::string>);

    // symbol:
    // ?getEnchantments@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@V?$allocator@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@@std@@@std@@$$V@Scripting@@AEAVWeakLifetimeScope@4@@Z
    MCAPI class Scripting::Result<std::vector<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>>
    getEnchantments(class Scripting::WeakLifetimeScope&) const;

    // symbol:
    // ?getSlots@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@W4Slot@Enchant@@V?$allocator@W4Slot@Enchant@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<::Enchant::Slot>> getSlots() const;

    // symbol:
    // ?hasEnchantment@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@@Scripting@@V?$variant@V?$StrongTypedObjectHandle@UScriptItemEnchantmentType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError>
        hasEnchantment(std::variant<
                       class Scripting::StrongTypedObjectHandle<
                           struct ScriptModuleMinecraft::ScriptItemEnchantmentType>,
                       std::string>) const;

    // symbol:
    // ?removeAllEnchantments@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> removeAllEnchantments();

    // symbol:
    // ?removeEnchantment@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@UError@Scripting@@@Scripting@@V?$variant@V?$StrongTypedObjectHandle@UScriptItemEnchantmentType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError, struct Scripting::Error>
            removeEnchantment(std::variant<
                              class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemEnchantmentType>,
                              std::string>);

    // symbol:
    // ?bind@ScriptItemEnchantmentComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptItemEnchantmentComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemEnchantmentComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

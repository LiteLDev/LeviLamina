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
    // vIndex: 0
    virtual ~ScriptItemEnchantmentComponent() = default;

    MCAPI ScriptItemEnchantmentComponent(class ScriptModuleMinecraft::ScriptItemEnchantmentComponent const&);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError,
        struct Scripting::Error>
    addEnchantment(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError,
        struct Scripting::Error>
    addEnchantments(std::vector<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance> const&);

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError>
    canAddEnchantment(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    MCAPI class Scripting::Result<
        std::optional<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError>
    getEnchantment(class Scripting::WeakLifetimeScope&, std::variant<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentType>, std::string>);

    MCAPI class Scripting::Result<std::vector<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>>
    getEnchantments(class Scripting::WeakLifetimeScope&) const;

    MCAPI class Scripting::Result<std::vector<::Enchant::Slot>> getSlots() const;

    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError>
        hasEnchantment(std::variant<
                       class Scripting::StrongTypedObjectHandle<
                           struct ScriptModuleMinecraft::ScriptItemEnchantmentType>,
                       std::string>) const;

    MCAPI class Scripting::Result<void> removeAllEnchantments();

    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError, struct Scripting::Error>
            removeEnchantment(std::variant<
                              class Scripting::StrongTypedObjectHandle<
                                  struct ScriptModuleMinecraft::ScriptItemEnchantmentType>,
                              std::string>);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemEnchantmentComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

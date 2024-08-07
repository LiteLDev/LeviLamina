#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/components/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class ItemContext;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerSlot {
public:
    // prevent constructor by default
    ScriptContainerSlot& operator=(ScriptContainerSlot const&);
    ScriptContainerSlot();

public:
    // NOLINTBEGIN
    MCAPI ScriptContainerSlot(class ScriptModuleMinecraft::ScriptContainerSlot&&);

    MCAPI ScriptContainerSlot(class ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCAPI ScriptContainerSlot(class ItemContext, class Scripting::WeakLifetimeScope scope);

    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    clearDynamicProperties(struct Scripting::ContextConfig const&);

    MCAPI class Scripting::Result<int, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;

    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getCanDestroy() const;

    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getCanPlaceOn() const;

    MCAPI class Scripting::Result<
        std::optional<std::variant<double, float, bool, std::string, class Vec3>>,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicProperty(struct Scripting::ContextConfig const&, std::string const&);

    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getDynamicPropertyIds(struct Scripting::ContextConfig const&);

    MCAPI class Scripting::Result<int, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicPropertyTotalByteCount(struct Scripting::ContextConfig const&);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getItem() const;

    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getKeepOnDeath() const;

    MCAPI class Scripting::Result<::ItemLockMode, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLockMode() const;

    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getLore() const;

    MCAPI class Scripting::Result<int, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getMaxAmount() const;

    MCAPI class Scripting::
        Result<std::optional<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getNameTag() const;

    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getTags() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        struct Scripting::EngineError>
    getType() const;

    MCAPI class Scripting::Result<std::string, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTypeId() const;

    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError> hasItem() const;

    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    hasTag(std::string const& tag) const;

    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    isStackable() const;

    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    isStackableWith(class ScriptModuleMinecraft::ScriptItemStack const& other) const;

    MCAPI class ScriptModuleMinecraft::ScriptContainerSlot&
    operator=(class ScriptModuleMinecraft::ScriptContainerSlot&&);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        struct Scripting::ArgumentOutOfBoundsError>
    setAmount(int amount);

    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError, struct Scripting::Error>
        setCanDestroy(std::optional<std::vector<std::string>> const&);

    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError, struct Scripting::Error>
        setCanPlaceOn(std::optional<std::vector<std::string>> const&);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        struct Scripting::Error>
    setDynamicProperty(struct Scripting::ContextConfig const&, std::string const&, std::optional<std::variant<double, float, bool, std::string, class Vec3>> const&);

    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setItem(std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&);

    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setKeepOnDeath(bool value);

    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        setLockMode(::ItemLockMode);

    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError, struct Scripting::Error>
        setLore(std::optional<std::vector<std::string>> const&);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        struct Scripting::ArgumentOutOfBoundsError>
        setNameTag(std::optional<std::string>);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptContainerSlot> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

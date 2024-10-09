#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemStack {
public:
    // prevent constructor by default
    ScriptItemStack();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemStack(class ScriptModuleMinecraft::ScriptItemStack&&);

    MCAPI ScriptItemStack(class ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI ScriptItemStack(
        class ScriptModuleMinecraft::ScriptItemType const&                                    itemType,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType> itemTypeHandle,
        int                                                                                   amount,
        int                                                                                   data
    );

    MCAPI void clearDynamicProperties(struct Scripting::ContextConfig const& contextConfig);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>
    clone(class Scripting::WeakLifetimeScope scope) const;

    MCAPI std::vector<std::string> getCanDestroy() const;

    MCAPI std::vector<std::string> getCanPlaceOn() const;

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponent>>
          getComponent(class Scripting::WeakLifetimeScope scope, std::string const& id);

    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponent>>
          getComponents(class Scripting::WeakLifetimeScope scope);

    MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>>
          getDynamicProperty(struct Scripting::ContextConfig const& contextConfig, std::string const& key);

    MCAPI std::vector<std::string> getDynamicPropertyIds(struct Scripting::ContextConfig const& contextConfig);

    MCAPI int getDynamicPropertyTotalByteCount(struct Scripting::ContextConfig const& contextConfig);

    MCAPI class ItemInstance& getItemInstance();

    MCAPI class ItemInstance const& getItemInstance() const;

    MCAPI std::vector<std::string> getLore() const;

    MCAPI std::optional<std::string> getNameTag() const;

    MCAPI std::vector<std::string> getTags() const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType> getType() const;

    MCAPI std::string getTypeId() const;

    MCAPI bool hasComponent(class Scripting::WeakLifetimeScope scope, std::string const& id);

    MCAPI bool hasTag(std::string const& tag) const;

    MCAPI bool isStackableWith(class ScriptModuleMinecraft::ScriptItemStack const& other) const;

    MCAPI bool matches(
        std::string                                                                          itemName,
        std::optional<std::unordered_map<std::string, std::variant<int, std::string, bool>>> properties
    ) const;

    MCAPI class ScriptModuleMinecraft::ScriptItemStack& operator=(class ScriptModuleMinecraft::ScriptItemStack&&);

    MCAPI class ScriptModuleMinecraft::ScriptItemStack& operator=(class ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI class Scripting::Result<void> setAmount(int amount);

    MCAPI class Scripting::Result<void> setCanDestroy(std::optional<std::vector<std::string>> const& blockIdentifiers);

    MCAPI class Scripting::Result<void> setCanPlaceOn(std::optional<std::vector<std::string>> const& blockIdentifiers);

    MCAPI class Scripting::Result<void> setDynamicProperty(
        struct Scripting::ContextConfig const&                                           contextConfig,
        std::string const&                                                               key,
        std::optional<std::variant<double, float, bool, std::string, class Vec3>> const& optionalValue
    );

    MCAPI class Scripting::Result<void> setLore(std::optional<std::vector<std::string>> const& loreList);

    MCAPI void setLoreV010(std::optional<std::vector<std::string>> const& loreList);

    MCAPI class Scripting::Result<void> setNameTag(std::optional<std::string> nameTag);

    MCAPI void setNameTagV010(std::optional<std::string> nameTag);

    MCAPI ~ScriptItemStack();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemStack>
    bind(struct Scripting::Version const& version);

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>
    createHandle(class Scripting::WeakLifetimeScope scope, class ItemStackBase const& item);

    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
    createOptionalHandle(class Scripting::WeakLifetimeScope scope, class ItemStackBase const& item);

    MCAPI static std::optional<struct Scripting::Error> validateLoreLength(std::vector<std::string> const& loreList);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemRegistryRef;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItems {
public:
    // prevent constructor by default
    ScriptItems& operator=(ScriptItems const&);
    ScriptItems(ScriptItems const&);
    ScriptItems();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          get(class Scripting::WeakLifetimeScope& scope, std::string const& itemName);

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          getOrAdd(class Scripting::WeakLifetimeScope& scope, std::string const& itemName);

    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder, class ItemRegistryRef itemRegistry);

    MCAPI static std::unordered_map<std::string, std::string>
    generateItemPropertyNameToRawNameMap(class ItemRegistryRef itemRegistry);

    MCAPI static std::vector<std::string> generatetItemCooldownCategories(class ItemRegistryRef itemRegistry);

    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(class Scripting::WeakLifetimeScope scope, std::string const& identifier);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          _getItemHandleForAlias(class HashedString const& aliasName) const;

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          _registerItemType(
              std::unordered_map<
                  std::string,
                  class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>& registry,
              class Scripting::WeakLifetimeScope                                                          scope,
              std::string                                                                                 itemName
          );

    MCAPI void _registerItems(class Scripting::WeakLifetimeScope& scope);

    MCAPI void _tryRegisterItemTypeAlias(class HashedString const& aliasName);

    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(class Scripting::WeakLifetimeScope scope, std::string const& lookupName);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

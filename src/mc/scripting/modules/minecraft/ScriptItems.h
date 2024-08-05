#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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
          get(class Scripting::WeakLifetimeScope&, std::string const&);

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          getOrAdd(class Scripting::WeakLifetimeScope&, std::string const&);

    MCAPI static void bind(class Scripting::ModuleBindingBuilder&, class ItemRegistryRef);

    MCAPI static std::unordered_map<std::string, std::string> generateItemPropertyNameToRawNameMap(class ItemRegistryRef
    );

    MCAPI static std::vector<std::string> generatetItemCooldownCategories(class ItemRegistryRef);

    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(class Scripting::WeakLifetimeScope, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          _getItemHandleForAlias(class HashedString const&) const;

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          _registerItemType(
              std::unordered_map<
                  std::string,
                  class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>&,
              class Scripting::WeakLifetimeScope,
              std::string
          );

    MCAPI void _registerItems(class Scripting::WeakLifetimeScope&);

    MCAPI void _tryRegisterItemTypeAlias(class HashedString const&);

    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(class Scripting::WeakLifetimeScope, std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

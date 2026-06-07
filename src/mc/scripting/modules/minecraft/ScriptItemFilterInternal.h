#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Item;
namespace ScriptModuleMinecraft { class ScriptItemFilterError; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptItemFilterInternal {
// functions
// NOLINTBEGIN
MCAPI ::nonstd::expected<::WeakPtr<::Item const>, ::ScriptModuleMinecraft::ScriptItemFilterError> resolveItemType(
    ::Scripting::WeakLifetimeScope const& scope,
    ::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>, ::std::string> const&
        itemTypeParam
);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptItemFilterInternal

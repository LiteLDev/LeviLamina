#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptItemCustomComponentReader() = default;

    virtual ::std::vector<::std::string_view> getValidComponentsForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle
    ) const = 0;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle,
        ::std::string_view                                                           componentName,
        ::Scripting::WeakLifetimeScope const&                                        scope
    ) const = 0;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

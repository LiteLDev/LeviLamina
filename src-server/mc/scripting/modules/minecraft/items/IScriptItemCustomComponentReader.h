#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"

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
    // vIndex: 0
    virtual ~IScriptItemCustomComponentReader() = default;

    // vIndex: 1
    virtual ::std::vector<::std::string_view> getValidComponentsForItem(::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>) const = 0;

    // vIndex: 2
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const& tryGetCustomComponentParametersForItem(::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>, ::std::string_view, ::Scripting::WeakLifetimeScope const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}

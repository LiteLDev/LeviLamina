#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptItemComponentFactory() = default;

    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent> createComponent(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>,
        ::Scripting::WeakLifetimeScope const&
    ) const = 0;

    // vIndex: 2
    virtual ::Scripting::ClassBinding bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&) const = 0;

    // vIndex: 3
    virtual bool canAddOn(::ScriptModuleMinecraft::ScriptItemStack&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

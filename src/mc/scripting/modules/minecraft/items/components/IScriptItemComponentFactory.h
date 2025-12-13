#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

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
    virtual ~IScriptItemComponentFactory() = default;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent> createComponent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>,
        ::Scripting::WeakLifetimeScope const&
    ) const = 0;

    virtual ::Scripting::ClassBinding bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&) const = 0;

    virtual bool canAddOn(::ScriptModuleMinecraft::ScriptItemStack&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

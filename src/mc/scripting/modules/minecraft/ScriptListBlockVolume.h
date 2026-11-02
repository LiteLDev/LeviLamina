#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptListBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptListBlockVolume();

    MCNAPI ScriptListBlockVolume(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCNAPI ScriptListBlockVolume(::ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);

    MCNAPI void add(::std::vector<::Vec3> const& locations);

    MCNAPI ::ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCNAPI ::ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);

    MCNAPI void remove(::std::vector<::Vec3> const& locations);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    $getBlockLocationIterator(::Scripting::WeakLifetimeScope scope);

    MCNAPI ::std::unique_ptr<::BaseBlockLocationIterator> $createBlockLocationIterator();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

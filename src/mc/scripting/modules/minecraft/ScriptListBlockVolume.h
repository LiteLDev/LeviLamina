#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptListBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;

    // vIndex: 0
    virtual ~ScriptListBlockVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptListBlockVolume();

    MCAPI ScriptListBlockVolume(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCAPI ScriptListBlockVolume(::ScriptModuleMinecraft::ScriptListBlockVolume const&);

    MCAPI void add(::std::vector<::Vec3> const& locations);

    MCAPI ::ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);

    MCAPI ::ScriptModuleMinecraft::ScriptListBlockVolume& operator=(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs
    );

    MCAPI void remove(::std::vector<::Vec3> const& locations);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptListBlockVolume> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptListBlockVolume const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    $getBlockLocationIterator(::Scripting::WeakLifetimeScope scope);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

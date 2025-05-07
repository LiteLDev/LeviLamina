#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptListBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // prevent constructor by default
    ScriptListBlockVolume& operator=(ScriptListBlockVolume const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;

    // vIndex: 0
    virtual ~ScriptListBlockVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptListBlockVolume();

    MCNAPI ScriptListBlockVolume(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCNAPI ScriptListBlockVolume(::ScriptModuleMinecraft::ScriptListBlockVolume const&);

    MCNAPI explicit ScriptListBlockVolume(::std::vector<::Vec3> const& locations);

    MCNAPI void add(::std::vector<::Vec3> const& locations);

    MCNAPI void remove(::std::vector<::Vec3> const& locations);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptListBlockVolume> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptListBlockVolume const&);

    MCNAPI void* $ctor(::std::vector<::Vec3> const& locations);
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

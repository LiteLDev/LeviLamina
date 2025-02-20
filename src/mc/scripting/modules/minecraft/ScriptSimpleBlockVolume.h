#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"
#include "mc/world/level/block/SimpleBlockVolume.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;

    // vIndex: 0
    virtual ~ScriptSimpleBlockVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSimpleBlockVolume();

    MCAPI ScriptSimpleBlockVolume(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const& rhs);

    MCAPI ScriptSimpleBlockVolume(::Vec3 const& from, ::Vec3 const& to);

    MCAPI bool doesLocationTouchFaces(::Vec3 const& pos);

    MCAPI bool doesVolumeTouchFaces(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const& other);

    MCAPI ::Vec3 getFrom() const;

    MCAPI ::Vec3 getTo() const;

    MCAPI ::SimpleBlockVolume::IntersectionResult
    intersects(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const& other);

    MCAPI ::ScriptModuleMinecraft::ScriptSimpleBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const& rhs);

    MCAPI void setFrom(::Vec3 const& from);

    MCAPI void setTo(::Vec3 const& to);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> bind();

    MCAPI static ::Scripting::
        EnumBindingBuilder<::SimpleBlockVolume::IntersectionResult, ::SimpleBlockVolume::IntersectionResult>
        bindEnums();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const& rhs);

    MCAPI void* $ctor(::Vec3 const& from, ::Vec3 const& to);
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

    MCAPI ::std::unique_ptr<::BaseBlockLocationIterator> $createBlockLocationIterator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"
#include "mc/world/level/block/SimpleBlockVolume.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;

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
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::EnumBinding bindEnums();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const& rhs);

    MCAPI void* $ctor(::Vec3 const& from, ::Vec3 const& to);
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb35746;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockVolumeBase& operator=(ScriptBlockVolumeBase const&);
    ScriptBlockVolumeBase(ScriptBlockVolumeBase const&);
    ScriptBlockVolumeBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockVolumeBase();

    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
        getBlockLocationIterator(::Scripting::WeakLifetimeScope) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void forEach(::std::function<bool(::BlockPos const&)> callback) const;

    MCAPI ::Scripting::Result_deprecated<::BoundingBox> getBoundingBox() const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getMax() const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getMin() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockVolumeBase> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

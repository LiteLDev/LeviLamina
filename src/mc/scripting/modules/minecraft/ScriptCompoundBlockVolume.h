#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolume
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptCompoundBlockVolume> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf65901;
    ::ll::UntypedStorage<8, 16> mUnk13417a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCompoundBlockVolume(ScriptCompoundBlockVolume const&);
    ScriptCompoundBlockVolume();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCompoundBlockVolume(::CompoundBlockVolume const& volume, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ::ScriptModuleMinecraft::ScriptCompoundBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptCompoundBlockVolume const&);

    MCAPI ~ScriptCompoundBlockVolume();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::CompoundBlockVolumeAction, ::CompoundBlockVolumeAction>
    bindActionEnums();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptCompoundBlockVolume> bindClass();

    MCAPI static ::Scripting::
        EnumBindingBuilder<::CompoundBlockVolumePositionRelativity, ::CompoundBlockVolumePositionRelativity>
        bindRelativeEnums();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CompoundBlockVolume const& volume, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

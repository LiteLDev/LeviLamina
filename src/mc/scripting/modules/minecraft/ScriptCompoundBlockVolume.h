#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolume
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>,
  public ::ScriptModuleMinecraft::ScriptBlockVolumeIterable {
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptCompoundBlockVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptCompoundBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptCompoundBlockVolume const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<::CompoundBlockVolumeAction, ::CompoundBlockVolumeAction>
    bindActionEnums();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptCompoundBlockVolume> bindClass();

    MCNAPI static ::Scripting::
        EnumBindingBuilder<::CompoundBlockVolumePositionRelativity, ::CompoundBlockVolumePositionRelativity>
        bindRelativeEnums();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

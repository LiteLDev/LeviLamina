#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockContainerAccessAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                           mPos;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockContainerAccessAfterEventIntermediateData&
    operator=(ScriptBlockContainerAccessAfterEventIntermediateData const&);
    ScriptBlockContainerAccessAfterEventIntermediateData(ScriptBlockContainerAccessAfterEventIntermediateData const&);
    ScriptBlockContainerAccessAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockContainerAccessAfterEventIntermediateData(
        ::Dimension&   dimension,
        ::BlockPos     pos,
        ::Actor const& accessSourceActor
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, ::BlockPos pos, ::Actor const& accessSourceActor);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

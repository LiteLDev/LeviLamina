#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockExplodedAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                 mBlockPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                                              mDestroyedBlock;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockExplodedAfterEventIntermediateData& operator=(ScriptBlockExplodedAfterEventIntermediateData const&);
    ScriptBlockExplodedAfterEventIntermediateData(ScriptBlockExplodedAfterEventIntermediateData const&);
    ScriptBlockExplodedAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockExplodedAfterEventIntermediateData(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Dimension& dimension, ::BlockPos const& blockPos, ::Block const& destroyedBlock, ::Actor* source);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

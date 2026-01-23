#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class Dimension;
class ItemStackBase;
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 8, ::Block const&>                            mDestroyedBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mPos;
    ::ll::TypedStorage<8, 8, ::Dimension&>                              mDimension;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                          mItemAfter;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                          mItemBefore;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockAfterEventIntermediateData&
    operator=(ScriptPlayerBreakBlockAfterEventIntermediateData const&);
    ScriptPlayerBreakBlockAfterEventIntermediateData(ScriptPlayerBreakBlockAfterEventIntermediateData const&);
    ScriptPlayerBreakBlockAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerBreakBlockAfterEventIntermediateData(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& afterBreakItem,
        ::ItemStackBase const& beforeBreakItem
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& afterBreakItem,
        ::ItemStackBase const& beforeBreakItem
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

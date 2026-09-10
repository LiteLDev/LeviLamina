#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mBeforeItemStack;
    ::ll::TypedStorage<8, 152, ::ItemStack>                             mAfterItemStack;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                            mBlockSource;
    ::ll::TypedStorage<4, 12, ::Vec3>                                   mBlockLocation;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing>     mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                                   mFaceLocation;
    ::ll::TypedStorage<1, 1, bool>                                      mIsFirstEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockIntermediateData& operator=(ScriptPlayerInteractWithBlockIntermediateData const&);
    ScriptPlayerInteractWithBlockIntermediateData(ScriptPlayerInteractWithBlockIntermediateData const&);
    ScriptPlayerInteractWithBlockIntermediateData();
};

} // namespace ScriptModuleMinecraft

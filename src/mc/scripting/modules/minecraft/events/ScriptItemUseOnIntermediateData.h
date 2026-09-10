#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar const>                                     mFace;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                   mFaceLocation;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                               mBlockPosition;
    ::ll::TypedStorage<1, 1, bool>                                            mIsFirstEvent;
    ::ll::TypedStorage<8, 128, ::ItemInstance const>                          mItemInstance;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData const> mPlayer;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                                  mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnIntermediateData& operator=(ScriptItemUseOnIntermediateData const&);
    ScriptItemUseOnIntermediateData(ScriptItemUseOnIntermediateData const&);
    ScriptItemUseOnIntermediateData();
};

} // namespace ScriptModuleMinecraft

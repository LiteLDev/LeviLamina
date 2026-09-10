#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseOnIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance>                          mItemInstance;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<1, 1, uchar const>                               mFace;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mBlockPosition;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                            mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStartUseOnIntermediateData& operator=(ScriptItemStartUseOnIntermediateData const&);
    ScriptItemStartUseOnIntermediateData(ScriptItemStartUseOnIntermediateData const&);
    ScriptItemStartUseOnIntermediateData();
};

} // namespace ScriptModuleMinecraft

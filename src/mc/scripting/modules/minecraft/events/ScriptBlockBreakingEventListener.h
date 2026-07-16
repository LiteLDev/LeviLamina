#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockBreakingEventListener {
public:
    // ScriptBlockBreakingEventListener inner types declare
    // clang-format off
    struct PlayerBreakingBlockInfo;
    // clang-format on

    // ScriptBlockBreakingEventListener inner types define
    struct PlayerBreakingBlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
        ::ll::TypedStorage<1, 1, uchar>       mFace;
        // NOLINTEND
    };

    using SendCancelBreakingFunction = ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar, int)>;

    using SendStartBreakingFunction = ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ActorUniqueID,
            ::ScriptModuleMinecraft::ScriptBlockBreakingEventListener::PlayerBreakingBlockInfo>>
        mPlayerBreakingBlock;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar)>>
        mSendStartBreakingFunction;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar, int)>>
        mSendCancelBreakingFunction;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScriptBlockBreakingEventListener();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ScriptBlockBreakingEventListener(
        ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar)>      sendStartBreakingFunction,
        ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar, int)> sendCancelBreakingFunction
    );

    MCAPI void _flushPlayerBreaking(::Player& player, int previousProgress);

    MCAPI void _startBreakingBlock(
        ::Player&         player,
        ::BlockPos const& blockPos,
        ::Block const&    hitBlock,
        uchar             face,
        int               previousProgress
    );

    MCAPI void onBreakBlock(::Player& player);

    MCAPI ~ScriptBlockBreakingEventListener();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar)>      sendStartBreakingFunction,
        ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar, int)> sendCancelBreakingFunction
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

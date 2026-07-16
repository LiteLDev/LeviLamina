#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/gamemode/IGameModeMessenger.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStack;
class Player;
// clang-format on

namespace GameModeExt {

struct CommonGameModeMessenger : public ::IGameModeMessenger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonGameModeMessenger& operator=(CommonGameModeMessenger const&);
    CommonGameModeMessenger(CommonGameModeMessenger const&);
    CommonGameModeMessenger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommonGameModeMessenger() /*override*/ = default;

    virtual ::gsl::final_action<::std::function<void()>> createBlockBreakCaptureScope(
        ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)>
    ) /*override*/;

    virtual void sendDenyDestroyBlock(::BlockPos const&, int) /*override*/;

    virtual void sendStartDestroyBlock(::BlockPos const&, int) /*override*/;

#ifdef LL_PLAT_S
    virtual void sendDestroyBlock(::Block const&, ::BlockPos const&, int) /*override*/;
#else // LL_PLAT_C
    virtual void sendDestroyBlock(::Block const& oldBlock, ::BlockPos const& pos, int variantData) /*override*/;
#endif

    virtual void sendChangeContinueDestroyBlock(::BlockPos const&, int) /*override*/;

    virtual void sendContinueDestroyAboutToDestroyBlock(::BlockPos const&, int) /*override*/;

    virtual void sendStopDestroyBlock(::BlockPos const&, float) /*override*/;

#ifdef LL_PLAT_S
    virtual void sendStartItemUseOn(::BlockPos const&, ::BlockPos const&, int) /*override*/;
#else // LL_PLAT_C
    virtual void sendStartItemUseOn(::BlockPos const& pos, ::BlockPos const& buildPos, int face) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void sendStopItemUseOn(::BlockPos const&) /*override*/;
#else // LL_PLAT_C
    virtual void sendStopItemUseOn(::BlockPos const& pos) /*override*/;
#endif

    virtual void tryRotateTowardsAimAssist() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::gsl::final_action<::std::function<void()>>
        $createBlockBreakCaptureScope(::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)>);

    MCFOLD void $sendDenyDestroyBlock(::BlockPos const&, int);

    MCFOLD void $sendStartDestroyBlock(::BlockPos const&, int);

    MCAPI void $sendDestroyBlock(::Block const& oldBlock, ::BlockPos const& pos, int variantData);

    MCFOLD void $sendChangeContinueDestroyBlock(::BlockPos const&, int);

    MCFOLD void $sendContinueDestroyAboutToDestroyBlock(::BlockPos const&, int);

    MCFOLD void $sendStopDestroyBlock(::BlockPos const&, float);

    MCAPI void $sendStartItemUseOn(::BlockPos const& pos, ::BlockPos const& buildPos, int face);

    MCAPI void $sendStopItemUseOn(::BlockPos const& pos);

    MCFOLD void $tryRotateTowardsAimAssist();
#endif


    // NOLINTEND
};

} // namespace GameModeExt

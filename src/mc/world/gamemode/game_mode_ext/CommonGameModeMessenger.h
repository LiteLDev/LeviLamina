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
    virtual ~CommonGameModeMessenger() /*override*/;

    virtual ::gsl::final_action<::std::function<void()>> createBlockBreakCaptureScope(
        ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)> callback
    ) /*override*/;

#ifdef LL_PLAT_S
    virtual void sendDenyDestroyBlock(::BlockPos const&, int) /*override*/;
#else // LL_PLAT_C
    virtual void sendDenyDestroyBlock(::BlockPos const& pos, int face) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void sendStartDestroyBlock(::BlockPos const&, int) /*override*/;
#else // LL_PLAT_C
    virtual void sendStartDestroyBlock(::BlockPos const& pos, int face) /*override*/;
#endif

    virtual void sendDestroyBlock(::Block const& oldBlock, ::BlockPos const& pos, int variantData) /*override*/;

#ifdef LL_PLAT_S
    virtual void sendChangeContinueDestroyBlock(::BlockPos const&, int) /*override*/;
#else // LL_PLAT_C
    virtual void sendChangeContinueDestroyBlock(::BlockPos const& pos, int face) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void sendContinueDestroyAboutToDestroyBlock(::BlockPos const&, int) /*override*/;
#else // LL_PLAT_C
    virtual void sendContinueDestroyAboutToDestroyBlock(::BlockPos const& pos, int face) /*override*/;
#endif

    virtual void sendStopDestroyBlock(::BlockPos const&, float) /*override*/;

    virtual void sendStartItemUseOn(::BlockPos const& pos, ::BlockPos const& buildPos, int face) /*override*/;

    virtual void sendStopItemUseOn(::BlockPos const& pos) /*override*/;

    virtual void tryRotateTowardsAimAssist() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::gsl::final_action<::std::function<void()>> $createBlockBreakCaptureScope(
        ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)> callback
    );

#ifdef LL_PLAT_S
    MCFOLD void $sendDenyDestroyBlock(::BlockPos const&, int);
#else // LL_PLAT_C
    MCFOLD void $sendDenyDestroyBlock(::BlockPos const& pos, int face);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $sendStartDestroyBlock(::BlockPos const&, int);
#else // LL_PLAT_C
    MCFOLD void $sendStartDestroyBlock(::BlockPos const& pos, int face);
#endif

    MCAPI void $sendDestroyBlock(::Block const& oldBlock, ::BlockPos const& pos, int variantData);

#ifdef LL_PLAT_S
    MCFOLD void $sendChangeContinueDestroyBlock(::BlockPos const&, int);
#else // LL_PLAT_C
    MCFOLD void $sendChangeContinueDestroyBlock(::BlockPos const& pos, int face);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $sendContinueDestroyAboutToDestroyBlock(::BlockPos const&, int);
#else // LL_PLAT_C
    MCFOLD void $sendContinueDestroyAboutToDestroyBlock(::BlockPos const& pos, int face);
#endif

    MCFOLD void $sendStopDestroyBlock(::BlockPos const&, float);

    MCAPI void $sendStartItemUseOn(::BlockPos const& pos, ::BlockPos const& buildPos, int face);

    MCAPI void $sendStopItemUseOn(::BlockPos const& pos);

    MCFOLD void $tryRotateTowardsAimAssist();


    // NOLINTEND
};

} // namespace GameModeExt

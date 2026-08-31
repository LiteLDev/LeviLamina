#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStack;
// clang-format on

struct IGameModeMessenger {
public:
    // IGameModeMessenger inner types define
    using BlockBreakCallback = ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)>;

    using BlockBreakCaptureToken = ::gsl::final_action<::std::function<void()>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameModeMessenger() = default;

    virtual ::gsl::final_action<::std::function<void()>> createBlockBreakCaptureScope(
        ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)> callback
    ) = 0;

    virtual void sendDenyDestroyBlock(::BlockPos const& pos, int face) = 0;

    virtual void sendStartDestroyBlock(::BlockPos const& pos, int face) = 0;

    virtual bool sendTryDestroyBlock(
        ::BlockPos const&                                           pos,
        int                                                         face,
        ::std::function<bool(::std::optional<::ItemStack>&)> const& tryDestroy
    ) = 0;

    virtual void sendDestroyBlock(::Block const& oldBlock, ::BlockPos const& pos, int variantData) = 0;

    virtual void sendChangeContinueDestroyBlock(::BlockPos const& pos, int face) = 0;

    virtual void sendContinueDestroyAboutToDestroyBlock(::BlockPos const& pos, int face) = 0;

    virtual void sendStopDestroyBlock(::BlockPos const&, float) = 0;

    virtual void sendStartItemUseOn(::BlockPos const& pos, ::BlockPos const& buildPos, int face) = 0;

    virtual void sendStopItemUseOn(::BlockPos const& pos) = 0;

    virtual void tryRotateTowardsAimAssist() = 0;
    // NOLINTEND
};

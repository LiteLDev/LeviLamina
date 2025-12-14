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
        ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)>
    ) = 0;

    virtual void sendDenyDestroyBlock(::BlockPos const&, int) = 0;

    virtual void sendStartDestroyBlock(::BlockPos const&, int) = 0;

    virtual bool
    sendTryDestroyBlock(::BlockPos const&, int, ::std::function<bool(::std::optional<::ItemStack>&)> const&) = 0;

    virtual void sendDestroyBlock(::Block const&, ::BlockPos const&, int) = 0;

    virtual void sendChangeContinueDestroyBlock(::BlockPos const&, int) = 0;

    virtual void sendContinueDestroyAboutToDestroyBlock(::BlockPos const&, int) = 0;

    virtual void sendStopDestroyBlock(::BlockPos const&, float) = 0;

    virtual void sendStartItemUseOn(::BlockPos const&, ::BlockPos const&, int) = 0;

    virtual void sendStopItemUseOn(::BlockPos const&) = 0;

    virtual void tryRotateTowardsAimAssist() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameModeMessenger() = default;

    // vIndex: 1
    virtual ::gsl::final_action<::std::function<void()>> createBlockBreakCaptureScope(
        ::std::function<void(::ItemStack const&, ::ItemStack const&, ::BlockPos const&)>
    ) = 0;

    // vIndex: 2
    virtual void sendDenyDestroyBlock(::BlockPos const&, int) = 0;

    // vIndex: 3
    virtual void sendStartDestroyBlock(::BlockPos const&, int) = 0;

    // vIndex: 4
    virtual bool
    sendTryDestroyBlock(::BlockPos const&, int, ::std::function<bool(::std::optional<::ItemStack>&)> const&) = 0;

    // vIndex: 5
    virtual void sendDestroyBlock(::Block const&, ::BlockPos const&, int) = 0;

    // vIndex: 6
    virtual void sendChangeContinueDestroyBlock(::BlockPos const&, int) = 0;

    // vIndex: 7
    virtual void sendContinueDestroyAboutToDestroyBlock(::BlockPos const&, int) = 0;

    // vIndex: 8
    virtual void sendStopDestroyBlock(::BlockPos const&, float) = 0;

    // vIndex: 9
    virtual void sendStartItemUseOn(::BlockPos const&, ::BlockPos const&, int) = 0;

    // vIndex: 10
    virtual void sendStopItemUseOn(::BlockPos const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

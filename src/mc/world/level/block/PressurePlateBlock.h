#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BasePressurePlateBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class PressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // PressurePlateBlock inner types define
    enum class Sensitivity : int {
        Everything = 0,
        Mobs       = 1,
        Players    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PressurePlateBlock::Sensitivity> mSensitivity;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 147
    virtual int getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 148
    virtual int getSignalForData(int data) const /*override*/;

    // vIndex: 149
    virtual int getRedstoneSignal(int signal) const /*override*/;

    // vIndex: 0
    virtual ~PressurePlateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getSignalForData(int data) const;

    MCAPI int $getRedstoneSignal(int signal) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

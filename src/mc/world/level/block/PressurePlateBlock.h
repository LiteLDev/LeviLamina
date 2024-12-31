#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BasePressurePlateBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Material;
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
    ::ll::UntypedStorage<4, 4> mUnk369271;
    // NOLINTEND

public:
    // prevent constructor by default
    PressurePlateBlock& operator=(PressurePlateBlock const&);
    PressurePlateBlock(PressurePlateBlock const&);
    PressurePlateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 152
    virtual int getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 153
    virtual int getSignalForData(int data) const /*override*/;

    // vIndex: 154
    virtual int getRedstoneSignal(int signal) const /*override*/;

    // vIndex: 0
    virtual ~PressurePlateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PressurePlateBlock(
        ::std::string const&              nameId,
        int                               id,
        ::Material const&                 material,
        ::PressurePlateBlock::Sensitivity sensitivity
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&              nameId,
        int                               id,
        ::Material const&                 material,
        ::PressurePlateBlock::Sensitivity sensitivity
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};

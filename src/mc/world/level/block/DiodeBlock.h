#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class DiodeBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mOn;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 78
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 60
    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    // vIndex: 117
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 51
    virtual int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const /*override*/;

    // vIndex: 147
    virtual int getSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    // vIndex: 43
    virtual bool isSignalSource() const /*override*/;

    // vIndex: 148
    virtual bool isLocked(::BlockSource&, ::BlockPos const&) const;

    // vIndex: 149
    virtual bool isSameDiode(::Block const& block) const;

    // vIndex: 150
    virtual bool shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 118
    virtual bool canSpawnOn(::Actor*) const /*override*/;

    // vIndex: 151
    virtual bool isOn() const;

    // vIndex: 152
    virtual bool shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 153
    virtual int getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 154
    virtual bool isAlternateInput(::Block const&) const;

    // vIndex: 155
    virtual int getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 156
    virtual int getOutputSignal(::Block const& block) const;

    // vIndex: 157
    virtual int getTurnOffDelay(::Block const& block) const;

    // vIndex: 158
    virtual int getTurnOnDelay(::Block const&) const = 0;

    // vIndex: 159
    virtual ::Block const* getOnBlock(::Block const*) const = 0;

    // vIndex: 160
    virtual ::Block const* getOffBlock(::Block const*) const = 0;

    // vIndex: 0
    virtual ~DiodeBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isDiode(::Block const& block);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI int $getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCAPI int $getSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCFOLD bool $isSignalSource() const;

    MCAPI bool $isSameDiode(::Block const& block) const;

    MCAPI bool $shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $canSpawnOn(::Actor*) const;

    MCAPI bool $isOn() const;

    MCAPI bool $shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD int $getOutputSignal(::Block const& block) const;

    MCAPI int $getTurnOffDelay(::Block const& block) const;
    // NOLINTEND
};

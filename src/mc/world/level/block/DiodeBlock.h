#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class DiodeBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mOn;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const /*override*/;

    virtual int getSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    virtual bool isSignalSource() const /*override*/;

    virtual bool isLocked(::BlockSource&, ::BlockPos const&) const;

    virtual bool isSameDiode(::Block const& block) const;

    virtual bool shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual bool isOn() const;

    virtual bool shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;

    virtual int getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool isAlternateInput(::Block const&) const;

    virtual int getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;

    virtual int getOutputSignal(::Block const& block) const;

    virtual int getTurnOffDelay(::Block const& block) const;

    virtual int getTurnOnDelay(::Block const&) const = 0;

    virtual ::Block const* getOnBlock(::Block const*) const = 0;

    virtual ::Block const* getOffBlock(::Block const*) const = 0;

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

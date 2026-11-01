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

    virtual bool isLocked(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool isSameDiode(::Block const& block) const;

    virtual bool shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual bool isOn() const;

    virtual bool shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;

    virtual int getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool isAlternateInput(::Block const& block) const;

    virtual int getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;

    virtual int getOutputSignal(::Block const& block) const;

    virtual int getTurnOffDelay(::Block const& block) const;

    virtual int getTurnOnDelay(::Block const& block) const = 0;

    virtual ::Block const* getOnBlock(::Block const* block) const = 0;

    virtual ::Block const* getOffBlock(::Block const* block) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getAlternateSignalAt(::BlockSource& region, ::BlockPos const& pos, int facing) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI int $getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCNAPI int $getSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCNAPI bool $isSignalSource() const;

    MCNAPI bool $isSameDiode(::Block const& block) const;

    MCNAPI bool $shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI bool $isOn() const;

    MCNAPI bool $shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getOutputSignal(::Block const& block) const;

    MCNAPI int $getTurnOffDelay(::Block const& block) const;


    // NOLINTEND
};

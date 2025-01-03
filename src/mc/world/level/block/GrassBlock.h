#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class ItemStack;
class PerlinSimplexNoise;
class Player;
class Random;
class Randomize;
struct Brightness;
namespace mce { class Color; }
// clang-format on

class GrassBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>> mSideColors;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>  mBiomeInfoNoise;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 93
    virtual int calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const
        /*override*/;

    // vIndex: 148
    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const&) const /*override*/;

    // vIndex: 46
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 83
    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const
        /*override*/;

    // vIndex: 0
    virtual ~GrassBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GrassBlock(::std::string const& nameId, int id);

    MCAPI bool _canBeGrass(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool fertilize(::BlockSource& region, ::BlockPos const& pos, ::Randomize& randomize) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Brightness const& MIN_BRIGHTNESS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI int $calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    MCAPI ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const&) const;

    MCAPI bool $canBeOriginalSurface() const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCAPI bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

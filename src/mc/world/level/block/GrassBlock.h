#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class ItemStack;
class Randomize;
struct Brightness;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class GrassBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>> mSideColors;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>  mBiomeInfoNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    GrassBlock();

public:
    // virtual functions
    // NOLINTBEGIN
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

    // vIndex: 46
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 83
    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~GrassBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GrassBlock(::std::string const& nameId, int id);

    MCNAPI bool _canBeGrass(::BlockSource const& region, ::BlockPos const& pos) const;

    MCNAPI bool _randomWalk(::BlockSource& region, ::BlockPos& pos, ::Randomize& randomize, int j) const;

    MCNAPI bool fertilize(::BlockSource& region, ::BlockPos const& pos, ::Randomize& randomize) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Brightness const& MIN_BRIGHTNESS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCNAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCNAPI int $calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    MCNAPI bool $canBeOriginalSurface() const;

    MCNAPI bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

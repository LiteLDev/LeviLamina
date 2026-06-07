#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/block/GrassBlockBase.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
// clang-format on

class GrassBlock : public ::GrassBlockBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>  mBiomeInfoNoise;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>> mSideColors;
    // NOLINTEND

public:
    // prevent constructor by default
    GrassBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const
        /*override*/;

    virtual bool _plantGrass(::BlockSource& region, ::BlockPos const& abovePos, ::IRandom& random) const /*override*/;

    virtual bool _shouldStopRandomWalk(::BlockSource& region, ::BlockPos& pos) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GrassBlock(::std::string const& nameId, int id);

#ifdef LL_PLAT_C
    MCAPI void initSideColorsFromAtlas(::std::vector<::mce::Color> colors) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    MCAPI bool $_plantGrass(::BlockSource& region, ::BlockPos const& abovePos, ::IRandom& random) const;

    MCAPI bool $_shouldStopRandomWalk(::BlockSource& region, ::BlockPos& pos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

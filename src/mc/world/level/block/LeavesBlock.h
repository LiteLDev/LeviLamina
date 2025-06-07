#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class Vec3;
struct BlockAnimateTickData;
struct BlockGraphicsModeChangeContext;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class LeavesBlock : public ::BlockLegacy {
public:
    // LeavesBlock inner types declare
    // clang-format off
    struct ParticleParams;
    // clang-format on

    // LeavesBlock inner types define
    struct ParticleParams {
    public:
        // ParticleParams inner types declare
        // clang-format off
        struct BiomeTintedColor;
        // clang-format on

        // ParticleParams inner types define
        struct BiomeTintedColor {};

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 20> mUnk6794b1;
        ::ll::UntypedStorage<4, 4>  mUnk885c5b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParticleParams& operator=(ParticleParams const&);
        ParticleParams(ParticleParams const&);
        ParticleParams();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                            mHasTransparentLeaves;
    ::ll::TypedStorage<1, 1, bool>                                            mHasFastAlphaTest;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                           mSapling;
    ::ll::TypedStorage<4, 28, ::std::optional<::LeavesBlock::ParticleParams>> mParticleParams;
    ::ll::TypedStorage<1, 1, bool>                                            mUseSeasonsOpaqueLayerIfSnowingBiome;
    // NOLINTEND

public:
    // prevent constructor by default
    LeavesBlock& operator=(LeavesBlock const&);
    LeavesBlock(LeavesBlock const&);
    LeavesBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 131
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 117
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 113
    virtual bool isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const /*override*/;

    // vIndex: 139
    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const
        /*override*/;

    // vIndex: 141
    virtual ::HashedString const& getCullingLayer() const /*override*/;

    // vIndex: 123
    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 83
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 91
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 114
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 23
    virtual bool canProvideMultifaceSupport(::Block const& block, uchar face) const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~LeavesBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _die(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI ::LeavesBlock& setUseSeasonsOpaqueLayerIfSnowingBiome(bool enabled);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void runDecay(::BlockSource& region, ::BlockPos const& pos, int range);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::LeavesBlock::ParticleParams const& BIOME_TINTED_LEAVES_PARTICLE_PARAMS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI bool $isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;

    MCAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::HashedString const& $getCullingLayer() const;

    MCAPI void $animateTick(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    MCFOLD bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCFOLD bool $canProvideMultifaceSupport(::Block const& block, uchar face) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

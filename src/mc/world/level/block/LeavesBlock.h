#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

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

class LeavesBlock : public ::BlockType {
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
    ::ll::TypedStorage<8, 8, ::HashedString const&>                           mSapling;
    ::ll::TypedStorage<4, 28, ::std::optional<::LeavesBlock::ParticleParams>> mParticleParams;
    // NOLINTEND

public:
    // prevent constructor by default
    LeavesBlock& operator=(LeavesBlock const&);
    LeavesBlock(LeavesBlock const&);
    LeavesBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 114
    virtual bool isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const /*override*/;

    // vIndex: 139
    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const
        /*override*/;

    // vIndex: 141
    virtual ::HashedString const& getCullingLayer() const /*override*/;

    // vIndex: 124
    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 115
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 23
    virtual bool canProvideMultifaceSupport(::Block const& block, uchar face) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~LeavesBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _die(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void runDecay(::BlockSource& region, ::BlockPos const& pos, int range);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LeavesBlock::ParticleParams const& BIOME_TINTED_LEAVES_PARTICLE_PARAMS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI bool $isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;

    MCNAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::HashedString const& $getCullingLayer() const;

    MCNAPI void $animateTick(::BlockAnimateTickData const& tickData) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $canProvideMultifaceSupport(::Block const& block, uchar face) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

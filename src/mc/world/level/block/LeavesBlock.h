#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Color.h"
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
        ::ll::TypedStorage<
            4,
            20,
            ::std::variant<::ParticleType, ::mce::Color, ::LeavesBlock::ParticleParams::BiomeTintedColor>>
                                      mParticle;
        ::ll::TypedStorage<4, 4, int> mOneOutOfChance;
        // NOLINTEND
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
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const /*override*/;

    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const
        /*override*/;

    virtual ::HashedString const& getCullingLayer() const /*override*/;

    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    virtual bool canProvideMultifaceSupport(::Block const& block, uchar face) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~LeavesBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _die(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

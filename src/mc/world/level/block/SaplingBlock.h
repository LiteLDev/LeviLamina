#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/SaplingType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class FeatureRegistry;
class IFeature;
class Random;
// clang-format on

class SaplingBlock : public ::BushBlock {
public:
    // SaplingBlock inner types define
    using Type = ::SaplingType;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SaplingType> mType;
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

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 144
    virtual ::BlockRenderLayer getRenderLayer() const /*override*/;

    // vIndex: 143
    virtual ::BlockRenderLayer getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const
        /*override*/;

    // vIndex: 0
    virtual ~SaplingBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SaplingBlock(::std::string const& nameId, int id);

    MCAPI ::WeakRef<::IFeature> _generateBirchTree(
        ::FeatureRegistry const& registry,
        ::BlockPos const&        pos,
        ::BlockSource&           region,
        ::Random&                random,
        bool                     useRandom
    ) const;

    MCAPI ::WeakRef<::IFeature> _generateJungleTree(
        int&                     ox,
        int&                     oz,
        bool&                    multiblock,
        ::BlockPos const&        pos,
        ::BlockSource&           region,
        ::FeatureRegistry const& registry
    ) const;

    MCAPI ::WeakRef<::IFeature> _generateOakTree(
        ::FeatureRegistry const& registry,
        ::BlockPos const&        pos,
        ::BlockSource&           region,
        ::Random&                random,
        bool                     useRandom
    ) const;

    MCAPI ::WeakRef<::IFeature> _generatePaleOakTree(
        int&                     ox,
        int&                     oz,
        bool&                    multiblock,
        ::BlockPos const&        pos,
        ::BlockSource&           region,
        ::FeatureRegistry const& registry
    ) const;

    MCAPI ::WeakRef<::IFeature> _generateRedwoodTree(
        int&                     ox,
        int&                     oz,
        bool&                    multiblock,
        ::BlockPos const&        pos,
        ::BlockSource&           region,
        ::FeatureRegistry const& registry
    ) const;

    MCAPI ::WeakRef<::IFeature> _generateRoofTree(
        int&                     ox,
        int&                     oz,
        bool&                    multiblock,
        ::BlockPos const&        pos,
        ::BlockSource&           region,
        ::FeatureRegistry const& registry
    ) const;

    MCAPI bool _growTree(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool useRandom) const;

    MCAPI bool advanceTree(::BlockSource& region, ::BlockPos const& pos, ::Random& random, ::Actor*) const;

    MCAPI ::SaplingBlock& setSaplingType(::SaplingType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD ::BlockRenderLayer $getRenderLayer() const;

    MCFOLD ::BlockRenderLayer $getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

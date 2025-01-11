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
class Material;
class Random;
class Vec3;
struct Brightness;
// clang-format on

class AbstractCandleBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 20
    virtual bool hasVariableLighting() const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 31
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 126
    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;

    // vIndex: 150
    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    // vIndex: 149
    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;

    // vIndex: 151
    virtual int _getNumCandles(::Block const&) const;

    // vIndex: 152
    virtual void
    _iterateCandles(::Block const&, ::BlockPos const&, ::std::function<void(::Vec3 const&, int)> callback) const;

    // vIndex: 153
    virtual void _tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    // vIndex: 0
    virtual ~AbstractCandleBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AbstractCandleBlock(::std::string const& nameId, int id, ::Material const& material);

    MCFOLD void _checkForWaterlogging(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void
    _extinguish(::Actor* extinguisher, ::Block const& block, ::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canBeLit(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool _isLit(::Block const& block);

    MCAPI static void _setLit(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, bool litFlag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $hasVariableLighting() const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $isLavaBlocking() const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;

    MCFOLD int $_getNumCandles(::Block const&) const;

    MCFOLD void
    $_iterateCandles(::Block const&, ::BlockPos const&, ::std::function<void(::Vec3 const&, int)> callback) const;

    MCFOLD void $_tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

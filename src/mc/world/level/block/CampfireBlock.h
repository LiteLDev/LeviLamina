#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
class Player;
class Random;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class CampfireBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mSpawnRandomParticles;
    ::ll::TypedStorage<1, 1, bool> mIsCampfireFireStarter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 126
    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;

    // vIndex: 20
    virtual bool hasVariableLighting() const /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 150
    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 119
    virtual bool canSpawnOn(::Actor*) const /*override*/;

    // vIndex: 31
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~CampfireBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CampfireBlock(::std::string const& nameId, int id, bool spawnRandomParticles, bool setsOnFire);

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isLit(::Block const& block);

    MCAPI static bool tryDouseFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor, bool needsWater);

    MCAPI static bool tryLightFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, bool spawnRandomParticles, bool setsOnFire);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCAPI bool $hasVariableLighting() const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canSpawnOn(::Actor*) const;

    MCAPI bool $isLavaBlocking() const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

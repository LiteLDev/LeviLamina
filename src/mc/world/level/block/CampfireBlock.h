#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CampfireBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mSpawnRandomParticles;
    ::ll::TypedStorage<1, 1, bool> mIsCampfireFireStarter;
    // NOLINTEND

public:
    // prevent constructor by default
    CampfireBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;

    virtual bool hasVariableLighting() const /*override*/;

    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& pathPos, ::BlockPos const&) const /*override*/;

    virtual bool canProvideSupport(::Block const& face, uchar, ::BlockSupportType) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CampfireBlock(::std::string const& nameId, int id, bool spawnRandomParticles, bool setsOnFire);

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canBeLit(::BlockSource& region, ::BlockPos const& pos);

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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCFOLD bool $hasVariableLighting() const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& pathPos, ::BlockPos const&) const;

    MCFOLD bool $canProvideSupport(::Block const& face, uchar, ::BlockSupportType) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $canSpawnOn(::Actor*) const;

    MCFOLD bool $isLavaBlocking() const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

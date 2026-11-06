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

    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const /*override*/;

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
    MCNAPI CampfireBlock(::std::string const& nameId, int id, bool spawnRandomParticles, bool setsOnFire);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isLit(::Block const& block);

    MCNAPI static bool
    tryDouseFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor, bool needsWater);

    MCAPI static bool tryLightFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id, bool spawnRandomParticles, bool setsOnFire);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCNAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

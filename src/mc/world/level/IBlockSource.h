#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/vanilla_components/IConstBlockSource.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockChangeContext;
class BlockPos;
class BlockSource;
class BlockSourceListener;
class ChunkPos;
class ChunkSource;
class Dimension;
class EntityContext;
class GameEvent;
class HitResult;
class ILevel;
class ItemStackBase;
class Level;
class LevelChunk;
class LevelSeed64;
class Vec3;
struct ActorBlockSyncMessage;
struct ClipParameters;
// clang-format on

class IBlockSource : public ::IConstBlockSource {
public:
    // IBlockSource inner types define
    using Listener = ::BlockSourceListener;

    using ListenerVector = ::std::vector<::BlockSourceListener*>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::AABB>& fetchAABBs(::AABB const& intersectTestBox, bool withUnloadedChunks) = 0;

    virtual ::std::vector<::AABB>& fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    ) = 0;

    virtual ::WeakRef<::BlockSource> getWeakRef() = 0;

    virtual void addListener(::BlockSourceListener& l) = 0;

    virtual void removeListener(::BlockSourceListener& l) = 0;

    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities) = 0;

    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    ) = 0;

    virtual bool setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    ) = 0;

    virtual bool setExtraBlock(::BlockPos const& pos, ::Block const& block, int updateFlags) = 0;

    virtual bool removeBlock(::BlockPos const& pos, ::BlockChangeContext const& changeSourceContext) = 0;

    virtual short getMinHeight() const = 0;

    virtual short getMaxHeight() const = 0;

    virtual ::Dimension& getDimension() const = 0;

    virtual ::Dimension& getDimension() = 0;

    virtual ::Dimension const& getDimensionConst() const = 0;

    virtual ::LevelChunk* getChunkAt(::BlockPos const& pos) const = 0;

    virtual ::LevelChunk* getChunk(int x, int z) const = 0;

    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) const = 0;

    virtual ::Level& getLevel() = 0;

    virtual ::ILevel& getILevel() const = 0;

    virtual ::LevelSeed64 getLevelSeed64() const = 0;

    virtual short getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const = 0;

    virtual short getAboveTopSolidBlock(
        ::BlockPos const& pos,
        bool              includeWater,
        bool              includeLeaves,
        bool              iteratePastInitialBlocking
    ) const = 0;

    virtual short getHeight(::brstd::function_ref<bool(::Block const&)> const& type, ::BlockPos const& pos) const = 0;

    virtual short getHeight(::brstd::function_ref<bool(::Block const&)> const& type, int x, int z) const = 0;

    virtual ::HitResult clip(
        ::Vec3 const&                                                            A,
        ::Vec3 const&                                                            B,
        bool                                                                     checkAgainstLiquid,
        ::ShapeType                                                              shapeType,
        int                                                                      maxDistance,
        bool                                                                     ignoreBorderBlocks,
        bool                                                                     fullOnly,
        ::Actor*                                                                 actor,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock,
        bool                                                                     stopOnFirstLiquidHit
    ) const = 0;

    virtual ::HitResult clip(::ClipParameters const& parameters) const = 0;

    virtual ::ChunkSource& getChunkSource() = 0;

    virtual bool isSolidBlockingBlock(::BlockPos const& p) const = 0;

    virtual bool isSolidBlockingBlock(int x, int y, int z) const = 0;

    virtual bool areChunksFullyLoaded(::BlockPos const& pos, int r) const = 0;

    virtual bool mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    ) = 0;

    virtual bool canDoBlockDrops() const = 0;

    virtual bool canDoContainedItemDrops() const = 0;

    virtual bool isInstaticking(::BlockPos const& pos) const = 0;

    virtual bool checkBlockDestroyPermissions(
        ::Actor&               entity,
        ::BlockPos const&      pos,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) = 0;

    virtual bool checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) = 0;

    virtual void postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    ) = 0;

    virtual void fireBlockChanged(
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            flags,
        ::BlockChangedEventTarget      eventTarget,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       source
    ) = 0;

    virtual void blockEvent(::BlockPos const& pos, int b0, int b1) = 0;

    virtual ~IBlockSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

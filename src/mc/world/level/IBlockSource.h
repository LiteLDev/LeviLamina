#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/vanilla_components/IConstBlockSource.h"
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
    virtual ::std::vector<::AABB>& fetchAABBs(::AABB const&, bool) = 0;

    virtual ::std::vector<::AABB>&
    fetchCollisionShapes(::AABB const&, bool, ::std::optional<::EntityContext const>, ::std::vector<::AABB>*) = 0;

    virtual ::WeakRef<::BlockSource> getWeakRef() = 0;

    virtual void addListener(::BlockSourceListener&) = 0;

    virtual void removeListener(::BlockSourceListener&) = 0;

    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(::Actor const*, ::AABB const&, bool, bool) = 0;

    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>) = 0;

    virtual bool
    setBlock(::BlockPos const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangeContext const&) = 0;

    virtual bool setExtraBlock(::BlockPos const&, ::Block const&, int) = 0;

    virtual bool removeBlock(::BlockPos const&, ::BlockChangeContext const&) = 0;

    virtual short getMinHeight() const = 0;

    virtual short getMaxHeight() const = 0;

    virtual ::Dimension& getDimension() const = 0;

    virtual ::Dimension& getDimension() = 0;

    virtual ::Dimension const& getDimensionConst() const = 0;

    virtual ::LevelChunk* getChunkAt(::BlockPos const&) const = 0;

    virtual ::LevelChunk* getChunk(int, int) const = 0;

    virtual ::LevelChunk* getChunk(::ChunkPos const&) const = 0;

    virtual ::Level& getLevel() = 0;

    virtual ::ILevel& getILevel() const = 0;

    virtual ::LevelSeed64 getLevelSeed64() const = 0;

    virtual short getAboveTopSolidBlock(int, int, bool, bool) const = 0;

    virtual short getAboveTopSolidBlock(::BlockPos const&, bool, bool, bool) const = 0;

    virtual short getHeight(::std::function<bool(::Block const&)> const&, ::BlockPos const&) const = 0;

    virtual short getHeight(::std::function<bool(::Block const&)> const&, int, int) const = 0;

    virtual ::HitResult clip(
        ::Vec3 const&,
        ::Vec3 const&,
        bool,
        ::ShapeType,
        int,
        bool,
        bool,
        ::Actor*,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const&,
        bool
    ) const = 0;

    virtual ::HitResult clip(::ClipParameters const&) const = 0;

    virtual ::ChunkSource& getChunkSource() = 0;

    virtual bool isSolidBlockingBlock(::BlockPos const&) const = 0;

    virtual bool isSolidBlockingBlock(int, int, int) const = 0;

    virtual bool areChunksFullyLoaded(::BlockPos const&, int) const = 0;

    virtual bool mayPlace(::Block const&, ::BlockPos const&, uchar, ::Actor*, bool, ::Vec3) = 0;

    virtual bool canDoBlockDrops() const = 0;

    virtual bool canDoContainedItemDrops() const = 0;

    virtual bool isInstaticking(::BlockPos const&) const = 0;

    virtual bool checkBlockDestroyPermissions(::Actor&, ::BlockPos const&, ::ItemStackBase const&, bool) = 0;

    virtual bool checkBlockPermissions(::Actor&, ::BlockPos const&, uchar, ::ItemStackBase const&, bool) = 0;

    virtual void postGameEvent(::Actor*, ::GameEvent const&, ::BlockPos const&, ::Block const*) = 0;

    virtual void fireBlockChanged(
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::BlockChangedEventTarget,
        ::ActorBlockSyncMessage const*,
        ::Actor*
    ) = 0;

    virtual void blockEvent(::BlockPos const&, int, int) = 0;

    virtual ~IBlockSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/IConstBlockSource.h"
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
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
// clang-format on

class IBlockSource : public ::IConstBlockSource {
public:
    // IBlockSource inner types define
    using Listener = ::BlockSourceListener;

    using ListenerVector = ::std::vector<::BlockSourceListener*>;

public:
    // prevent constructor by default
    IBlockSource& operator=(IBlockSource const&);
    IBlockSource(IBlockSource const&);
    IBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 23
    virtual ::std::vector<::AABB>& fetchAABBs(::AABB const&, bool) = 0;

    // vIndex: 24
    virtual ::std::vector<::AABB>&
    fetchCollisionShapes(::AABB const&, bool, ::std::optional<::EntityContext const>, ::std::vector<::AABB>*) = 0;

    // vIndex: 25
    virtual ::WeakRef<::BlockSource> getWeakRef() = 0;

    // vIndex: 26
    virtual void addListener(::BlockSourceListener&) = 0;

    // vIndex: 27
    virtual void removeListener(::BlockSourceListener&) = 0;

    // vIndex: 29
    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(::Actor const*, ::AABB const&, bool, bool) = 0;

    // vIndex: 28
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>) = 0;

    // vIndex: 30
    virtual bool setBlock(::BlockPos const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::Actor*) = 0;

    // vIndex: 31
    virtual short getMinHeight() const = 0;

    // vIndex: 32
    virtual short getMaxHeight() const = 0;

    // vIndex: 34
    virtual ::Dimension& getDimension() const = 0;

    // vIndex: 33
    virtual ::Dimension& getDimension() = 0;

    // vIndex: 35
    virtual ::Dimension const& getDimensionConst() const = 0;

    // vIndex: 36
    virtual ::LevelChunk* getChunkAt(::BlockPos const&) const = 0;

    // vIndex: 38
    virtual ::LevelChunk* getChunk(int, int) const = 0;

    // vIndex: 37
    virtual ::LevelChunk* getChunk(::ChunkPos const&) const = 0;

    // vIndex: 39
    virtual ::Level& getLevel() = 0;

    // vIndex: 40
    virtual ::ILevel& getILevel() const = 0;

    // vIndex: 41
    virtual ::LevelSeed64 getLevelSeed64() const = 0;

    // vIndex: 42
    virtual short getAboveTopSolidBlock(int, int, bool, bool) const = 0;

    // vIndex: 44
    virtual short getHeight(::std::function<bool(::Block const&)> const&, ::BlockPos const&) const = 0;

    // vIndex: 43
    virtual short getHeight(::std::function<bool(::Block const&)> const&, int, int) const = 0;

    // vIndex: 45
    virtual ::HitResult
    clip(::Vec3 const&, ::Vec3 const&, bool, ::ShapeType, int, bool, bool, ::Actor*, ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const&)
        const = 0;

    // vIndex: 46
    virtual ::ChunkSource& getChunkSource() = 0;

    // vIndex: 48
    virtual bool isSolidBlockingBlock(::BlockPos const&) const = 0;

    // vIndex: 47
    virtual bool isSolidBlockingBlock(int, int, int) const = 0;

    // vIndex: 49
    virtual bool areChunksFullyLoaded(::BlockPos const&, int) const = 0;

    // vIndex: 50
    virtual bool mayPlace(::Block const&, ::BlockPos const&, uchar, ::Actor*, bool, ::Vec3) = 0;

    // vIndex: 51
    virtual bool canDoBlockDrops() const = 0;

    // vIndex: 52
    virtual bool canDoContainedItemDrops() const = 0;

    // vIndex: 53
    virtual bool isInstaticking(::BlockPos const&) const = 0;

    // vIndex: 54
    virtual void updateCheckForValidityState(bool) = 0;

    // vIndex: 55
    virtual bool checkBlockPermissions(::Actor&, ::BlockPos const&, uchar, ::ItemStackBase const&, bool) = 0;

    // vIndex: 56
    virtual bool removeBlock(::BlockPos const&) = 0;

    // vIndex: 57
    virtual void postGameEvent(::Actor*, ::GameEvent const&, ::BlockPos const&, ::Block const*) = 0;

    // vIndex: 0
    virtual ~IBlockSource() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

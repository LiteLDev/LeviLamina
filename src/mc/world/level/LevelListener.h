#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ParticleType.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/block/LevelEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class ChunkSource;
class CompoundTag;
class HashedString;
class LevelChunk;
class MolangVariableMap;
class Vec3;
struct BreakingItemParticleData;
struct ResolvedItemIconInfo;
struct ScreenshotOptions;
namespace cg { class ImageBuffer; }
// clang-format on

class LevelListener : public ::BlockSourceListener {
public:
    // prevent constructor by default
    LevelListener& operator=(LevelListener const&);
    LevelListener(LevelListener const&);
    LevelListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelListener() /*override*/;

    // vIndex: 9
    virtual void allChanged();

    // vIndex: 10
    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    // vIndex: 11
    virtual void
    addParticleEffect(::HashedString const&, ::Actor const&, ::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);

    // vIndex: 12
    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    // vIndex: 13
    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    // vIndex: 14
    virtual void
    addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    // vIndex: 15
    virtual void playMusic(::std::string const&, ::Vec3 const&, float, float);

    // vIndex: 16
    virtual void playStreamingMusic(::std::string const&, int, int, int);

    // vIndex: 17
    virtual void onEntityAdded(::Actor&);

    // vIndex: 18
    virtual void onEntityRemoved(::Actor&);

    // vIndex: 19
    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    // vIndex: 20
    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    // vIndex: 21
    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    // vIndex: 22
    virtual void onChunkUnloaded(::LevelChunk&);

    // vIndex: 23
    virtual void onLevelDestruction(::std::string const&);

    // vIndex: 25
    virtual void levelEvent(::LevelEvent, ::Vec3 const&, int);

    // vIndex: 24
    virtual void levelEvent(::LevelEvent, ::CompoundTag const&);

    // vIndex: 26
    virtual void takePicture(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&);

    // vIndex: 27
    virtual void playerListChanged();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $allChanged();

    MCAPI void $sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    MCAPI void
    $addParticleEffect(::HashedString const&, ::Actor const&, ::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);

    MCAPI void $addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCAPI void $addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCAPI void
    $addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    MCAPI void $playMusic(::std::string const&, ::Vec3 const&, float, float);

    MCAPI void $playStreamingMusic(::std::string const&, int, int, int);

    MCAPI void $onEntityAdded(::Actor&);

    MCAPI void $onEntityRemoved(::Actor&);

    MCAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCAPI void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    MCAPI void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCAPI void $onChunkUnloaded(::LevelChunk&);

    MCAPI void $onLevelDestruction(::std::string const&);

    MCAPI void $levelEvent(::LevelEvent, ::Vec3 const&, int);

    MCAPI void $levelEvent(::LevelEvent, ::CompoundTag const&);

    MCAPI void $takePicture(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&);

    MCAPI void $playerListChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

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
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $allChanged();

    MCFOLD void
    $addParticleEffect(::HashedString const&, ::Actor const&, ::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);

    MCFOLD void $addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCFOLD void $addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCFOLD void
    $addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    MCFOLD void $playMusic(::std::string const&, ::Vec3 const&, float, float);

    MCFOLD void $playStreamingMusic(::std::string const&, int, int, int);

    MCFOLD void $onEntityAdded(::Actor&);

    MCFOLD void $onEntityRemoved(::Actor&);

    MCFOLD void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCFOLD void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    MCFOLD void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCFOLD void $onChunkUnloaded(::LevelChunk&);

    MCFOLD void $onLevelDestruction(::std::string const&);

    MCFOLD void $takePicture(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&);

    MCFOLD void $playerListChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

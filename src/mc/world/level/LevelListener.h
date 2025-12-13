#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/BlockSourceListener.h"

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
namespace mce { class Color; }
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
    virtual void addParticleEffect(
        ::HashedString const&,
        ::Actor const&,
        ::HashedString const&,
        ::Vec3 const&,
        ::MolangVariableMap const&
    );

    // vIndex: 12
    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    // vIndex: 13
    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    // vIndex: 14
    virtual void
    addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    // vIndex: 15
    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&,
        ::BlockPos const&,
        ::Block const&,
        ::std::optional<::mce::Color>
    );

    // vIndex: 16
    virtual void playMusic(::std::string const&, ::Vec3 const&, float, float);

    // vIndex: 17
    virtual void playStreamingMusic(::std::string const&, int, int, int);

    // vIndex: 18
    virtual void onEntityAdded(::Actor&);

    // vIndex: 19
    virtual void onEntityRemoved(::Actor&);

    // vIndex: 20
    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    // vIndex: 21
    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    // vIndex: 22
    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    // vIndex: 23
    virtual void onChunkUnloaded(::LevelChunk&);

    // vIndex: 24
    virtual void onLevelDestruction(::std::string const&);

    // vIndex: 26
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    // vIndex: 25
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    // vIndex: 27
    virtual void takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    );

    // vIndex: 28
    virtual void playerListChanged();

    // vIndex: 29
    virtual void onLevelDataCommandsChanged(bool);

    // vIndex: 30
    virtual void onLevelDataWorldTemplateOptionsUnlocked();
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

    MCFOLD void $sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    MCFOLD void $addParticleEffect(
        ::HashedString const&,
        ::Actor const&,
        ::HashedString const&,
        ::Vec3 const&,
        ::MolangVariableMap const&
    );

    MCFOLD void $addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCFOLD void $addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCFOLD void
    $addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    MCFOLD void $addBiomeTintedParticleEffect(
        ::HashedString const&,
        ::BlockPos const&,
        ::Block const&,
        ::std::optional<::mce::Color>
    );

    MCFOLD void $playMusic(::std::string const&, ::Vec3 const&, float, float);

    MCFOLD void $playStreamingMusic(::std::string const&, int, int, int);

    MCFOLD void $onEntityAdded(::Actor&);

    MCFOLD void $onEntityRemoved(::Actor&);

    MCFOLD void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCFOLD void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    MCFOLD void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCFOLD void $onChunkUnloaded(::LevelChunk&);

    MCFOLD void $onLevelDestruction(::std::string const&);

    MCAPI void $takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    );

    MCFOLD void $playerListChanged();

    MCFOLD void $onLevelDataCommandsChanged(bool);

    MCFOLD void $onLevelDataWorldTemplateOptionsUnlocked();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

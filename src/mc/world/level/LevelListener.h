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
    virtual ~LevelListener() /*override*/;

    virtual void allChanged();

    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    virtual void addParticleEffect(
        ::HashedString const&,
        ::Actor const&,
        ::HashedString const&,
        ::Vec3 const&,
        ::MolangVariableMap const&
    );

    virtual void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    virtual void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    virtual void addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );

    virtual void playMusic(::std::string const&, ::Vec3 const&, float, float);

    virtual void playStreamingMusic(::std::string const&, int, int, int);

    virtual void onEntityAdded(::Actor&);

    virtual void onEntityRemoved(::Actor& entity);

    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    virtual void onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    virtual void onChunkUnloaded(::LevelChunk& lc);

    virtual void onLevelDestruction(::std::string const& levelId);

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    virtual void takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );

    virtual void playerListChanged();

    virtual void onLevelDataCommandsChanged(bool commandsEnabeld);

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

    MCFOLD void $addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCFOLD void $addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );

    MCFOLD void $addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    MCFOLD void $addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );

    MCFOLD void $playMusic(::std::string const&, ::Vec3 const&, float, float);

    MCFOLD void $playStreamingMusic(::std::string const&, int, int, int);

    MCFOLD void $onEntityAdded(::Actor&);

    MCFOLD void $onEntityRemoved(::Actor& entity);

    MCFOLD void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCFOLD void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    MCFOLD void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCFOLD void $onChunkUnloaded(::LevelChunk& lc);

    MCFOLD void $onLevelDestruction(::std::string const& levelId);

    MCFOLD void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    MCFOLD void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    MCAPI void $takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );

    MCFOLD void $playerListChanged();

    MCFOLD void $onLevelDataCommandsChanged(bool commandsEnabeld);

    MCFOLD void $onLevelDataWorldTemplateOptionsUnlocked();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

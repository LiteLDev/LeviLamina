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
    virtual ~LevelListener() /*override*/ = default;

    virtual void allChanged();

    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    virtual void addParticleEffect(
        ::HashedString const&,
        ::Actor const&,
        ::HashedString const&,
        ::Vec3 const&,
        ::MolangVariableMap const&
    );

#ifdef LL_PLAT_S
    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);
#else // LL_PLAT_C
    virtual void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );
#endif

#ifdef LL_PLAT_S
    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);
#else // LL_PLAT_C
    virtual void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );
#endif

#ifdef LL_PLAT_S
    virtual void
    addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);
#else // LL_PLAT_C
    virtual void addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );
#endif

#ifdef LL_PLAT_S
    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&,
        ::BlockPos const&,
        ::Block const&,
        ::std::optional<::mce::Color>
    );
#else // LL_PLAT_C
    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );
#endif

    virtual void playMusic(::std::string const&, ::Vec3 const&, float, float);

    virtual void playStreamingMusic(::std::string const&, int, int, int);

    virtual void onEntityAdded(::Actor&);

#ifdef LL_PLAT_S
    virtual void onEntityRemoved(::Actor&);
#else // LL_PLAT_C
    virtual void onEntityRemoved(::Actor& entity);
#endif

    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    virtual void onChunkUnloaded(::LevelChunk& lc);

#ifdef LL_PLAT_S
    virtual void onLevelDestruction(::std::string const&);
#else // LL_PLAT_C
    virtual void onLevelDestruction(::std::string const& levelId);
#endif

#ifdef LL_PLAT_S
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
#else // LL_PLAT_C
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);
#endif

#ifdef LL_PLAT_S
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);
#else // LL_PLAT_C
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);
#endif

#ifdef LL_PLAT_S
    virtual void takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    );
#else // LL_PLAT_C
    virtual void takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );
#endif

    virtual void playerListChanged();

#ifdef LL_PLAT_S
    virtual void onLevelDataCommandsChanged(bool);
#else // LL_PLAT_C
    virtual void onLevelDataCommandsChanged(bool commandsEnabeld);
#endif

    virtual void onLevelDataWorldTemplateOptionsUnlocked();
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

    MCFOLD void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCFOLD void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    MCFOLD void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCFOLD void $onChunkUnloaded(::LevelChunk& lc);

    MCFOLD void $onLevelDestruction(::std::string const&);

    MCFOLD void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    MCFOLD void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

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

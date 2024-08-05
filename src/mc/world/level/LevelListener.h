#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ParticleType.h"
#include "mc/events/LevelEvent.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class LevelListener : public ::BlockSourceListener {
public:
    // prevent constructor by default
    LevelListener& operator=(LevelListener const&);
    LevelListener(LevelListener const&);
    LevelListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelListener();

    // vIndex: 9
    virtual void allChanged();

    // vIndex: 10
    virtual void sendServerLegacyParticle(::ParticleType name, class Vec3 const& pos, class Vec3 const& dir, int data);

    // vIndex: 11
    virtual void addParticleEffect(
        class HashedString const&      effect,
        class Actor const&             actor,
        class HashedString const&      locator,
        class Vec3 const&              emitterOffset,
        class MolangVariableMap const& molangVariables
    );

    // vIndex: 12
    virtual void addTerrainParticleEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    // vIndex: 13
    virtual void addTerrainSlideEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    // vIndex: 14
    virtual void
    addBreakingItemParticleEffect(class Vec3 const& pos, ::ParticleType type, struct ResolvedItemIconInfo const&);

    // vIndex: 15
    virtual void playMusic(std::string const& name, class Vec3 const& pos, float songOffset, float volume);

    // vIndex: 16
    virtual void playStreamingMusic(std::string const& name, int x, int y, int z);

    // vIndex: 17
    virtual void onEntityAdded(class Actor& entity);

    // vIndex: 18
    virtual void onEntityRemoved(class Actor& entity);

    // vIndex: 19
    virtual void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 20
    virtual void onChunkReloaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 21
    virtual void onSubChunkLoaded(class ChunkSource& source, class LevelChunk& lc, short, bool);

    // vIndex: 22
    virtual void onChunkUnloaded(class LevelChunk& lc);

    // vIndex: 23
    virtual void onLevelDestruction(std::string const& levelId);

    // vIndex: 24
    virtual void levelEvent(::LevelEvent type, class Vec3 const& pos, int data);

    // vIndex: 25
    virtual void levelEvent(::LevelEvent type, class CompoundTag const& data);

    // vIndex: 26
    virtual void takePicture(
        class cg::ImageBuffer&    outImage,
        class Actor*              camera,
        class Actor*              target,
        struct ScreenshotOptions& screenshotOptions
    );

    // vIndex: 27
    virtual void playerListChanged();

    // NOLINTEND
};

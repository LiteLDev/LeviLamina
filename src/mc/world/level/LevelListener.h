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
    // vIndex: 0, symbol: ??1LevelListener@@UEAA@XZ
    virtual ~LevelListener();

    // vIndex: 9, symbol: ?allChanged@LevelListener@@UEAAXXZ
    virtual void allChanged();

    // vIndex: 10, symbol: ?sendServerLegacyParticle@LevelListener@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
    virtual void sendServerLegacyParticle(::ParticleType name, class Vec3 const& pos, class Vec3 const& dir, int data);

    // vIndex: 11, symbol:
    // ?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVActor@@0AEBVVec3@@AEBVMolangVariableMap@@@Z
    virtual void addParticleEffect(
        class HashedString const&      effect,
        class Actor const&             actor,
        class HashedString const&      locator,
        class Vec3 const&              emitterOffset,
        class MolangVariableMap const& molangVariables
    );

    // vIndex: 12, symbol: ?addTerrainParticleEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    virtual void addTerrainParticleEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    // vIndex: 13, symbol: ?addTerrainSlideEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    virtual void addTerrainSlideEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    // vIndex: 14, symbol:
    // ?addBreakingItemParticleEffect@LevelListener@@UEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
    virtual void
    addBreakingItemParticleEffect(class Vec3 const& pos, ::ParticleType type, struct ResolvedItemIconInfo const&);

    // vIndex: 15, symbol:
    // ?playMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    virtual void playMusic(std::string const& name, class Vec3 const& pos, float songOffset, float volume);

    // vIndex: 16, symbol:
    // ?playStreamingMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
    virtual void playStreamingMusic(std::string const& name, int x, int y, int z);

    // vIndex: 17, symbol: ?onEntityAdded@LevelListener@@UEAAXAEAVActor@@@Z
    virtual void onEntityAdded(class Actor& entity);

    // vIndex: 18, symbol: ?onEntityRemoved@LevelListener@@UEAAXAEAVActor@@@Z
    virtual void onEntityRemoved(class Actor& entity);

    // vIndex: 19, symbol: ?onChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 20, symbol: ?onChunkReloaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void onChunkReloaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 21, symbol: ?onSubChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
    virtual void onSubChunkLoaded(class ChunkSource& source, class LevelChunk& lc, short, bool);

    // vIndex: 22, symbol: ?onChunkUnloaded@LevelListener@@UEAAXAEAVLevelChunk@@@Z
    virtual void onChunkUnloaded(class LevelChunk& lc);

    // vIndex: 23, symbol:
    // ?onLevelDestruction@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onLevelDestruction(std::string const& levelId);

    // vIndex: 24, symbol: ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
    virtual void levelEvent(::LevelEvent type, class Vec3 const& pos, int data);

    // vIndex: 25, symbol: ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
    virtual void levelEvent(::LevelEvent type, class CompoundTag const& data);

    // vIndex: 26, symbol: ?takePicture@LevelListener@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
    virtual void takePicture(
        class cg::ImageBuffer&    outImage,
        class Actor*              camera,
        class Actor*              target,
        struct ScreenshotOptions& screenshotOptions
    );

    // vIndex: 27, symbol: ?playerListChanged@LevelListener@@UEAAXXZ
    virtual void playerListChanged();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ParticleType.h"
#include "mc/events/LevelEvent.h"
#include "mc/world/level/BlockSourceListener.h"

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

    // vIndex: 1, symbol: ?allChanged@LevelListener@@UEAAXXZ
    virtual void allChanged();

    // vIndex: 2, symbol: ?sendServerLegacyParticle@LevelListener@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
    virtual void sendServerLegacyParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int);

    // vIndex: 3, symbol:
    // ?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVActor@@0AEBVVec3@@AEBVMolangVariableMap@@@Z
    virtual void
    addParticleEffect(class HashedString const&, class Actor const&, class HashedString const&, class Vec3 const&, class MolangVariableMap const&);

    // vIndex: 4, symbol: ?addTerrainParticleEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    virtual void
    addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // vIndex: 5, symbol: ?addTerrainSlideEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    virtual void
    addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // vIndex: 6, symbol:
    // ?addBreakingItemParticleEffect@LevelListener@@UEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
    virtual void addBreakingItemParticleEffect(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&);

    // vIndex: 7, symbol:
    // ?playMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    virtual void playMusic(std::string const&, class Vec3 const&, float, float);

    // vIndex: 8, symbol:
    // ?playStreamingMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
    virtual void playStreamingMusic(std::string const&, int, int, int);

    // vIndex: 9, symbol: ?onEntityAdded@LevelListener@@UEAAXAEAVActor@@@Z
    virtual void onEntityAdded(class Actor&);

    // vIndex: 10, symbol: ?onEntityRemoved@LevelListener@@UEAAXAEAVActor@@@Z
    virtual void onEntityRemoved(class Actor&);

    // vIndex: 11, symbol: ?onChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void onChunkLoaded(class ChunkSource&, class LevelChunk&);

    // vIndex: 12, symbol: ?onChunkReloaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void onChunkReloaded(class ChunkSource&, class LevelChunk&);

    // vIndex: 13, symbol: ?onSubChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
    virtual void onSubChunkLoaded(class ChunkSource&, class LevelChunk&, short, bool);

    // vIndex: 14, symbol: ?onChunkUnloaded@LevelListener@@UEAAXAEAVLevelChunk@@@Z
    virtual void onChunkUnloaded(class LevelChunk&);

    // vIndex: 15, symbol:
    // ?onLevelDestruction@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onLevelDestruction(std::string const&);

    // vIndex: 16, symbol: ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
    virtual void levelEvent(::LevelEvent, class CompoundTag const&);

    // vIndex: 17, symbol: ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
    virtual void levelEvent(::LevelEvent, class Vec3 const&, int);

    // 可能实际与十六的互换
    // vIndex: 18, symbol: ?takePicture@LevelListener@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
    virtual void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);

    // vIndex: 19, symbol: ?playerListChanged@LevelListener@@UEAAXXZ
    virtual void playerListChanged();

    // symbol: ?addBreakingItemParticleEffect@LevelListener@@UEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
    // MCVAPI void addBreakingItemParticleEffect(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&);

    // symbol: ?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVActor@@0AEBVVec3@@AEBVMolangVariableMap@@@Z
    // MCVAPI void
    // addParticleEffect(class HashedString const&, class Actor const&, class HashedString const&, class Vec3 const&,
    // class MolangVariableMap const&);

    // symbol: ?addTerrainParticleEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    // MCVAPI void
    // addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // symbol: ?addTerrainSlideEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    // MCVAPI void
    // addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // symbol: ?allChanged@LevelListener@@UEAAXXZ
    // MCVAPI void allChanged();

    // symbol: ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
    // MCVAPI void levelEvent(::LevelEvent, class CompoundTag const&);

    // symbol: ?onChunkReloaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    // MCVAPI void onChunkReloaded(class ChunkSource&, class LevelChunk&);

    // symbol: ?onEntityAdded@LevelListener@@UEAAXAEAVActor@@@Z
    // MCVAPI void onEntityAdded(class Actor&);

    // symbol: ?onEntityRemoved@LevelListener@@UEAAXAEAVActor@@@Z
    // MCVAPI void onEntityRemoved(class Actor&);

    // symbol: ?onSubChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
    // MCVAPI void onSubChunkLoaded(class ChunkSource&, class LevelChunk&, short, bool);

    // symbol:
    // ?playMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    // MCVAPI void playMusic(std::string const&, class Vec3 const&, float, float);

    // symbol:
    // ?playStreamingMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
    // MCVAPI void playStreamingMusic(std::string const&, int, int, int);

    // symbol: ?playerListChanged@LevelListener@@UEAAXXZ
    // MCVAPI void playerListChanged();

    // symbol: ?sendServerLegacyParticle@LevelListener@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
    // MCVAPI void sendServerLegacyParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int);

    // symbol: ?takePicture@LevelListener@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
    // MCVAPI void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);

    // symbol: ??1LevelListener@@UEAA@XZ
    // MCVAPI ~LevelListener();

    // NOLINTEND
};

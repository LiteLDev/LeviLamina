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

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: ?onChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol: ?onChunkUnloaded@LevelListener@@UEAAXAEAVLevelChunk@@@Z
    virtual void onChunkUnloaded(class LevelChunk& lc);

    // vIndex: 23, symbol:
    // ?onLevelDestruction@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onLevelDestruction(std::string const& levelId);

    // vIndex: 24, symbol: __unk_vfn_24
    virtual void __unk_vfn_24();

    // vIndex: 25, symbol: ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
    virtual void levelEvent(::LevelEvent type, class Vec3 const& pos, int data);

    // symbol: ?addBreakingItemParticleEffect@LevelListener@@UEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
    MCVAPI void addBreakingItemParticleEffect(
        class Vec3 const&                  pos,
        ::ParticleType                     type,
        struct ResolvedItemIconInfo const& textureInfo
    );

    // symbol: ?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVActor@@0AEBVVec3@@AEBVMolangVariableMap@@@Z
    MCVAPI void addParticleEffect(
        class HashedString const&      effect,
        class Actor const&             actor,
        class HashedString const&      locator,
        class Vec3 const&              emitterOffset,
        class MolangVariableMap const& molangVariables
    );

    // symbol: ?addTerrainParticleEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCVAPI void addTerrainParticleEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    // symbol: ?addTerrainSlideEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCVAPI void addTerrainSlideEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    // symbol: ?allChanged@LevelListener@@UEAAXXZ
    MCVAPI void allChanged();

    // symbol: ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
    MCVAPI void levelEvent(::LevelEvent type, class CompoundTag const& data);

    // symbol: ?onChunkReloaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkReloaded(class ChunkSource& source, class LevelChunk& lc);

    // symbol: ?onEntityAdded@LevelListener@@UEAAXAEAVActor@@@Z
    MCVAPI void onEntityAdded(class Actor& entity);

    // symbol: ?onEntityRemoved@LevelListener@@UEAAXAEAVActor@@@Z
    MCVAPI void onEntityRemoved(class Actor& entity);

    // symbol: ?onSubChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
    MCVAPI void onSubChunkLoaded(
        class ChunkSource& source,
        class LevelChunk&  lc,
        short              absoluteSubChunkIndex,
        bool               subChunkVisibilityChanged
    );

    // symbol:
    // ?playMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    MCVAPI void playMusic(std::string const& name, class Vec3 const& pos, float songOffset, float volume);

    // symbol:
    // ?playStreamingMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
    MCVAPI void playStreamingMusic(std::string const& name, int x, int y, int z);

    // symbol: ?playerListChanged@LevelListener@@UEAAXXZ
    MCVAPI void playerListChanged();

    // symbol: ?sendServerLegacyParticle@LevelListener@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
    MCVAPI void sendServerLegacyParticle(::ParticleType name, class Vec3 const& pos, class Vec3 const& dir, int data);

    // symbol: ?takePicture@LevelListener@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
    MCVAPI void takePicture(
        class cg::ImageBuffer&    outImage,
        class Actor*              camera,
        class Actor*              target,
        struct ScreenshotOptions& screenshotOptions
    );

    // NOLINTEND
};

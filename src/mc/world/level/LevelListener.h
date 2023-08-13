#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class LevelListener : public ::BlockSourceListener {

public:
    // prevent constructor by default
    LevelListener& operator=(LevelListener const&) = delete;
    LevelListener(LevelListener const&)            = delete;
    LevelListener()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol ?onChunkLoaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    virtual void onChunkLoaded(class ChunkSource&, class LevelChunk&);
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 22
     * @symbol ?onChunkUnloaded\@LevelListener\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    virtual void onChunkUnloaded(class LevelChunk&);
    /**
     * @vftbl 23
     * @symbol
     * ?onLevelDestruction\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void onLevelDestruction(std::string const&);
    /**
     * @vftbl 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl 25
     * @symbol ?levelEvent\@LevelListener\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    virtual void levelEvent(enum class LevelEvent, class Vec3 const&, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELLISTENER
    /**
     * @symbol
     * ?addBreakingItemParticleEffect\@LevelListener\@\@UEAAXAEBVVec3\@\@W4ParticleType\@\@AEBUResolvedItemIconInfo\@\@\@Z
     */
    MCVAPI void
    addBreakingItemParticleEffect(class Vec3 const&, enum class ParticleType, struct ResolvedItemIconInfo const&);
    /**
     * @symbol
     * ?addParticleEffect\@LevelListener\@\@UEAAXAEBVHashedString\@\@AEBVActor\@\@0AEBVVec3\@\@AEBVMolangVariableMap\@\@\@Z
     */
    MCVAPI void
    addParticleEffect(class HashedString const&, class Actor const&, class HashedString const&, class Vec3 const&, class MolangVariableMap const&);
    /**
     * @symbol ?addTerrainParticleEffect\@LevelListener\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void
    addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    /**
     * @symbol ?addTerrainSlideEffect\@LevelListener\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void
    addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    /**
     * @symbol ?allChanged\@LevelListener\@\@UEAAXXZ
     */
    MCVAPI void allChanged();
    /**
     * @symbol ?levelEvent\@LevelListener\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI void levelEvent(enum class LevelEvent, class CompoundTag const&);
    /**
     * @symbol ?onChunkReloaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkReloaded(class ChunkSource&, class LevelChunk&);
    /**
     * @symbol ?onEntityAdded\@LevelListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityAdded(class Actor&);
    /**
     * @symbol ?onEntityRemoved\@LevelListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityRemoved(class Actor&);
    /**
     * @symbol ?onSubChunkLoaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@F_N\@Z
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource&, class LevelChunk&, short, bool);
    /**
     * @symbol
     * ?playMusic\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void playMusic(std::string const&, class Vec3 const&, float, float);
    /**
     * @symbol
     * ?playStreamingMusic\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHH\@Z
     */
    MCVAPI void playStreamingMusic(std::string const&, int, int, int);
    /**
     * @symbol ?playerListChanged\@LevelListener\@\@UEAAXXZ
     */
    MCVAPI void playerListChanged();
    /**
     * @symbol ?sendServerLegacyParticle\@LevelListener\@\@UEAAXW4ParticleType\@\@AEBVVec3\@\@1H\@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const&, class Vec3 const&, int);
    /**
     * @symbol ?takePicture\@LevelListener\@\@UEAAXAEAVImageBuffer\@cg\@\@PEAVActor\@\@1AEAUScreenshotOptions\@\@\@Z
     */
    MCVAPI void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelListener();
#endif
    // NOLINTEND
};

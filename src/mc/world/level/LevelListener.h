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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELLISTENER
    /**
     * @symbol
     * ?addBreakingItemParticleEffect\@LevelListener\@\@UEAAXAEBVVec3\@\@W4ParticleType\@\@AEBUResolvedItemIconInfo\@\@\@Z
     */
    MCVAPI void
    addBreakingItemParticleEffect(class Vec3 const&, enum class ParticleType, struct ResolvedItemIconInfo const&); // NOLINT
    /**
     * @symbol
     * ?addParticleEffect\@LevelListener\@\@UEAAXAEBVHashedString\@\@AEBVActor\@\@0AEBVVec3\@\@AEBVMolangVariableMap\@\@\@Z
     */
    MCVAPI void
    addParticleEffect(class HashedString const&, class Actor const&, class HashedString const&, class Vec3 const&, class MolangVariableMap const&); // NOLINT
    /**
     * @symbol ?addTerrainParticleEffect\@LevelListener\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void addTerrainParticleEffect(
        class BlockPos const&,
        class Block const&,
        class Vec3 const&,
        float,
        float,
        float
    ); // NOLINT
    /**
     * @symbol ?addTerrainSlideEffect\@LevelListener\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void
    addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float); // NOLINT
    /**
     * @symbol ?allChanged\@LevelListener\@\@UEAAXXZ
     */
    MCVAPI void allChanged(); // NOLINT
    /**
     * @symbol ?levelEvent\@LevelListener\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI void levelEvent(enum class LevelEvent, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?levelEvent\@LevelListener\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCVAPI void levelEvent(enum class LevelEvent, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?onChunkLoaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&); // NOLINT
    /**
     * @symbol ?onChunkReloaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkReloaded(class ChunkSource&, class LevelChunk&); // NOLINT
    /**
     * @symbol ?onChunkUnloaded\@LevelListener\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk&); // NOLINT
    /**
     * @symbol ?onEntityAdded\@LevelListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityAdded(class Actor&); // NOLINT
    /**
     * @symbol ?onEntityRemoved\@LevelListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityRemoved(class Actor&); // NOLINT
    /**
     * @symbol
     * ?onLevelDestruction\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onLevelDestruction(std::string const&); // NOLINT
    /**
     * @symbol ?onSubChunkLoaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@F_N\@Z
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource&, class LevelChunk&, short, bool); // NOLINT
    /**
     * @symbol
     * ?playMusic\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void playMusic(std::string const&, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol
     * ?playStreamingMusic\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHH\@Z
     */
    MCVAPI void playStreamingMusic(std::string const&, int, int, int); // NOLINT
    /**
     * @symbol ?playerListChanged\@LevelListener\@\@UEAAXXZ
     */
    MCVAPI void playerListChanged(); // NOLINT
    /**
     * @symbol ?sendServerLegacyParticle\@LevelListener\@\@UEAAXW4ParticleType\@\@AEBVVec3\@\@1H\@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const&, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?takePicture\@LevelListener\@\@UEAAXAEAVImageBuffer\@cg\@\@PEAVActor\@\@1AEAUScreenshotOptions\@\@\@Z
     */
    MCVAPI void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelListener(); // NOLINT
#endif
};

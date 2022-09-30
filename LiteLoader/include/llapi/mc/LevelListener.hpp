/**
 * @file  LevelListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelListener.
 *
 */
class LevelListener : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELLISTENER
public:
    class LevelListener& operator=(class LevelListener const &) = delete;
    LevelListener(class LevelListener const &) = delete;
    LevelListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelListener();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @hash   32223567
     * @vftbl  11
     * @symbol ?addParticle@LevelListener@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     */
    virtual class Particle * addParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELLISTENER
    /**
     * @hash   -2134806053
     * @symbol ?addBreakingItemParticleEffect@LevelListener@@UEAAXAEBVVec3@@W4ParticleType@@AEBUTextureUVCoordinateSet@@_N@Z
     */
    MCVAPI void addBreakingItemParticleEffect(class Vec3 const &, enum class ParticleType, struct TextureUVCoordinateSet const &, bool);
    /**
     * @hash   170105818
     * @symbol ?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVActor@@0AEBVVec3@@AEBVMolangVariableMap@@@Z
     */
    MCVAPI void addParticleEffect(class HashedString const &, class Actor const &, class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
    /**
     * @hash   792154131
     * @symbol ?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z
     */
    MCVAPI void addParticleEffect(class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
    /**
     * @hash   1528986572
     * @symbol ?addTerrainParticleEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
     */
    MCVAPI void addTerrainParticleEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @hash   -15599121
     * @symbol ?addTerrainSlideEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
     */
    MCVAPI void addTerrainSlideEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @hash   134357602
     * @symbol ?allChanged@LevelListener@@UEAAXXZ
     */
    MCVAPI void allChanged();
    /**
     * @hash   1889828017
     * @symbol ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
     */
    MCVAPI void levelEvent(enum class LevelEvent, class CompoundTag const &);
    /**
     * @hash   1048828646
     * @symbol ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
     */
    MCVAPI void levelEvent(enum class LevelEvent, class Vec3 const &, int);
    /**
     * @hash   2133883572
     * @symbol ?levelSoundEvent@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     */
    MCVAPI void levelSoundEvent(std::string const &, class Vec3 const &, float, float);
    /**
     * @hash   525306505
     * @symbol ?levelSoundEvent@LevelListener@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
     */
    MCVAPI void levelSoundEvent(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1433576359
     * @symbol ?onChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   1821153516
     * @symbol ?onChunkReloaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkReloaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   -407803856
     * @symbol ?onChunkUnloaded@LevelListener@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @hash   -22372502
     * @symbol ?onEntityAdded@LevelListener@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void onEntityAdded(class Actor &);
    /**
     * @hash   372273034
     * @symbol ?onEntityRemoved@LevelListener@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void onEntityRemoved(class Actor &);
    /**
     * @hash   1362995312
     * @symbol ?onLevelDestruction@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onLevelDestruction(std::string const &);
    /**
     * @hash   -1041923391
     * @symbol ?onSubChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource &, class LevelChunk &, short, bool);
    /**
     * @hash   -1582689578
     * @symbol ?playMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     */
    MCVAPI void playMusic(std::string const &, class Vec3 const &, float, float);
    /**
     * @hash   -1091405111
     * @symbol ?playStreamingMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
     */
    MCVAPI void playStreamingMusic(std::string const &, int, int, int);
    /**
     * @hash   1034309028
     * @symbol ?playerListChanged@LevelListener@@UEAAXXZ
     */
    MCVAPI void playerListChanged();
    /**
     * @hash   490204364
     * @symbol ?sendServerLegacyParticle@LevelListener@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @hash   -813920590
     * @symbol ?stopAllSounds@LevelListener@@UEAAXXZ
     */
    MCVAPI void stopAllSounds();
    /**
     * @hash   -304200048
     * @symbol ?stopSoundEvent@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void stopSoundEvent(std::string const &);
    /**
     * @hash   -1240909712
     * @symbol ?takePicture@LevelListener@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
     */
    MCVAPI void takePicture(class cg::ImageBuffer &, class Actor *, class Actor *, struct ScreenshotOptions &);
#endif

};
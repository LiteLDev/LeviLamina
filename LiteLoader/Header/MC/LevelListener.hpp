// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
    /*0*/ virtual ~LevelListener();
    /*1*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /*
    inline void playMusic(std::string const & a0, class Vec3 const & a1, float a2, float a3){
        void (LevelListener::*rv)(std::string const &, class Vec3 const &, float, float);
        *((void**)&rv) = dlsym("?playMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class Vec3 const &>(a1), std::forward<float>(a2), std::forward<float>(a3));
    }
    inline void levelSoundEvent(enum LevelSoundEvent a0, class Vec3 const & a1, int a2, struct ActorDefinitionIdentifier const & a3, bool a4, bool a5){
        void (LevelListener::*rv)(enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
        *((void**)&rv) = dlsym("?levelSoundEvent@LevelListener@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z");
        return (this->*rv)(std::forward<enum LevelSoundEvent>(a0), std::forward<class Vec3 const &>(a1), std::forward<int>(a2), std::forward<struct ActorDefinitionIdentifier const &>(a3), std::forward<bool>(a4), std::forward<bool>(a5));
    }
    inline void onChunkReloaded(class ChunkSource & a0, class LevelChunk & a1){
        void (LevelListener::*rv)(class ChunkSource &, class LevelChunk &);
        *((void**)&rv) = dlsym("?onChunkReloaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class ChunkSource &>(a0), std::forward<class LevelChunk &>(a1));
    }
    inline void stopSoundEvent(std::string const & a0){
        void (LevelListener::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?stopSoundEvent@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline void onSubChunkLoaded(class ChunkSource & a0, class LevelChunk & a1, short a2){
        void (LevelListener::*rv)(class ChunkSource &, class LevelChunk &, short);
        *((void**)&rv) = dlsym("?onSubChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F@Z");
        return (this->*rv)(std::forward<class ChunkSource &>(a0), std::forward<class LevelChunk &>(a1), std::forward<short>(a2));
    }
    inline void stopAllSounds(){
        void (LevelListener::*rv)();
        *((void**)&rv) = dlsym("?stopAllSounds@LevelListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void playerListChanged(){
        void (LevelListener::*rv)();
        *((void**)&rv) = dlsym("?playerListChanged@LevelListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void levelEvent(enum LevelEvent a0, class Vec3 const & a1, int a2){
        void (LevelListener::*rv)(enum LevelEvent, class Vec3 const &, int);
        *((void**)&rv) = dlsym("?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z");
        return (this->*rv)(std::forward<enum LevelEvent>(a0), std::forward<class Vec3 const &>(a1), std::forward<int>(a2));
    }
    inline void onEntityRemoved(class Actor & a0){
        void (LevelListener::*rv)(class Actor &);
        *((void**)&rv) = dlsym("?onEntityRemoved@LevelListener@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0));
    }
    inline void levelSoundEvent(std::string const & a0, class Vec3 const & a1, float a2, float a3){
        void (LevelListener::*rv)(std::string const &, class Vec3 const &, float, float);
        *((void**)&rv) = dlsym("?levelSoundEvent@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class Vec3 const &>(a1), std::forward<float>(a2), std::forward<float>(a3));
    }
    inline void addTerrainParticleEffect(class BlockPos const & a0, class Block const & a1, class Vec3 const & a2, float a3, float a4, float a5){
        void (LevelListener::*rv)(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
        *((void**)&rv) = dlsym("?addTerrainParticleEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0), std::forward<class Block const &>(a1), std::forward<class Vec3 const &>(a2), std::forward<float>(a3), std::forward<float>(a4), std::forward<float>(a5));
    }
    inline void addParticleEffect(class HashedString const & a0, class Vec3 const & a1, class MolangVariableMap const & a2){
        void (LevelListener::*rv)(class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
        *((void**)&rv) = dlsym("?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z");
        return (this->*rv)(std::forward<class HashedString const &>(a0), std::forward<class Vec3 const &>(a1), std::forward<class MolangVariableMap const &>(a2));
    }
    inline void addTerrainSlideEffect(class BlockPos const & a0, class Block const & a1, class Vec3 const & a2, float a3, float a4, float a5){
        void (LevelListener::*rv)(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
        *((void**)&rv) = dlsym("?addTerrainSlideEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0), std::forward<class Block const &>(a1), std::forward<class Vec3 const &>(a2), std::forward<float>(a3), std::forward<float>(a4), std::forward<float>(a5));
    }
    inline void addParticleEffect(class HashedString const & a0, class Actor const & a1, class HashedString const & a2, class Vec3 const & a3, class MolangVariableMap const & a4){
        void (LevelListener::*rv)(class HashedString const &, class Actor const &, class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
        *((void**)&rv) = dlsym("?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVActor@@0AEBVVec3@@AEBVMolangVariableMap@@@Z");
        return (this->*rv)(std::forward<class HashedString const &>(a0), std::forward<class Actor const &>(a1), std::forward<class HashedString const &>(a2), std::forward<class Vec3 const &>(a3), std::forward<class MolangVariableMap const &>(a4));
    }
    inline void addBreakingItemParticleEffect(class Vec3 const & a0, enum ParticleType a1, struct TextureUVCoordinateSet const & a2, bool a3){
        void (LevelListener::*rv)(class Vec3 const &, enum ParticleType, struct TextureUVCoordinateSet const &, bool);
        *((void**)&rv) = dlsym("?addBreakingItemParticleEffect@LevelListener@@UEAAXAEBVVec3@@W4ParticleType@@AEBUTextureUVCoordinateSet@@_N@Z");
        return (this->*rv)(std::forward<class Vec3 const &>(a0), std::forward<enum ParticleType>(a1), std::forward<struct TextureUVCoordinateSet const &>(a2), std::forward<bool>(a3));
    }
    inline void takePicture(class cg::ImageBuffer & a0, class Actor * a1, class Actor * a2, struct ScreenshotOptions & a3){
        void (LevelListener::*rv)(class cg::ImageBuffer &, class Actor *, class Actor *, struct ScreenshotOptions &);
        *((void**)&rv) = dlsym("?takePicture@LevelListener@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z");
        return (this->*rv)(std::forward<class cg::ImageBuffer &>(a0), std::forward<class Actor *>(a1), std::forward<class Actor *>(a2), std::forward<struct ScreenshotOptions &>(a3));
    }
    inline void levelEvent(enum LevelEvent a0, class CompoundTag const & a1){
        void (LevelListener::*rv)(enum LevelEvent, class CompoundTag const &);
        *((void**)&rv) = dlsym("?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<enum LevelEvent>(a0), std::forward<class CompoundTag const &>(a1));
    }
    inline void onEntityAdded(class Actor & a0){
        void (LevelListener::*rv)(class Actor &);
        *((void**)&rv) = dlsym("?onEntityAdded@LevelListener@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0));
    }
    inline void allChanged(){
        void (LevelListener::*rv)();
        *((void**)&rv) = dlsym("?allChanged@LevelListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void playStreamingMusic(std::string const & a0, int a1, int a2, int a3){
        void (LevelListener::*rv)(std::string const &, int, int, int);
        *((void**)&rv) = dlsym("?playStreamingMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<int>(a3));
    }
    inline void onLevelDestruction(std::string const & a0){
        void (LevelListener::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?onLevelDestruction@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline void sendServerLegacyParticle(enum ParticleType a0, class Vec3 const & a1, class Vec3 const & a2, int a3){
        void (LevelListener::*rv)(enum ParticleType, class Vec3 const &, class Vec3 const &, int);
        *((void**)&rv) = dlsym("?sendServerLegacyParticle@LevelListener@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z");
        return (this->*rv)(std::forward<enum ParticleType>(a0), std::forward<class Vec3 const &>(a1), std::forward<class Vec3 const &>(a2), std::forward<int>(a3));
    }
    inline void onChunkLoaded(class ChunkSource & a0, class LevelChunk & a1){
        void (LevelListener::*rv)(class ChunkSource &, class LevelChunk &);
        *((void**)&rv) = dlsym("?onChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class ChunkSource &>(a0), std::forward<class LevelChunk &>(a1));
    }
    inline void onChunkUnloaded(class LevelChunk & a0){
        void (LevelListener::*rv)(class LevelChunk &);
        *((void**)&rv) = dlsym("?onChunkUnloaded@LevelListener@@UEAAXAEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class LevelChunk &>(a0));
    }
    */

protected:

private:

};
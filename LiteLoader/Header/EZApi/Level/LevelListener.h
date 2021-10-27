#pragma once

#include <memory>
#include <string>

#include "BlockSourceListener.h"

namespace cg {
class ImageBuffer;
}

enum class ParticleType;
enum class LevelEvent;
enum class LevelSoundEvent;

class LevelListener : public BlockSourceListener {
public:
    virtual ~LevelListener();
    virtual void allChanged();
    virtual void
                 addParticle(enum ParticleType, class Vec3 const&, class Vec3 const&, int, class CompoundTag const*, bool);
    virtual void sendServerLegacyParticle(enum ParticleType, class Vec3 const&, class Vec3 const&, int);
    virtual void addParticleEffect(class HashedString const&, class Vec3 const&, class MolangVariableMap const&);
    virtual void addParticleEffect(
        class HashedString const&, class Actor const&, class HashedStrubg const&, class Vec3 const&,
        class MolangVariableMap const&);
    virtual void
        addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    virtual void
        addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    virtual void
                 addBreakingItemParticleEffect(class Vec3 const&, enum ParticleType, struct TextureUVCoordinateSet const&, bool);
    virtual void playMusic(std::string const&, class Vec3 const&, float, float);
    virtual void playStreamingMusic(std::string const&, int, int, int);
    virtual void onEntityAdded(Actor&);
    virtual void onEntityRemoved(Actor&);
    virtual void onChunkLoaded(class ChunkSource&, class LevelChunk&);
    virtual void onChunkUnloaded(class LevelChunk&);
    virtual void onLevelDestruction(std::string const&);
    virtual void levelEvent(enum LevelEvent, class Vec3 const&, int);
    virtual void levelEvent(enum LevelEvent, class CompoundTag const&);
    virtual void
                 levelSoundEvent(enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    virtual void levelSoundEvent(std::string const&, class Vec3 const&, float, float);
    virtual void stopSoundEvent(std::string const&);
    virtual void stopAllSounds();
    virtual void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, class ScreenshotOptions&);
    virtual void playerListChanged();
};
#pragma once

#include <functional>
#include <string>

#include <modutils.h>

#include "../Core/AutomaticID.h"
#include "../dll.h"
#include "LevelDataWrapper.h"

class Player;
class Dimension;
class PacketSender;
enum class Difficulty;
enum class GameType;
enum class BossEventUpdateType;
enum class ActorEvent;
enum class LevelEvent;
enum class LevelSoundEvent;
enum class MaterialType;
enum class ParticleType;

class Level {
public:
    MCAPI void save(void);
    MCAPI void saveGameData(void);
    MCAPI void saveVillages(void);
    MCAPI void saveBiomeData(void);
    MCAPI void saveLevelData(void);
    MCAPI void saveDirtyChunks(void);

    MCAPI int                       getNewPlayerId(void) const;
    MCAPI class GameRules&          getGameRules(void);
    MCAPI class Player*             getRandomPlayer(void);
    MCAPI enum Difficulty           getDifficulty(void) const;
    MCAPI class Player*             getPrimaryLocalPlayer(void) const;
    MCAPI class Color               getPlayerColor(class Player const&) const;
    MCAPI struct AdventureSettings& getAdventureSettings(void);
    MCAPI class Actor*              getRuntimeEntity(class ActorRuntimeID, bool) const;
    MCAPI class ITickingArea*       getTickingArea(class mce::UUID const&) const;
    MCAPI float                     getSpecialMultiplier(AutomaticID<class Dimension, int>);
    MCAPI class MapItemSavedData*   getMapSavedData(struct ActorUniqueID);
    MCAPI class Dimension*          getDimension(class AutomaticID<class Dimension, int>) const;
    MCAPI std::string const& getPlayerXUID(class mce::UUID const&) const;
    MCAPI std::string const&    getPlayerPlatformOnlineId(class mce::UUID const&) const;
    MCAPI virtual ActorUniqueID getNewUniqueID();
    BASEAPI PacketSender& getPacketSender() const;
    BASEAPI uint64_t      GetServerTick();
    BASEAPI LevelDataWrapper& GetLevelDataWrapper();

    MCAPI void setDefaultGameType(enum GameType);

    MCAPI bool         hasCommandsEnabled(void) const;
    MCAPI virtual void forEachPlayer(std::function<bool(Player&)>);
    MCAPI virtual void forEachPlayer(std::function<bool(Player const&)>) const;
    MCAPI void         forEachDimension(std::function<bool(Dimension const&)>);

    MCAPI void broadcastBossEvent(enum BossEventUpdateType);
    MCAPI void broadcastEntityEvent(class Actor*, enum ActorEvent, int);
    MCAPI void broadcastLevelEvent(enum LevelEvent, class Vec3 const&, int, class Player*);
    MCAPI void broadcastLevelEvent(enum LevelEvent, class CompoundTag const&, class Player*);
    MCAPI void broadcastDimensionEvent(class BlockSource&, enum LevelEvent, class Vec3 const&, int, class Player*);
    MCAPI void broadcastSoundEvent(
        class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&,
        bool, bool);

    MCAPI void
               playSound(enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    MCAPI void playSound(
        class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&,
        bool, bool);
    MCAPI void playSynchronizedSound(
        class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&,
        bool, bool);

    MCAPI void                 tickEntities(void);
    MCAPI void                 updateWeather(float, int, float, int);
    MCAPI void                 denyEffect(class Vec3 const&);
    MCAPI void                 forceRemoveEntity(class Actor&);
    MCAPI void                 addListener(class LevelListener&);
    MCAPI bool                 isPlayerSuspended(class Player&) const;
    MCAPI void                 requestMapInfo(struct ActorUniqueID);
    MCAPI bool                 copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);
    MCAPI void                 onChunkDiscarded(class LevelChunk&);
    MCAPI void                 removeListener(class LevelListener&);
    MCAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool);
    MCAPI void                 potionSplash(class Vec3 const&, class Color const&, bool);
    MCAPI virtual class Actor* fetchEntity(struct ActorUniqueID, bool) const;
    MCAPI void                 unregisterTemporaryPointer(class _TickPtr&);
    MCAPI bool                 destroyBlock(class BlockSource&, class BlockPos const&, bool);
    MCAPI bool                 extinguishFire(class BlockSource&, class BlockPos const&, unsigned char);
    MCAPI void                 explode(class BlockSource&, class Actor*, class Vec3 const&, float, bool, bool, float, bool);
    MCAPI class Dimension&     createDimension(class AutomaticID<class Dimension, int>);
    MCAPI bool                 checkAndHandleMaterial(class AABB const&, enum MaterialType, class Actor*);
    MCAPI class Player*        findPlayer(std::function<bool(Player const&)>) const;
    MCAPI void
               addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    MCAPI void entityChangeDimension(class Actor&, class AutomaticID<class Dimension, int>);
    MCAPI class Particle*
                                  addParticle(enum ParticleType, class Vec3 const&, class Vec3 const&, int, class CompoundTag const*, bool);
    MCAPI class MapItemSavedData& createMapSavedData(
        struct ActorUniqueID const&, class BlockPos const&, class AutomaticID<class Dimension, int>, int);
    MCAPI void spawnParticleEffect(std::string const&, class Vec3 const&, class Dimension*);
    MCAPI void requestPlayerChangeDimension(class Player&, std::unique_ptr<class ChangeDimensionRequest>);
    MCAPI      Level(
             class SoundPlayer&, std::unique_ptr<class LevelStorage>, class IMinecraftEventing&, bool, class Scheduler&,
             class StructureManager&, class ResourcePackManager&, class IEntityRegistryOwner&,
             std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>);

    BUILD_ACCESS(class BlockPalette*, GlobalBlockPalette, 1856);
};
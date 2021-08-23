#pragma once

#include <memory>
#include <string>

#include "../Core/AutomaticID.h"
#include "LevelListener.h"
#include "SavedData.h"

class Dimension : public LevelListener, public SavedData {
public:
    using Id = AutomaticID<Dimension, int>;
    class Level*                       level;
    short                              unk64;
    std::unique_ptr<class BlockSource> source;

    //BUILD_ACCESS(Id, DimensionId, 216);

    virtual ~Dimension();
    virtual void                                                                        init(void);
    virtual void                                                                        tick(void);
    virtual void                                                                        tickRedstone(void);
    virtual class std::tuple<std::unique_ptr<class ChunkSource>, class WorldGenerator*> createGenerator(void);
    virtual bool                                                                        isNaturalDimension();
    virtual bool                                                                        isValidSpawn(int, int) const;
    virtual class Color                                                                 getBrightnessDependentFogColor(class Color const&, float) const;
    virtual float                                                                       getMaxFogEnd(void) const;
    virtual float                                                                       getMaxFogStart(void) const;
    virtual bool                                                                        isFoggyAt(int, int) const;
    virtual float                                                                       getCloudHeight(void) const;
    virtual int                                                                         getDefaultBiome() const;
    virtual bool                                                                        mayRespawnViaBed() const;
    virtual bool                                                                        hasGround() const;
    virtual class BlockPos                                                              getSpawnPos() const;
    virtual int                                                                         getSpawnYPosition() const;
    virtual bool                                                                        hasBedrockFog();
    virtual float                                                                       getClearColorScale(void);
    virtual bool                                                                        showSky();
    virtual bool                                                                        isDay(void) const;
    virtual float                                                                       getSunIntensity(float, class Vec3 const&, float) const;
    virtual void                                                                        forceCheckAllNeighChunkSavedStat() const;
    virtual class Vec3                                                                  translatePosAcrossDimension(class Vec3 const&, class AutomaticID<class Dimension, int>) const;
    virtual void                                                                        deserialize(class CompoundTag const&);
    virtual void                                                                        serialize(class CompoundTag&) const;
    virtual void                                                                        sendBroadcast(class Packet const&, class Player*);
    virtual bool                                                                        isPositionRelevantForPlayer(class BlockPos const&, class Player&) const;
    virtual bool                                                                        isEntityRelevantForPlayer(class Player&, class Actor const&) const;
    virtual class BaseLightTextureImageBuilder*                                         getLightTextureImageBuilder(void) const;
    virtual class DimensionBrightnessRamp const&                                        getBrightnessRamp(void) const;
    virtual void                                                                        startLeaveGame(void);
    virtual float                                                                       getTimeOfDay(int, float) const;
    virtual std::unique_ptr<class ChunkBuildOrderPolicyBase>                            _createChunkBuildOrderPolicy(void);

	MCAPI static enum LimboEntitiesVersion const CurrentLimboEntitiesVersion;
	MCAPI Dimension(class ILevel&, class AutomaticID<class Dimension, int>, class DimensionHeightRange, class Scheduler&, std::string);
	MCAPI static float const* const MOON_BRIGHTNESS_PER_PHASE;
	MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1> > const STRUCTURE_PRUNE_INTERVAL;
	MCAPI void _onNewTickingEntity(class Actor&);
	MCAPI void _registerEntity(class Actor&);
	MCAPI void _unregisterEntity(class Actor&);
	MCAPI void addWither(struct ActorUniqueID const&);
	MCAPI float distanceToNearestPlayerSqr2D(class Vec3);
	MCAPI class Actor* fetchEntity(struct ActorUniqueID, bool);
	MCAPI class Player* fetchNearestAttackablePlayer(class Actor&, float);
	MCAPI class Player* fetchNearestAttackablePlayer(class BlockPos, float, class Actor*);
	MCAPI class Player* fetchNearestPlayer(float, float, float, float, bool);
	MCAPI class Player* fetchNearestPlayer(class Actor&, float);
	MCAPI class Player* findPlayer(class std::function<bool(class Player const&)>)const;
	MCAPI void flagEntityforChunkMove(class Actor&);
	MCAPI void flushLevelChunkGarbageCollector(void);
	MCAPI void flushRunTimeLighting(void);
	MCAPI void forEachPlayer(class std::function<bool(class Player&)>);
	MCAPI void forEachPlayer(class std::function<bool(class Player const&)>)const;
	MCAPI void forceSaveVillageManager(void);
	MCAPI class BlockEventDispatcher& getBlockEventDispatcher(void);
	MCAPI class BlockSource& getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(void)const;
	MCAPI class ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy(void);
	//MCAPI class gsl::not_null<class ChunkLoadActionList* > getChunkLoadActionList(void);
	MCAPI class ChunkSource& getChunkSource(void)const;
	MCAPI class CircuitSystem& getCircuitSystem(void);
	//MCAPI class gsl::not_null<class DelayActionList* > getDelayActionList(void);
	MCAPI class AutomaticID<class Dimension, int> getDimensionId(void)const;
	MCAPI class FeatureTerrainAdjustments& getFeatureTerrainAdjustments(void);
	MCAPI short getHeight(void)const;
	MCAPI class DimensionHeightRange const& getHeightRange(void)const;
	MCAPI class Level& getLevel(void)const;
	MCAPI class Level const& getLevelConst(void)const;
	MCAPI short getMinHeight(void)const;
	MCAPI float getMoonBrightness(void)const;
	MCAPI int getMoonPhase(void)const;
	MCAPI float getPopCap(int, bool)const;
	MCAPI class Seasons& getSeasons(void);
	MCAPI struct Brightness getSkyDarken(void)const;
	MCAPI float getSunAngle(float)const;
	MCAPI class TickingAreaList& getTickingAreas(void);
	MCAPI class TickingAreaList const& getTickingAreasConst(void)const;
	MCAPI float getTimeOfDay(float)const;
	MCAPI class std::unique_ptr<class VillageManager, struct std::default_delete<class VillageManager> > const& getVillageManager(void)const;
	MCAPI class Weather& getWeather(void)const;
	MCAPI class WorldGenerator* getWorldGenerator(void)const;
	MCAPI bool hasCeiling(void)const;
	MCAPI bool hasSkylight(void)const;
	MCAPI bool isLeaveGameDone(void);
	MCAPI bool isRedstoneTick(void);
	MCAPI bool isUltraWarm(void)const;
	MCAPI void onStaticTickingAreaAdded(std::string const&);
	MCAPI void processTickingAreaRemoves(void);
	MCAPI void processTickingAreaUpdates(void);
	MCAPI void removeActorByID(struct ActorUniqueID const&);
	MCAPI void removeWither(struct ActorUniqueID const&);
	MCAPI void sendPacketForEntity(class Actor const&, class Packet const&, class Player const*);
	MCAPI void sendPacketForPosition(class BlockPos const&, class Packet const&, class Player const*);
	MCAPI void sendPacketToClients(class Packet const&, class std::vector<struct NetworkIdentifierWithSubId, class std::allocator<struct NetworkIdentifierWithSubId> >);
	MCAPI void setCeiling(bool);
	MCAPI void setSkylight(bool);
	MCAPI void setUltraWarm(bool);
	MCAPI void transferEntity(class Vec3 const&, class std::unique_ptr<class CompoundTag, struct std::default_delete<class CompoundTag> >);
	MCAPI void transferEntityToUnloadedChunk(class Vec3 const&, class std::unique_ptr<class CompoundTag, struct std::default_delete<class CompoundTag> >);
	MCAPI bool tryAssignNewRegionAt(class ChunkPos const&, class Actor&);
	MCAPI void tryGarbageCollectStructures(void);
	MCAPI class BlockSource* tryGetClosestPublicRegion(class ChunkPos const&)const;
	MCAPI void tryLoadLimboEntities(class ChunkPos const&);
	MCAPI void updateBlockLight(class BlockPos const&, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);

};

static_assert(offsetof(Dimension, unk64) == 64);
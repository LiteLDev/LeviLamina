#pragma once
#include "Core.h"
class LevelStorage {
public:
	LevelStorage(const LevelStorage&) = delete;
	LevelStorage& operator=(const LevelStorage&) = delete;
	LevelStorage() = delete;
#ifdef MCAPI_LEVEL_EXTRA
	MCINLINE void corruptLevel() {
		void (LevelStorage::*rv)();
		*((void**)&rv) = dlsym("?corruptLevel@LevelStorage@@UEAAXXZ");
		return (this->*rv)();
	}

	MCINLINE class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> loadAllPlayerIDs(bool a0) const {
		class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> (LevelStorage::*rv)(bool) const;
		*((void**)&rv) = dlsym("?loadAllPlayerIDs@LevelStorage@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_N@Z");
		return (this->*rv)(a0);
	} MCINLINE void save(class Actor& a0) {
		void (LevelStorage::*rv)(class Actor&);
		*((void**)&rv) = dlsym("?save@LevelStorage@@QEAAXAEAVActor@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getServerId(class Player const& a0, bool a1) {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (LevelStorage::*rv)(class Player const&, bool);
		*((void**)&rv) = dlsym("?getServerId@LevelStorage@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@_N@Z");
		return (this->*rv)(a0, a1);
	}
#endif
	MCINLINE void freeCaches() {
		void (LevelStorage::*rv)();
		*((void**)&rv) = dlsym("?freeCaches@LevelStorage@@UEAAXXZ");
		return (this->*rv)();
	}
#if 0
	MCINLINE  class std::unique_ptr<class LevelStorage::Batch,struct std::default_delete<class LevelStorage::Batch> >  createWriteBatch(){
 class std::unique_ptr<class LevelStorage::Batch,struct std::default_delete<class LevelStorage::Batch> > (LevelStorage::*rv)(); *((void**)&rv) = dlsym("?createWriteBatch@LevelStorage@@UEAA?AV?$unique_ptr@VBatch@LevelStorage@@U?$default_delete@VBatch@LevelStorage@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >  loadLostPlayerData(class Player const & a0,bool a1){
class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > (LevelStorage::*rv)(class Player const &,bool); *((void**)&rv) = dlsym("?loadLostPlayerData@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVPlayer@@_N@Z"); return (this->*rv)(a0,a1);}
	MCINLINE class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void> >  saveData(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & a0,class CompoundTag const & a1){
class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void> > (LevelStorage::*rv)(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class CompoundTag const &); *((void**)&rv) = dlsym("?saveData@LevelStorage@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVCompoundTag@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >  loadServerPlayerData(class Player const & a0,bool a1){
class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > (LevelStorage::*rv)(class Player const &,bool); *((void**)&rv) = dlsym("?loadServerPlayerData@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVPlayer@@_N@Z"); return (this->*rv)(a0,a1);}
//   bad fun

#endif
};
#pragma once
#include "Core.h"
class Level {
public:
	Level(const Level&) = delete;
	Level& operator=(const Level&) = delete;
	Level() = delete;
	#ifdef MCAPI_LEVEL_EXTRA
	MCINLINE void runCommand(class HashedString const& a0, class CommandOrigin& a1, enum CommandOriginSystem a2, enum CurrentCmdVersion a3) {
		void (Level::*rv)(class HashedString const&, class CommandOrigin&, enum CommandOriginSystem, enum CurrentCmdVersion);
		*((void**)&rv) = dlsym("?runCommand@Level@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}

	MCINLINE void directTickEntities(class BlockSource& a0) {
		void (Level::*rv)(class BlockSource&);
		*((void**)&rv) = dlsym("?directTickEntities@Level@@UEAAXAEAVBlockSource@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class FeatureRegistry& getFeatureRegistry() {
		class FeatureRegistry& (Level::*rv)();
		*((void**)&rv) = dlsym("?getFeatureRegistry@Level@@UEAAAEAVFeatureRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE class FeatureRegistry const& getFeatureRegistry() const {
		class FeatureRegistry const& (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getFeatureRegistry@Level@@UEBAAEBVFeatureRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE void broadcastEntityEvent(class Actor* a0, enum ActorEvent a1, int a2) {
		void (Level::*rv)(class Actor*, enum ActorEvent, int);
		*((void**)&rv) = dlsym("?broadcastEntityEvent@Level@@QEAAXPEAVActor@@W4ActorEvent@@H@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void _handlePlayerSuspension() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?_handlePlayerSuspension@Level@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void setFinishedInitializing() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?setFinishedInitializing@Level@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void setDefaultGameType(enum GameType a0) {
		void (Level::*rv)(enum GameType);
		*((void**)&rv) = dlsym("?setDefaultGameType@Level@@QEAAXW4GameType@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void denyEffect(class Vec3 const& a0) {
		void (Level::*rv)(class Vec3 const&);
		*((void**)&rv) = dlsym("?denyEffect@Level@@QEAAXAEBVVec3@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void dropEntryFromTagCache(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		void (Level::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
		*((void**)&rv) = dlsym("?dropEntryFromTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void potionSplash(class Vec3 const& a0, class Color const& a1, bool a2) {
		void (Level::*rv)(class Vec3 const&, class Color const&, bool);
		*((void**)&rv) = dlsym("?potionSplash@Level@@QEAAXAEBVVec3@@AEBVColor@@_N@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class Player* getPrimaryLocalPlayer() const {
		class Player* (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getPrimaryLocalPlayer@Level@@QEBAPEAVPlayer@@XZ");
		return (this->*rv)();
	}
	MCINLINE void _handleChangeDimensionRequests() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?_handleChangeDimensionRequests@Level@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void forceRemoveEntity(class Actor& a0) {
		void (Level::*rv)(class Actor&);
		*((void**)&rv) = dlsym("?forceRemoveEntity@Level@@QEAAXAEAVActor@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void playSound(class BlockSource& a0, enum LevelSoundEvent a1, class Vec3 const& a2, int a3, struct ActorDefinitionIdentifier const& a4, bool a5, bool a6) {
		void (Level::*rv)(class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
		*((void**)&rv) = dlsym("?playSound@Level@@QEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
	}
	MCINLINE bool hasExperimentalGameplayEnabled() const {
		bool (Level::*rv)() const;
		*((void**)&rv) = dlsym("?hasExperimentalGameplayEnabled@Level@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class ResourcePackManager* getServerResourcePackManager() const {
		class ResourcePackManager* (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getServerResourcePackManager@Level@@UEBAPEAVResourcePackManager@@XZ");
		return (this->*rv)();
	}
	MCINLINE class BiomeRegistry& getBiomeRegistry() {
		class BiomeRegistry& (Level::*rv)();
		*((void**)&rv) = dlsym("?getBiomeRegistry@Level@@UEAAAEAVBiomeRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE class BiomeRegistry const& getBiomeRegistry() const {
		class BiomeRegistry const& (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getBiomeRegistry@Level@@UEBAAEBVBiomeRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE class JigsawStructureRegistry& getJigsawStructureRegistry() {
		class JigsawStructureRegistry& (Level::*rv)();
		*((void**)&rv) = dlsym("?getJigsawStructureRegistry@Level@@UEAAAEAVJigsawStructureRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE class JigsawStructureRegistry const& getJigsawStructureRegistry() const {
		class JigsawStructureRegistry const& (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getJigsawStructureRegistry@Level@@UEBAAEBVJigsawStructureRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE void saveGameData() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?saveGameData@Level@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE struct ActorUniqueID expandMapByID(struct ActorUniqueID a0, bool a1) {
		struct ActorUniqueID (Level::*rv)(struct ActorUniqueID, bool);
		*((void**)&rv) = dlsym("?expandMapByID@Level@@QEAA?AUActorUniqueID@@U2@_N@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void onChunkLoaded(class LevelChunk& a0) {
		void (Level::*rv)(class LevelChunk&);
		*((void**)&rv) = dlsym("?onChunkLoaded@Level@@UEAAXAEAVLevelChunk@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void onNewChunk(class BlockSource& a0, class LevelChunk& a1) {
		void (Level::*rv)(class BlockSource&, class LevelChunk&);
		*((void**)&rv) = dlsym("?onNewChunk@Level@@UEAAXAEAVBlockSource@@AEAVLevelChunk@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void onSourceDestroyed(class BlockSource& a0) {
		void (Level::*rv)(class BlockSource&);
		*((void**)&rv) = dlsym("?onSourceDestroyed@Level@@UEAAXAEAVBlockSource@@@Z");
		return (this->*rv)(a0);
	}

	MCINLINE void loadFunctionManager() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?loadFunctionManager@Level@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class TagRegistry& getTagRegistry() {
		class TagRegistry& (Level::*rv)();
		*((void**)&rv) = dlsym("?getTagRegistry@Level@@UEAAAEAVTagRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE class FeatureTypeFactory& getFeatureTypeFactory() {
		class FeatureTypeFactory& (Level::*rv)();
		*((void**)&rv) = dlsym("?getFeatureTypeFactory@Level@@UEAAAEAVFeatureTypeFactory@@XZ");
		return (this->*rv)();
	}
	MCINLINE class FeatureTypeFactory const& getFeatureTypeFactory() const {
		class FeatureTypeFactory const& (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getFeatureTypeFactory@Level@@UEBAAEBVFeatureTypeFactory@@XZ");
		return (this->*rv)();
	}
	MCINLINE class SurfaceBuilderRegistry& getSurfaceBuilderRegistry() {
		class SurfaceBuilderRegistry& (Level::*rv)();
		*((void**)&rv) = dlsym("?getSurfaceBuilderRegistry@Level@@UEAAAEAVSurfaceBuilderRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE class SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const {
		class SurfaceBuilderRegistry const& (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getSurfaceBuilderRegistry@Level@@UEBAAEBVSurfaceBuilderRegistry@@XZ");
		return (this->*rv)();
	}
	MCINLINE void saveLevelData() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?saveLevelData@Level@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void setDifficulty(enum Difficulty a0) {
		void (Level::*rv)(enum Difficulty);
		*((void**)&rv) = dlsym("?setDifficulty@Level@@UEAAXW4Difficulty@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void onChunkDiscarded(class LevelChunk& a0) {
		void (Level::*rv)(class LevelChunk&);
		*((void**)&rv) = dlsym("?onChunkDiscarded@Level@@QEAAXAEAVLevelChunk@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void startLeaveGame() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?startLeaveGame@Level@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE int getNewPlayerId() const {
		int (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getNewPlayerId@Level@@QEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE bool isPlayerSuspended(class Player& a0) const {
		bool (Level::*rv)(class Player&) const;
		*((void**)&rv) = dlsym("?isPlayerSuspended@Level@@QEBA_NAEAVPlayer@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> _getValidatedPlayerName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Level::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
		*((void**)&rv) = dlsym("?_getValidatedPlayerName@Level@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z");
		return (this->*rv)(a0);
	} MCINLINE void onPlayerDeath(class Player& a0, class ActorDamageSource const& a1) {
		void (Level::*rv)(class Player&, class ActorDamageSource const&);
		*((void**)&rv) = dlsym("?onPlayerDeath@Level@@UEAAXAEAVPlayer@@AEBVActorDamageSource@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void addEntryToTagCache(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		void (Level::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
		*((void**)&rv) = dlsym("?addEntryToTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void removeListener(class LevelListener& a0) {
		void (Level::*rv)(class LevelListener&);
		*((void**)&rv) = dlsym("?removeListener@Level@@QEAAXAEAVLevelListener@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void incrementTagCache(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class TagRegistry& a1) {
		void (Level::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class TagRegistry&);
		*((void**)&rv) = dlsym("?incrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTagRegistry@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void _loadAutonomousEntities() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?_loadAutonomousEntities@Level@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void setCommandsEnabled(bool a0) {
		void (Level::*rv)(bool);
		*((void**)&rv) = dlsym("?setCommandsEnabled@Level@@UEAAX_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void broadcastLevelEvent(enum LevelEvent a0, class Vec3 const& a1, int a2, class Player* a3) {
		void (Level::*rv)(enum LevelEvent, class Vec3 const&, int, class Player*);
		*((void**)&rv) = dlsym("?broadcastLevelEvent@Level@@QEAAXW4LevelEvent@@AEBVVec3@@HPEAVPlayer@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE void broadcastBossEvent(enum BossEventUpdateType a0) {
		void (Level::*rv)(enum BossEventUpdateType);
		*((void**)&rv) = dlsym("?broadcastBossEvent@Level@@QEAAXW4BossEventUpdateType@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE struct AdventureSettings& getAdventureSettings() {
		struct AdventureSettings& (Level::*rv)();
		*((void**)&rv) = dlsym("?getAdventureSettings@Level@@QEAAAEAUAdventureSettings@@XZ");
		return (this->*rv)();
	}
	MCINLINE void onNewChunkFor(class Player& a0, class LevelChunk& a1) {
		void (Level::*rv)(class Player&, class LevelChunk&);
		*((void**)&rv) = dlsym("?onNewChunkFor@Level@@UEAAXAEAVPlayer@@AEAVLevelChunk@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool checkAndHandleMaterial(class AABB const& a0, enum MaterialType a1, class Actor* a2) {
		bool (Level::*rv)(class AABB const&, enum MaterialType, class Actor*);
		*((void**)&rv) = dlsym("?checkAndHandleMaterial@Level@@QEAA_NAEBVAABB@@W4MaterialType@@PEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void saveVillages() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?saveVillages@Level@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void updateSleepingPlayerList() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?updateSleepingPlayerList@Level@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class Player* getRandomPlayer() {
		class Player* (Level::*rv)();
		*((void**)&rv) = dlsym("?getRandomPlayer@Level@@QEAAPEAVPlayer@@XZ");
		return (this->*rv)();
	}
	MCINLINE bool destroyBlock(class BlockSource& a0, class BlockPos const& a1, bool a2) {
		bool (Level::*rv)(class BlockSource&, class BlockPos const&, bool);
		*((void**)&rv) = dlsym("?destroyBlock@Level@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void broadcastLevelEvent(enum LevelEvent a0, class CompoundTag const& a1, class Player* a2) {
		void (Level::*rv)(enum LevelEvent, class CompoundTag const&, class Player*);
		*((void**)&rv) = dlsym("?broadcastLevelEvent@Level@@QEAAXW4LevelEvent@@AEBVCompoundTag@@PEAVPlayer@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool _playerChangeDimension(class Player* a0, class ChangeDimensionRequest& a1) {
		bool (Level::*rv)(class Player*, class ChangeDimensionRequest&);
		*((void**)&rv) = dlsym("?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void requestMapInfo(struct ActorUniqueID a0) {
		void (Level::*rv)(struct ActorUniqueID);
		*((void**)&rv) = dlsym("?requestMapInfo@Level@@QEAAXUActorUniqueID@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void save() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?save@Level@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class TradeTables* getTradeTables() {
		class TradeTables* (Level::*rv)();
		*((void**)&rv) = dlsym("?getTradeTables@Level@@UEAAPEAVTradeTables@@XZ");
		return (this->*rv)();
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& getPlayerPlatformOnlineId(class mce::UUID const& a0) const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& (Level::*rv)(class mce::UUID const&)const;
		*((void**)&rv) = dlsym("?getPlayerPlatformOnlineId@Level@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z");
		return (this->*rv)(a0);
	} MCINLINE class MapItemSavedData* _loadMapData(struct ActorUniqueID const& a0) {
		class MapItemSavedData* (Level::*rv)(struct ActorUniqueID const&);
		*((void**)&rv) = dlsym("?_loadMapData@Level@@AEAAPEAVMapItemSavedData@@AEBUActorUniqueID@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE enum Difficulty getDifficulty() const {
		enum Difficulty (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getDifficulty@Level@@QEBA?AW4Difficulty@@XZ");
		return (this->*rv)();
	}

	MCINLINE bool initialize(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class LevelSettings const& a1, class LevelData* a2, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const* a3) {
		bool (Level::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class LevelSettings const&, class LevelData*, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const*);
		*((void**)&rv) = dlsym("?initialize@Level@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@PEBV23@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE void queueEntityRemoval(class std::unique_ptr<class Actor, struct std::default_delete<class Actor>>&& a0, bool a1) {
		void (Level::*rv)(class std::unique_ptr<class Actor, struct std::default_delete<class Actor>>&&, bool);
		*((void**)&rv) = dlsym("?queueEntityRemoval@Level@@UEAAX$$QEAV?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@_N@Z");
		return (this->*rv)(std::move(a0), a1);
	}

	MCINLINE float getSpecialMultiplier(class AutomaticID<class Dimension, int> a0) {
		float (Level::*rv)(class AutomaticID<class Dimension, int>);
		*((void**)&rv) = dlsym("?getSpecialMultiplier@Level@@QEAAMV?$AutomaticID@VDimension@@H@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void decrementTagCache(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class TagRegistry& a1) {
		void (Level::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class TagRegistry&);
		*((void**)&rv) = dlsym("?decrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTagRegistry@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void removeEntityReferences(class Actor& a0, bool a1) {
		void (Level::*rv)(class Actor&, bool);
		*((void**)&rv) = dlsym("?removeEntityReferences@Level@@UEAAXAEAVActor@@_N@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void setWorldTemplateOptionsUnlocked() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?setWorldTemplateOptionsUnlocked@Level@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void entityChangeDimension(class Actor& a0, class AutomaticID<class Dimension, int> a1) {
		void (Level::*rv)(class Actor&, class AutomaticID<class Dimension, int>);
		*((void**)&rv) = dlsym("?entityChangeDimension@Level@@QEAAXAEAVActor@@V?$AutomaticID@VDimension@@H@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class MapItemSavedData& createMapSavedData(struct ActorUniqueID const& a0, class BlockPos const& a1, class AutomaticID<class Dimension, int> a2, int a3) {
		class MapItemSavedData& (Level::*rv)(struct ActorUniqueID const&, class BlockPos const&, class AutomaticID<class Dimension, int>, int);
		*((void**)&rv) = dlsym("?createMapSavedData@Level@@QEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE void _saveAutonomousEntities() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?_saveAutonomousEntities@Level@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void saveAdditionalData() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?saveAdditionalData@Level@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void broadcastDimensionEvent(class BlockSource& a0, enum LevelEvent a1, class Vec3 const& a2, int a3, class Player* a4) {
		void (Level::*rv)(class BlockSource&, enum LevelEvent, class Vec3 const&, int, class Player*);
		*((void**)&rv) = dlsym("?broadcastDimensionEvent@Level@@QEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@HPEAVPlayer@@@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE void saveBiomeData() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?saveBiomeData@Level@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void tickEntities() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?tickEntities@Level@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class ITickingArea* getTickingArea(class mce::UUID const& a0) const {
		class ITickingArea* (Level::*rv)(class mce::UUID const&)const;
		*((void**)&rv) = dlsym("?getTickingArea@Level@@QEBAPEAVITickingArea@@AEBVUUID@mce@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void broadcastSoundEvent(class BlockSource& a0, enum LevelSoundEvent a1, class Vec3 const& a2, int a3, struct ActorDefinitionIdentifier const& a4, bool a5, bool a6) {
		void (Level::*rv)(class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
		*((void**)&rv) = dlsym("?broadcastSoundEvent@Level@@QEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
	}
	MCINLINE bool copyAndLockMap(struct ActorUniqueID a0, struct ActorUniqueID a1) {
		bool (Level::*rv)(struct ActorUniqueID, struct ActorUniqueID);
		*((void**)&rv) = dlsym("?copyAndLockMap@Level@@QEAA_NUActorUniqueID@@0@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE static bool isUsableLevel(class Level* a0) {
		return ((bool (*)(class Level*))dlsym("?isUsableLevel@Level@@SA_NPEAV1@@Z"))(a0);
	}
	MCINLINE class GameRules& getGameRules() {
		class GameRules& (Level::*rv)();
		*((void**)&rv) = dlsym("?getGameRules@Level@@QEAAAEAVGameRules@@XZ");
		return (this->*rv)();
	}
	MCINLINE void spawnParticleEffect(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class Vec3 const& a1, class Dimension* a2) {
		void (Level::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class Vec3 const&, class Dimension*);
		*((void**)&rv) = dlsym("?spawnParticleEffect@Level@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void onSourceCreated(class BlockSource& a0) {
		void (Level::*rv)(class BlockSource&);
		*((void**)&rv) = dlsym("?onSourceCreated@Level@@UEAAXAEAVBlockSource@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void unregisterTemporaryPointer(class _TickPtr& a0) {
		void (Level::*rv)(class _TickPtr&);
		*((void**)&rv) = dlsym("?unregisterTemporaryPointer@Level@@QEAAXAEAV_TickPtr@@@Z");
		return (this->*rv)(a0);
	}

	MCINLINE class ResourcePackManager* getClientResourcePackManager() const {
		class ResourcePackManager* (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getClientResourcePackManager@Level@@UEBAPEAVResourcePackManager@@XZ");
		return (this->*rv)();
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& getPlayerXUID(class mce::UUID const& a0) const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& (Level::*rv)(class mce::UUID const&)const;
		*((void**)&rv) = dlsym("?getPlayerXUID@Level@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z");
		return (this->*rv)(a0);
	} MCINLINE void _loadBiomeData() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?_loadBiomeData@Level@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE bool extinguishFire(class BlockSource& a0, class BlockPos const& a1, unsigned char a2) {
		bool (Level::*rv)(class BlockSource&, class BlockPos const&, unsigned char);
		*((void**)&rv) = dlsym("?extinguishFire@Level@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@E@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class Particle* addParticle(enum ParticleType a0, class Vec3 const& a1, class Vec3 const& a2, int a3, class CompoundTag const* a4, bool a5) {
		class Particle* (Level::*rv)(enum ParticleType, class Vec3 const&, class Vec3 const&, int, class CompoundTag const*, bool);
		*((void**)&rv) = dlsym("?addParticle@Level@@QEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5);
	}
	MCINLINE bool hasCommandsEnabled() const {
		bool (Level::*rv)() const;
		*((void**)&rv) = dlsym("?hasCommandsEnabled@Level@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void playSynchronizedSound(class BlockSource& a0, enum LevelSoundEvent a1, class Vec3 const& a2, int a3, struct ActorDefinitionIdentifier const& a4, bool a5, bool a6) {
		void (Level::*rv)(class BlockSource&, enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
		*((void**)&rv) = dlsym("?playSynchronizedSound@Level@@QEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
	}
	MCINLINE void _syncTime(int a0) {
		void (Level::*rv)(int);
		*((void**)&rv) = dlsym("?_syncTime@Level@@AEAAXH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Dimension* getDimension(class AutomaticID<class Dimension, int> a0) const {
		class Dimension* (Level::*rv)(class AutomaticID<class Dimension, int>)const;
		*((void**)&rv) = dlsym("?getDimension@Level@@QEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void _cleanupDisconnectedPlayers() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?_cleanupDisconnectedPlayers@Level@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class Dimension& createDimension(class AutomaticID<class Dimension, int> a0) {
		class Dimension& (Level::*rv)(class AutomaticID<class Dimension, int>);
		*((void**)&rv) = dlsym("?createDimension@Level@@QEAAAEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class BiomeComponentFactory& getBiomeComponentFactory() {
		class BiomeComponentFactory& (Level::*rv)();
		*((void**)&rv) = dlsym("?getBiomeComponentFactory@Level@@UEAAAEAVBiomeComponentFactory@@XZ");
		return (this->*rv)();
	}
	MCINLINE class BiomeComponentFactory const& getBiomeComponentFactory() const {
		class BiomeComponentFactory const& (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getBiomeComponentFactory@Level@@UEBAAEBVBiomeComponentFactory@@XZ");
		return (this->*rv)();
	}
	MCINLINE void playSound(enum LevelSoundEvent a0, class Vec3 const& a1, int a2, struct ActorDefinitionIdentifier const& a3, bool a4, bool a5) {
		void (Level::*rv)(enum LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
		*((void**)&rv) = dlsym("?playSound@Level@@QEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5);
	}
	MCINLINE class BlockPalette& getBlockPalette() {
		class BlockPalette& (Level::*rv)();
		*((void**)&rv) = dlsym("?getBlockPalette@Level@@UEAAAEAVBlockPalette@@XZ");
		return (this->*rv)();
	}
	MCINLINE class BlockPalette const& getBlockPalette() const {
		class BlockPalette const& (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getBlockPalette@Level@@UEBAAEBVBlockPalette@@XZ");
		return (this->*rv)();
	}
	MCINLINE class StructureManager& getStructureManager() {
		class StructureManager& (Level::*rv)();
		*((void**)&rv) = dlsym("?getStructureManager@Level@@UEAAAEAVStructureManager@@XZ");
		return (this->*rv)();
	}
	MCINLINE class StructureManager const& getStructureManager() const {
		class StructureManager const& (Level::*rv)() const;
		*((void**)&rv) = dlsym("?getStructureManager@Level@@UEBAAEBVStructureManager@@XZ");
		return (this->*rv)();
	}
	MCINLINE class MapItemSavedData& _createMapSavedData(struct ActorUniqueID const& a0) {
		class MapItemSavedData& (Level::*rv)(struct ActorUniqueID const&);
		*((void**)&rv) = dlsym("?_createMapSavedData@Level@@AEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@@Z");
		return (this->*rv)(a0);
	}

	MCINLINE void addTerrainParticleEffect(class BlockPos const& a0, class Block const& a1, class Vec3 const& a2, float a3, float a4, float a5) {
		void (Level::*rv)(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
		*((void**)&rv) = dlsym("?addTerrainParticleEffect@Level@@QEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5);
	}
	MCINLINE void tick() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?tick@Level@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void clearTagCache() {
		void (Level:: * rv)();
		*((void**)&rv) = dlsym("?clearTagCache@Level@@UEAAXXZ");
		return (this->*rv)();
	}
#endif
	MCINLINE class MapItemSavedData* getMapSavedData(struct ActorUniqueID a0) {
		class MapItemSavedData* (Level:: * rv)(struct ActorUniqueID);
		*((void**)&rv) = dlsym("?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@UActorUniqueID@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Actor* fetchEntity(struct ActorUniqueID a0, bool a1) const {
		class Actor* (Level::*rv)(struct ActorUniqueID, bool)const;
		*((void**)&rv) = dlsym("?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z ");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void _saveSomeChunks() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?_saveSomeChunks@Level@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void saveDirtyChunks() {
		void (Level::*rv)();
		*((void**)&rv) = dlsym("?saveDirtyChunks@Level@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void explode(class BlockSource& a0, class Actor* a1, class Vec3 const& a2, float a3, bool a4, bool a5, float a6, bool a7) {
		void (Level::*rv)(class BlockSource&, class Actor*, class Vec3 const&, float, bool, bool, float, bool);
		*((void**)&rv) = dlsym("?explode@Level@@UEAAXAEAVBlockSource@@PEAVActor@@AEBVVec3@@M_N3M3@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	MCINLINE void updateWeather(float a0, int a1, float a2, int a3) {
		void (Level::*rv)(float, int, float, int);
		*((void**)&rv) = dlsym("?updateWeather@Level@@UEAAXMHMH@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE class Actor* getRuntimeEntity(class ActorRuntimeID a0, bool a1) const {
		class Actor* (Level::*rv)(class ActorRuntimeID, bool)const;
		*((void**)&rv) = dlsym("?getRuntimeEntity@Level@@UEBAPEAVActor@@VActorRuntimeID@@_N@Z");
		return (this->*rv)(a0, a1);
	}
#if 0
	MCINLINE  void  addPlayer(class std::unique_ptr<class Player,struct std::default_delete<class Player> > a0){
 void (Level::*rv)(class std::unique_ptr<class Player,struct std::default_delete<class Player> >); *((void**)&rv) = dlsym("?addPlayer@Level@@UEAAXV?$unique_ptr@VPlayer@@U?$default_delete@VPlayer@@@std@@@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class Actor *  addEntity(class BlockSource & a0,class std::unique_ptr<class Actor,struct std::default_delete<class Actor> > a1){
 class Actor * (Level::*rv)(class BlockSource &,class std::unique_ptr<class Actor,struct std::default_delete<class Actor> >); *((void**)&rv) = dlsym("?addEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE  class std::unique_ptr<class Actor,struct std::default_delete<class Actor> >  takeEntity(struct ActorUniqueID a0){
 class std::unique_ptr<class Actor,struct std::default_delete<class Actor> > (Level::*rv)(struct ActorUniqueID); *((void**)&rv) = dlsym("?takeEntity@Level@@UEAA?AV?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@UActorUniqueID@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class Actor *  addGlobalEntity(class BlockSource & a0,class std::unique_ptr<class Actor,struct std::default_delete<class Actor> > a1){
 class Actor * (Level::*rv)(class BlockSource &,class std::unique_ptr<class Actor,struct std::default_delete<class Actor> >); *((void**)&rv) = dlsym("?addGlobalEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE void  requestPlayerChangeDimension(class Player & a0,class std::unique_ptr<class ChangeDimensionRequest,struct std::default_delete<class ChangeDimensionRequest> > a1){
void (Level::*rv)(class Player &,class std::unique_ptr<class ChangeDimensionRequest,struct std::default_delete<class ChangeDimensionRequest> >); *((void**)&rv) = dlsym("?requestPlayerChangeDimension@Level@@QEAAXAEAVPlayer@@V?$unique_ptr@VChangeDimensionRequest@@U?$default_delete@VChangeDimensionRequest@@@std@@@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE  class Actor *  addAutonomousEntity(class BlockSource & a0,class std::unique_ptr<class Actor,struct std::default_delete<class Actor> > a1){
 class Actor * (Level::*rv)(class BlockSource &,class std::unique_ptr<class Actor,struct std::default_delete<class Actor> >); *((void**)&rv) = dlsym("?addAutonomousEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE  class std::unique_ptr<class Actor,struct std::default_delete<class Actor> >  borrowEntity(struct ActorUniqueID a0,class LevelChunk * a1){
 class std::unique_ptr<class Actor,struct std::default_delete<class Actor> > (Level::*rv)(struct ActorUniqueID,class LevelChunk *); *((void**)&rv) = dlsym("?borrowEntity@Level@@UEAA?AV?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@UActorUniqueID@@PEAVLevelChunk@@@Z"); return (this->*rv)(a0,a1);}
//   bad fun  

	MCINLINE  struct Tick const  getCurrentServerTick()const {
 struct Tick const (Level::*rv)()const ; *((void**)&rv) = dlsym("?getCurrentServerTick@Level@@UEBA?BUTick@@XZ"); return (this->*rv)();}
	// ??0Level@@QEAA@AEAVSoundPlayer@@V?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@AEAVIMinecraftEventing@@_NAEAVScheduler@@AEAVStructureManager@@AEAVResourcePackManager@@AEAVIEntityRegistryOwner@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@3@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@3@@Z
	// Level::Level(class SoundPlayer &,class std::unique_ptr<class LevelStorage,struct std::default_delete<class LevelStorage> >,class IMinecraftEventing &,bool,class Scheduler &,class StructureManager &,class ResourcePackManager &,class IEntityRegistryOwner &,class std::unique_ptr<class BlockComponentFactory,struct std::default_delete<class BlockComponentFactory> >,class std::unique_ptr<class BlockDefinitionGroup,struct std::default_delete<class BlockDefinitionGroup> >)
	MCINLINE class Player *  findPlayer(class std::function<bool > a0)const {
class Player * (Level::*rv)(class std::function<bool >)const ; *((void**)&rv) = dlsym("?findPlayer@Level@@QEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  forEachPlayer(class std::function<bool > a0){
void (Level::*rv)(class std::function<bool >); *((void**)&rv) = dlsym("?forEachPlayer@Level@@QEAAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  forEachPlayer(class std::function<bool > a0)const {
void (Level::*rv)(class std::function<bool >)const ; *((void**)&rv) = dlsym("?forEachPlayer@Level@@QEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE class Color  getPlayerColor(class Player const & a0)const {
class Color (Level::*rv)(class Player const &)const ; *((void**)&rv) = dlsym("?getPlayerColor@Level@@QEBA?AVColor@@AEBVPlayer@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  forEachDimension(class std::function<bool > a0){
void (Level::*rv)(class std::function<bool >); *((void**)&rv) = dlsym("?forEachDimension@Level@@QEAAXV?$function@$$A6A_NAEAVDimension@@@Z@std@@@Z"); return (this->*rv)(a0);}
#endif
};
#pragma once
#include "Core.h"
class ServerLevel : public Level {
public:
	ServerLevel(const ServerLevel&) = delete;
	ServerLevel& operator=(const ServerLevel&) = delete;
	ServerLevel() = delete;
	#ifdef MCAPI_LEVEL_EXTRA
	MCINLINE void incrementTagCache(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class TagRegistry& a1) {
		void (ServerLevel::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class TagRegistry&);
		*((void**)&rv) = dlsym("?incrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTagRegistry@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void loadFunctionManager() {
		void (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?loadFunctionManager@ServerLevel@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void dropEntryFromTagCache(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		void (ServerLevel::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
		*((void**)&rv) = dlsym("?dropEntryFromTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void tick() {
		void (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?tick@ServerLevel@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class ResourcePackManager* getClientResourcePackManager() const {
		class ResourcePackManager* (ServerLevel::*rv)() const;
		*((void**)&rv) = dlsym("?getClientResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ");
		return (this->*rv)();
	}
	MCINLINE void runCommand(class HashedString const& a0, class CommandOrigin& a1, enum CommandOriginSystem a2, enum CurrentCmdVersion a3) {
		void (ServerLevel::*rv)(class HashedString const&, class CommandOrigin&, enum CommandOriginSystem, enum CurrentCmdVersion);
		*((void**)&rv) = dlsym("?runCommand@ServerLevel@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool initialize(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class LevelSettings const& a1, class LevelData* a2, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const* a3) {
		bool (ServerLevel::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class LevelSettings const&, class LevelData*, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const*);
		*((void**)&rv) = dlsym("?initialize@ServerLevel@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@PEBV23@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE void saveAdditionalData() {
		void (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?saveAdditionalData@ServerLevel@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class ResourcePackManager* getServerResourcePackManager() const {
		class ResourcePackManager* (ServerLevel::*rv)() const;
		*((void**)&rv) = dlsym("?getServerResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ");
		return (this->*rv)();
	}
	MCINLINE void stopWeather() {
		void (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?stopWeather@ServerLevel@@IEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class TradeTables* getTradeTables() {
		class TradeTables* (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?getTradeTables@ServerLevel@@UEAAPEAVTradeTables@@XZ");
		return (this->*rv)();
	}
	MCINLINE void setDifficulty(enum Difficulty a0) {
		void (ServerLevel::*rv)(enum Difficulty);
		*((void**)&rv) = dlsym("?setDifficulty@ServerLevel@@UEAAXW4Difficulty@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class LevelEventCoordinator& getLevelEventCoordinator() {
		class LevelEventCoordinator& (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?getLevelEventCoordinator@ServerLevel@@UEAAAEAVLevelEventCoordinator@@XZ");
		return (this->*rv)();
	}

	MCINLINE void setCommandsEnabled(bool a0) {
		void (ServerLevel::*rv)(bool);
		*((void**)&rv) = dlsym("?setCommandsEnabled@ServerLevel@@UEAAX_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void _registerScoreboardCallbacks(class ServerScoreboard& a0) {
		void (ServerLevel::*rv)(class ServerScoreboard&);
		*((void**)&rv) = dlsym("?_registerScoreboardCallbacks@ServerLevel@@IEAAXAEAVServerScoreboard@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void decrementTagCache(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class TagRegistry& a1) {
		void (ServerLevel::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class TagRegistry&);
		*((void**)&rv) = dlsym("?decrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTagRegistry@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void setWorldTemplateOptionsUnlocked() {
		void (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?setWorldTemplateOptionsUnlocked@ServerLevel@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void updateSleepingPlayerList() {
		void (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?updateSleepingPlayerList@ServerLevel@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void addEntryToTagCache(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		void (ServerLevel::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
		*((void**)&rv) = dlsym("?addEntryToTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0);
	}
#endif
	MCINLINE void clearTagCache() {
		void (ServerLevel::*rv)();
		*((void**)&rv) = dlsym("?clearTagCache@ServerLevel@@UEAAXXZ");
		return (this->*rv)();
	}
#if 0
//   bad fun  

	// ??0ServerLevel@@QEAA@AEAVSoundPlayer@@V?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@AEAVIMinecraftEventing@@AEAVResourcePackManager@@3AEAVStructureManager@@AEAVMinecraftCommands@@AEAVScheduler@@AEAVIEntityRegistryOwner@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@3@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@3@@Z
	// ServerLevel::ServerLevel(class SoundPlayer &,class std::unique_ptr<class LevelStorage,struct std::default_delete<class LevelStorage> >,class IMinecraftEventing &,class ResourcePackManager &,class ResourcePackManager &,class StructureManager &,class MinecraftCommands &,class Scheduler &,class IEntityRegistryOwner &,class std::unique_ptr<class BlockComponentFactory,struct std::default_delete<class BlockComponentFactory> >,class std::unique_ptr<class BlockDefinitionGroup,struct std::default_delete<class BlockDefinitionGroup> >)
#endif
};
#pragma once
#include "Core.h"
class ChunkSource {
public:
	ChunkSource(const ChunkSource&) = delete;
	ChunkSource& operator=(const ChunkSource&) = delete;
	ChunkSource() = delete;
	#ifdef MCAPI_LEVEL_EXTRA

	MCINLINE void checkAndReplaceChunk(class ChunkViewSource& a0, class LevelChunk& a1) {
		void (ChunkSource::*rv)(class ChunkViewSource&, class LevelChunk&);
		*((void**)&rv) = dlsym("?checkAndReplaceChunk@ChunkSource@@UEAAXAEAVChunkViewSource@@AEAVLevelChunk@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void checkAndLaunchChunkGenerationTasks(bool a0) {
		void (ChunkSource::*rv)(bool);
		*((void**)&rv) = dlsym("?checkAndLaunchChunkGenerationTasks@ChunkSource@@QEAAX_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void _spawnChunkGenerationTasks(int a0, bool a1) {
		void (ChunkSource::*rv)(int, bool);
		*((void**)&rv) = dlsym("?_spawnChunkGenerationTasks@ChunkSource@@IEAAXH_N@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void _freeChunkGenerationGridMap(class ChunkPos const& a0) {
		void (ChunkSource::*rv)(class ChunkPos const&);
		*((void**)&rv) = dlsym("?_freeChunkGenerationGridMap@ChunkSource@@IEAAXAEBVChunkPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void hintDiscardBatchBegin() {
		void (ChunkSource::*rv)();
		*((void**)&rv) = dlsym("?hintDiscardBatchBegin@ChunkSource@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void _launchGenerationTask(class std::shared_ptr<class LevelChunk>& a0, bool a1) {
		void (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk>&, bool);
		*((void**)&rv) = dlsym("?_launchGenerationTask@ChunkSource@@IEAAXAEAV?$shared_ptr@VLevelChunk@@@std@@_N@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void _checkForUnblockingChunks(class LevelChunk& a0) {
		void (ChunkSource::*rv)(class LevelChunk&);
		*((void**)&rv) = dlsym("?_checkForUnblockingChunks@ChunkSource@@IEAAXAEAVLevelChunk@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isWithinWorldLimit(class ChunkPos const& a0) const {
		bool (ChunkSource::*rv)(class ChunkPos const&) const;
		*((void**)&rv) = dlsym("?isWithinWorldLimit@ChunkSource@@UEBA_NAEBVChunkPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool saveLiveChunk(class LevelChunk& a0) {
		bool (ChunkSource::*rv)(class LevelChunk&);
		*((void**)&rv) = dlsym("?saveLiveChunk@ChunkSource@@UEAA_NAEAVLevelChunk@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void postProcessMobsAt(class BlockSource* a0, int a1, int a2, class Random& a3) {
		void (ChunkSource::*rv)(class BlockSource*, int, int, class Random&);
		*((void**)&rv) = dlsym("?postProcessMobsAt@ChunkSource@@UEAAXPEAVBlockSource@@HHAEAVRandom@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool isShutdownDone() {
		bool (ChunkSource::*rv)();
		*((void**)&rv) = dlsym("?isShutdownDone@ChunkSource@@UEAA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void loadChunk(class LevelChunk& a0, bool a1) {
		void (ChunkSource::*rv)(class LevelChunk&, bool);
		*((void**)&rv) = dlsym("?loadChunk@ChunkSource@@UEAAXAEAVLevelChunk@@_N@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void hintDiscardBatchEnd() {
		void (ChunkSource::*rv)();
		*((void**)&rv) = dlsym("?hintDiscardBatchEnd@ChunkSource@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const& getStorage() const {
		class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const& (ChunkSource::*rv)() const;
		*((void**)&rv) = dlsym("?getStorage@ChunkSource@@UEBAAEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ");
		return (this->*rv)();
	} MCINLINE bool postProcess(class ChunkViewSource& a0) {
		bool (ChunkSource::*rv)(class ChunkViewSource&);
		*((void**)&rv) = dlsym("?postProcess@ChunkSource@@UEAA_NAEAVChunkViewSource@@@Z");
		return (this->*rv)(a0);
	}
	

	MCINLINE class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const* getChunkMap() {
		class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const* (ChunkSource::*rv)();
		*((void**)&rv) = dlsym("?getChunkMap@ChunkSource@@UEAAPEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ");
		return (this->*rv)();
	} MCINLINE bool _loadChunkTask(class LevelChunk& a0) {
		bool (ChunkSource::*rv)(class LevelChunk&);
		*((void**)&rv) = dlsym("?_loadChunkTask@ChunkSource@@IEAA_NAEAVLevelChunk@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool _checkAndDispatchTaskForLevelChunk(class ChunkPos const& a0, bool a1) {
		bool (ChunkSource::*rv)(class ChunkPos const&, bool);
		*((void**)&rv) = dlsym("?_checkAndDispatchTaskForLevelChunk@ChunkSource@@IEAA_NAEBVChunkPos@@_N@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void shutdown() {
		void (ChunkSource::*rv)();
		*((void**)&rv) = dlsym("?shutdown@ChunkSource@@UEAAXXZ");
		return (this->*rv)();
	}
#endif
MCINLINE void flushPendingWrites() {
		void (ChunkSource::*rv)();
		*((void**)&rv) = dlsym("?flushPendingWrites@ChunkSource@@UEAAXXZ");
		return (this->*rv)();
	}
		MCINLINE void compact() {
		void (ChunkSource::*rv)();
		*((void**)&rv) = dlsym("?compact@ChunkSource@@UEAAXXZ");
		return (this->*rv)();
	}
#if 0
	MCINLINE void  _launchLightingTask(class std::shared_ptr<class LevelChunk> & a0,class std::shared_ptr<class ChunkViewSource> a1,bool a2){
void (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk> &,class std::shared_ptr<class ChunkViewSource>,bool); *((void**)&rv) = dlsym("?_launchLightingTask@ChunkSource@@IEAAXAEAV?$shared_ptr@VLevelChunk@@@std@@V?$shared_ptr@VChunkViewSource@@@3@_N@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE  class std::shared_ptr<class LevelChunk>  createNewChunk(class ChunkPos const & a0,enum ChunkSource::LoadMode a1){
 class std::shared_ptr<class LevelChunk> (ChunkSource::*rv)(class ChunkPos const &,enum ChunkSource::LoadMode); *((void**)&rv) = dlsym("?createNewChunk@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@1@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE  class std::shared_ptr<class LevelChunk>  getRandomChunk(class Random & a0){
 class std::shared_ptr<class LevelChunk> (ChunkSource::*rv)(class Random &); *((void**)&rv) = dlsym("?getRandomChunk@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVRandom@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  _checkLevelChunkForNextStage(class std::shared_ptr<class LevelChunk> a0,class std::shared_ptr<class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk> > > a1,enum ChunkState a2){
void (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk>,class std::shared_ptr<class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk> > >,enum ChunkState); *((void**)&rv) = dlsym("?_checkLevelChunkForNextStage@ChunkSource@@IEAAXV?$shared_ptr@VLevelChunk@@@std@@V?$shared_ptr@V?$LevelChunkGridAreaElement@V?$weak_ptr@VLevelChunk@@@std@@@@@3@W4ChunkState@@@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE class std::shared_ptr<class LevelChunk>  getGeneratedChunk(class ChunkPos const & a0){
class std::shared_ptr<class LevelChunk> (ChunkSource::*rv)(class ChunkPos const &); *((void**)&rv) = dlsym("?getGeneratedChunk@ChunkSource@@QEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  _launchPostProcessingTask(class std::shared_ptr<class LevelChunk> & a0,class std::shared_ptr<class ChunkViewSource> a1,bool a2){
void (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk> &,class std::shared_ptr<class ChunkViewSource>,bool); *((void**)&rv) = dlsym("?_launchPostProcessingTask@ChunkSource@@IEAAXAEAV?$shared_ptr@VLevelChunk@@@std@@V?$shared_ptr@VChunkViewSource@@@3@_N@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE void  _checkSpecificLevelChunkForUnblocking(class std::shared_ptr<class LevelChunk> a0,class std::shared_ptr<class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk> > > a1){
void (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk>,class std::shared_ptr<class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk> > >); *((void**)&rv) = dlsym("?_checkSpecificLevelChunkForUnblocking@ChunkSource@@IEAAXV?$shared_ptr@VLevelChunk@@@std@@V?$shared_ptr@V?$LevelChunkGridAreaElement@V?$weak_ptr@VLevelChunk@@@std@@@@@3@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE void  _dispatchTaskForLevelChunk(class std::shared_ptr<class LevelChunk> & a0,class std::shared_ptr<class ChunkViewSource> a1,bool a2){
void (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk> &,class std::shared_ptr<class ChunkViewSource>,bool); *((void**)&rv) = dlsym("?_dispatchTaskForLevelChunk@ChunkSource@@IEAAXAEAV?$shared_ptr@VLevelChunk@@@std@@V?$shared_ptr@VChunkViewSource@@@3@_N@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE bool  _chunkAtStage(class std::weak_ptr<class LevelChunk> a0,enum ChunkState a1){
bool (ChunkSource::*rv)(class std::weak_ptr<class LevelChunk>,enum ChunkState); *((void**)&rv) = dlsym("?_chunkAtStage@ChunkSource@@IEAA_NV?$weak_ptr@VLevelChunk@@@std@@W4ChunkState@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE  class std::shared_ptr<class LevelChunk>  getExistingChunk(class ChunkPos const & a0){
 class std::shared_ptr<class LevelChunk> (ChunkSource::*rv)(class ChunkPos const &); *((void**)&rv) = dlsym("?getExistingChunk@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class std::shared_ptr<class LevelChunk>  getOrLoadChunk(class ChunkPos const & a0,enum ChunkSource::LoadMode a1){
 class std::shared_ptr<class LevelChunk> (ChunkSource::*rv)(class ChunkPos const &,enum ChunkSource::LoadMode); *((void**)&rv) = dlsym("?getOrLoadChunk@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@1@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE void  _checkLevelChunkForPostProcessing(class std::shared_ptr<class LevelChunk> a0,class std::shared_ptr<class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk> > > a1){
void (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk>,class std::shared_ptr<class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk> > >); *((void**)&rv) = dlsym("?_checkLevelChunkForPostProcessing@ChunkSource@@IEAAXV?$shared_ptr@VLevelChunk@@@std@@V?$shared_ptr@V?$LevelChunkGridAreaElement@V?$weak_ptr@VLevelChunk@@@std@@@@@3@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE bool  _lightingTask(class std::shared_ptr<class LevelChunk> a0,class std::shared_ptr<class ChunkViewSource> a1){
bool (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk>,class std::shared_ptr<class ChunkViewSource>); *((void**)&rv) = dlsym("?_lightingTask@ChunkSource@@IEAA_NV?$shared_ptr@VLevelChunk@@@std@@V?$shared_ptr@VChunkViewSource@@@3@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE class std::shared_ptr<class LevelChunk>  getAvailableChunk(class ChunkPos const & a0){
class std::shared_ptr<class LevelChunk> (ChunkSource::*rv)(class ChunkPos const &); *((void**)&rv) = dlsym("?getAvailableChunk@ChunkSource@@QEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z"); return (this->*rv)(a0);}
	MCINLINE bool  _postProcessingTask(class LevelChunk & a0,class std::shared_ptr<class ChunkViewSource> a1){
bool (ChunkSource::*rv)(class LevelChunk &,class std::shared_ptr<class ChunkViewSource>); *((void**)&rv) = dlsym("?_postProcessingTask@ChunkSource@@IEAA_NAEAVLevelChunk@@V?$shared_ptr@VChunkViewSource@@@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE void  _launchReplacementDataTask(class std::shared_ptr<class LevelChunk> & a0,class std::shared_ptr<class ChunkViewSource> a1,bool a2){
void (ChunkSource::*rv)(class std::shared_ptr<class LevelChunk> &,class std::shared_ptr<class ChunkViewSource>,bool); *((void**)&rv) = dlsym("?_launchReplacementDataTask@ChunkSource@@IEAAXAEAV?$shared_ptr@VLevelChunk@@@std@@V?$shared_ptr@VChunkViewSource@@@3@_N@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE bool  _checkForReplacementDataTask(class LevelChunk & a0,class std::shared_ptr<class ChunkViewSource> a1){
bool (ChunkSource::*rv)(class LevelChunk &,class std::shared_ptr<class ChunkViewSource>); *((void**)&rv) = dlsym("?_checkForReplacementDataTask@ChunkSource@@IEAA_NAEAVLevelChunk@@V?$shared_ptr@VChunkViewSource@@@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE  void  acquireDiscarded(class std::unique_ptr<class LevelChunk,struct LevelChunkFinalDeleter> a0){
 void (ChunkSource::*rv)(class std::unique_ptr<class LevelChunk,struct LevelChunkFinalDeleter>); *((void**)&rv) = dlsym("?acquireDiscarded@ChunkSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z"); return (this->*rv)(a0);}
//   bad fun  

	// ??0ChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z
	// ChunkSource::ChunkSource(class std::unique_ptr<class ChunkSource,struct std::default_delete<class ChunkSource> >)
	MCINLINE class GridArea<class std::shared_ptr<class LevelChunk> >  createEmptyView(enum ChunkSource::LoadMode a0,bool a1,class std::function<void > a2){
class GridArea<class std::shared_ptr<class LevelChunk> > (ChunkSource::*rv)(enum ChunkSource::LoadMode,bool,class std::function<void >); *((void**)&rv) = dlsym("?createEmptyView@ChunkSource@@QEAA?AV?$GridArea@V?$shared_ptr@VLevelChunk@@@std@@@@W4LoadMode@1@_NV?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@@Z"); return (this->*rv)(a0,a1,a2);}
#endif
};

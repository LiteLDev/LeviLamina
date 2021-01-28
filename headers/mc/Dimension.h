#pragma once
#include "Core.h"
class Dimension {
public:
	Dimension(const Dimension&) = delete;
	Dimension& operator=(const Dimension&) = delete;
	Dimension() = delete;
	#ifdef MCAPI_DIM_EXTRA
	MCINLINE float getClearColorScale() {
		float (Dimension::*rv)();
		*((void**)&rv) = dlsym("?getClearColorScale@Dimension@@UEAAMXZ");
		return (this->*rv)();
	}
	MCINLINE void init() {
		void (Dimension::*rv)();
		*((void**)&rv) = dlsym("?init@Dimension@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void sendBroadcast(class Packet const& a0, class Player* a1) {
		void (Dimension::*rv)(class Packet const&, class Player*);
		*((void**)&rv) = dlsym("?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void onBlockChanged(class BlockSource& a0, class BlockPos const& a1, unsigned int a2, class Block const& a3, class Block const& a4, int a5, struct ActorBlockSyncMessage const* a6) {
		void (Dimension::*rv)(class BlockSource&, class BlockPos const&, unsigned int, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*);
		*((void**)&rv) = dlsym("?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
	}
	MCINLINE bool isNaturalDimension() const {
		bool (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?isNaturalDimension@Dimension@@UEBA_NXZ");
		return (this->*rv)();
	}
	
	MCINLINE void updateLightRamp() {
		void (Dimension::*rv)();
		*((void**)&rv) = dlsym("?updateLightRamp@Dimension@@UEAAXXZ");
		return (this->*rv)();
	}
	
	MCINLINE float getMaxFogStart() const {
		float (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?getMaxFogStart@Dimension@@UEBAMXZ");
		return (this->*rv)();
	}
	MCINLINE void serialize(class CompoundTag& a0) const {
		void (Dimension::*rv)(class CompoundTag&) const;
		*((void**)&rv) = dlsym("?serialize@Dimension@@UEBAXAEAVCompoundTag@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void tryGarbageCollectStructures() {
		void (Dimension::*rv)();
		*((void**)&rv) = dlsym("?tryGarbageCollectStructures@Dimension@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void upgradeOldLimboEntity(class CompoundTag& a0, enum LimboEntitiesVersion a1) {
		void (Dimension::*rv)(class CompoundTag&, enum LimboEntitiesVersion);
		*((void**)&rv) = dlsym("?upgradeOldLimboEntity@Dimension@@AEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE float distanceToNearestPlayerSqr2D(class Vec3 a0) {
		float (Dimension::*rv)(class Vec3);
		*((void**)&rv) = dlsym("?distanceToNearestPlayerSqr2D@Dimension@@QEAAMVVec3@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void _tickEntityChunkMoves() {
		void (Dimension::*rv)();
		*((void**)&rv) = dlsym("?_tickEntityChunkMoves@Dimension@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE float getCloudHeight() const {
		float (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?getCloudHeight@Dimension@@UEBAMXZ");
		return (this->*rv)();
	}
	MCINLINE class Player* fetchNearestAttackablePlayer(class BlockPos a0, float a1, class Actor* a2) {
		class Player* (Dimension::*rv)(class BlockPos, float, class Actor*);
		*((void**)&rv) = dlsym("?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@VBlockPos@@MPEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	
	MCINLINE bool hasGround() const {
		bool (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?hasGround@Dimension@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void sendPacketForEntity(class Actor const& a0, class Packet const& a1, class Player const* a2) {
		void (Dimension::*rv)(class Actor const&, class Packet const&, class Player const*);
		*((void**)&rv) = dlsym("?sendPacketForEntity@Dimension@@QEAAXAEBVActor@@AEBVPacket@@PEBVPlayer@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class Player* fetchNearestPlayer(class Actor& a0, float a1) {
		class Player* (Dimension::*rv)(class Actor&, float);
		*((void**)&rv) = dlsym("?fetchNearestPlayer@Dimension@@QEAAPEAVPlayer@@AEAVActor@@M@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE float getMoonBrightness() const {
		float (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?getMoonBrightness@Dimension@@QEBAMXZ");
		return (this->*rv)();
	}
	MCINLINE bool isValidSpawn(int a0, int a1) const {
		bool (Dimension::*rv)(int, int) const;
		*((void**)&rv) = dlsym("?isValidSpawn@Dimension@@UEBA_NHH@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void tick() {
		void (Dimension::*rv)();
		*((void**)&rv) = dlsym("?tick@Dimension@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE float getSunIntensity(float a0, class Vec3 const& a1, float a2) const {
		float (Dimension::*rv)(float, class Vec3 const&, float) const;
		*((void**)&rv) = dlsym("?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void onNewChunk(class BlockSource& a0, class LevelChunk& a1) {
		void (Dimension::*rv)(class BlockSource&, class LevelChunk&);
		*((void**)&rv) = dlsym("?onNewChunk@Dimension@@UEAAXAEAVBlockSource@@AEAVLevelChunk@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool mayRespawn() const {
		bool (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?mayRespawn@Dimension@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void onBlockEvent(class BlockSource& a0, int a1, int a2, int a3, int a4, int a5) {
		void (Dimension::*rv)(class BlockSource&, int, int, int, int, int);
		*((void**)&rv) = dlsym("?onBlockEvent@Dimension@@UEAAXAEAVBlockSource@@HHHHH@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5);
	}
	MCINLINE float getMaxFogEnd() const {
		float (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?getMaxFogEnd@Dimension@@UEBAMXZ");
		return (this->*rv)();
	}
	MCINLINE float getTimeOfDay(int a0, float a1) const {
		float (Dimension::*rv)(int, float) const;
		*((void**)&rv) = dlsym("?getTimeOfDay@Dimension@@MEBAMHM@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void tickRedstone() {
		void (Dimension::*rv)();
		*((void**)&rv) = dlsym("?tickRedstone@Dimension@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE bool showSky() const {
		bool (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?showSky@Dimension@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE int getDefaultBiome() const {
		int (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?getDefaultBiome@Dimension@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE bool isFoggyAt(int a0, int a1) const {
		bool (Dimension::*rv)(int, int) const;
		*((void**)&rv) = dlsym("?isFoggyAt@Dimension@@UEBA_NHH@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool hasBedrockFog() {
		bool (Dimension::*rv)();
		*((void**)&rv) = dlsym("?hasBedrockFog@Dimension@@UEAA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void sendPacketForPosition(class BlockPos const& a0, class Packet const& a1, class Player const* a2) {
		void (Dimension::*rv)(class BlockPos const&, class Packet const&, class Player const*);
		*((void**)&rv) = dlsym("?sendPacketForPosition@Dimension@@QEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void onChunkLoaded(class LevelChunk& a0) {
		void (Dimension::*rv)(class LevelChunk&);
		*((void**)&rv) = dlsym("?onChunkLoaded@Dimension@@UEAAXAEAVLevelChunk@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Player* fetchNearestAttackablePlayer(class Actor& a0, float a1) {
		class Player* (Dimension::*rv)(class Actor&, float);
		*((void**)&rv) = dlsym("?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@AEAVActor@@M@Z");
		return (this->*rv)(a0, a1);
	}
	
	MCINLINE int getMoonPhase() const {
		int (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?getMoonPhase@Dimension@@QEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE void startLeaveGame() {
		void (Dimension::*rv)();
		*((void**)&rv) = dlsym("?startLeaveGame@Dimension@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE class Player* fetchNearestPlayer(float a0, float a1, float a2, float a3, bool a4) {
		class Player* (Dimension::*rv)(float, float, float, float, bool);
		*((void**)&rv) = dlsym("?fetchNearestPlayer@Dimension@@QEAAPEAVPlayer@@MMMM_N@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE int getSpawnYPosition() const {
		int (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?getSpawnYPosition@Dimension@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE void deserialize(class CompoundTag const& a0) {
		void (Dimension::*rv)(class CompoundTag const&);
		*((void**)&rv) = dlsym("?deserialize@Dimension@@UEAAXAEBVCompoundTag@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void onLevelDestruction(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		void (Dimension::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
		*((void**)&rv) = dlsym("?onLevelDestruction@Dimension@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0);
	}
#endif
MCINLINE float getTimeOfDay(float a0) const {
		float (Dimension::*rv)(float) const;
		*((void**)&rv) = dlsym("?getTimeOfDay@Dimension@@QEBAMM@Z");
		return (this->*rv)(a0);
	}
MCINLINE bool isDay() const {
		bool (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?isDay@Dimension@@UEBA_NXZ");
		return (this->*rv)();
	}
MCINLINE class BlockPos getSpawnPos() const {
		class BlockPos (Dimension::*rv)() const;
		*((void**)&rv) = dlsym("?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ");
		return (this->*rv)();
	}
MCINLINE class Actor* fetchEntity(struct ActorUniqueID a0, bool a1) {
		class Actor* (Dimension::*rv)(struct ActorUniqueID, bool);
		*((void**)&rv) = dlsym("?fetchEntity@Dimension@@QEAAPEAVActor@@UActorUniqueID@@_N@Z");
		return (this->*rv)(a0, a1);
	}

#if 0
	MCINLINE void  transferEntity(class Vec3 const & a0,class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > a1){
void (Dimension::*rv)(class Vec3 const &,class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >); *((void**)&rv) = dlsym("?transferEntity@Dimension@@QEAAXAEBVVec3@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE void  transferEntityToUnloadedChunk(class Vec3 const & a0,class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > a1){
void (Dimension::*rv)(class Vec3 const &,class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >); *((void**)&rv) = dlsym("?transferEntityToUnloadedChunk@Dimension@@QEAAXAEBVVec3@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE void  _completeEntityTransfer(class BlockSource & a0,class std::unique_ptr<class Actor,struct std::default_delete<class Actor> > a1){
void (Dimension::*rv)(class BlockSource &,class std::unique_ptr<class Actor,struct std::default_delete<class Actor> >); *((void**)&rv) = dlsym("?_completeEntityTransfer@Dimension@@IEAAXAEAVBlockSource@@V?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@@Z"); return (this->*rv)(a0,a1);}
//   bad fun  

	// ??0Dimension@@QEAA@AEAVLevel@@V?$AutomaticID@VDimension@@H@@FAEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
	// Dimension::Dimension(class Level &,class AutomaticID<class Dimension,int>,short,class Scheduler &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
	MCINLINE void  forEachPlayer(class std::function<bool > a0){
void (Dimension::*rv)(class std::function<bool >); *((void**)&rv) = dlsym("?forEachPlayer@Dimension@@QEAAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  forEachPlayer(class std::function<bool > a0)const {
void (Dimension::*rv)(class std::function<bool >)const ; *((void**)&rv) = dlsym("?forEachPlayer@Dimension@@QEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class Color  getFogColor(float a0)const {
 class Color (Dimension::*rv)(float)const ; *((void**)&rv) = dlsym("?getFogColor@Dimension@@UEBA?AVColor@@M@Z"); return (this->*rv)(a0);}
	MCINLINE class Player *  findPlayer(class std::function<bool > a0)const {
class Player * (Dimension::*rv)(class std::function<bool >)const ; *((void**)&rv) = dlsym("?findPlayer@Dimension@@QEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z"); return (this->*rv)(a0);}
#endif
};

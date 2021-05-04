#pragma once
#include "Core.h"
class BlockLegacy {
public:
	BlockLegacy(const BlockLegacy&) = delete;
	BlockLegacy& operator=(const BlockLegacy&) = delete;
	BlockLegacy() = delete;
	#ifdef MCAPI_BLOCK_EXTRA
	MCINLINE bool mayPlace(class BlockSource& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?mayPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE int getDirectSignal(class BlockSource& a0, class BlockPos const& a1, int a2) const {
		int (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, int) const;
		*((void**)&rv) = dlsym("?getDirectSignal@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE int getExtraRenderLayers() const {
		int (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?getExtraRenderLayers@BlockLegacy@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE int getColorAtPos(class BlockSource& a0, class BlockPos const& a1) const {
		int (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?getColorAtPos@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class ItemActor* popResource(class BlockSource& a0, class BlockPos const& a1, class ItemInstance const& a2) const {
		class ItemActor* (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class ItemInstance const&)const;
		*((void**)&rv) = dlsym("?popResource@BlockLegacy@@QEBAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemInstance@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool mayPick() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?mayPick@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void createBlockPermutations(unsigned int a0) {
		void (BlockLegacy::*rv)(unsigned int);
		*((void**)&rv) = dlsym("?createBlockPermutations@BlockLegacy@@QEAAXI@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool canBeBuiltOver(class BlockSource& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?canBeBuiltOver@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void setVisualShape(class AABB const& a0) {
		void (BlockLegacy::*rv)(class AABB const&);
		*((void**)&rv) = dlsym("?setVisualShape@BlockLegacy@@UEAAXAEBVAABB@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void playerDestroy(class Player& a0, class BlockPos const& a1, class Block const& a2) const {
		void (BlockLegacy::*rv)(class Player&, class BlockPos const&, class Block const&) const;
		*((void**)&rv) = dlsym("?playerDestroy@BlockLegacy@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE enum BlockRenderLayer getRenderLayer() const {
		enum BlockRenderLayer (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?getRenderLayer@BlockLegacy@@UEBA?AW4BlockRenderLayer@@XZ");
		return (this->*rv)();
	}
	MCINLINE bool canConnect(class Block const& a0, unsigned char a1, class Block const& a2) const {
		bool (BlockLegacy::*rv)(class Block const&, unsigned char, class Block const&) const;
		*((void**)&rv) = dlsym("?canConnect@BlockLegacy@@UEBA_NAEBVBlock@@E0@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool isSlabBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isSlabBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class BlockLegacy& setMinRequiredBaseGameVersion(class BaseGameVersion const& a0) {
		class BlockLegacy& (BlockLegacy::*rv)(class BaseGameVersion const&);
		*((void**)&rv) = dlsym("?setMinRequiredBaseGameVersion@BlockLegacy@@QEAAAEAV1@AEBVBaseGameVersion@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class BlockLegacy& addState(class ItemState const& a0, unsigned __int64 a1) {
		class BlockLegacy& (BlockLegacy::*rv)(class ItemState const&, unsigned __int64);
		*((void**)&rv) = dlsym("?addState@BlockLegacy@@UEAAAEAV1@AEBVItemState@@_K@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE float getShadeBrightness() const {
		float (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?getShadeBrightness@BlockLegacy@@UEBAMXZ");
		return (this->*rv)();
	}
	MCINLINE bool mayConsumeFertilizer(class BlockSource& a0) const {
		bool (BlockLegacy::*rv)(class BlockSource&) const;
		*((void**)&rv) = dlsym("?mayConsumeFertilizer@BlockLegacy@@UEBA_NAEAVBlockSource@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool shouldConnectToRedstone(class BlockSource& a0, class BlockPos const& a1, int a2) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, int) const;
		*((void**)&rv) = dlsym("?shouldConnectToRedstone@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class BlockLegacy& setDestroyTime(float a0) {
		class BlockLegacy& (BlockLegacy::*rv)(float);
		*((void**)&rv) = dlsym("?setDestroyTime@BlockLegacy@@UEAAAEAV1@M@Z");
		return (this->*rv)(a0);
	}

	MCINLINE void getDebugText(class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>& a0, class BlockPos const& a1) const {
		void (BlockLegacy::*rv)(class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?getDebugText@BlockLegacy@@QEBAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE int getColor(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const {
		int (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
		*((void**)&rv) = dlsym("?getColor@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void onExploded(class BlockSource& a0, class BlockPos const& a1, class Actor* a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Actor*) const;
		*((void**)&rv) = dlsym("?onExploded@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE int getColor(class Block const& a0) const {
		int (BlockLegacy::*rv)(class Block const&) const;
		*((void**)&rv) = dlsym("?getColor@BlockLegacy@@UEBAHAEBVBlock@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Block const& sanitizeFillBlock(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const {
		class Block const& (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&)const;
		*((void**)&rv) = dlsym("?sanitizeFillBlock@BlockLegacy@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class AABB const& getUIShape(class Block const& a0, class AABB& a1) const {
		class AABB const& (BlockLegacy::*rv)(class Block const&, class AABB&)const;
		*((void**)&rv) = dlsym("?getUIShape@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void updateEntityAfterFallOn(class Actor& a0) const {
		void (BlockLegacy::*rv)(class Actor&) const;
		*((void**)&rv) = dlsym("?updateEntityAfterFallOn@BlockLegacy@@UEBAXAEAVActor@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Block const* getNextBlockPermutation(class Block const& a0) const {
		class Block const* (BlockLegacy::*rv)(class Block const&)const;
		*((void**)&rv) = dlsym("?getNextBlockPermutation@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void getConnectedDirections(class Block const& a0, class BlockPos const& a1, class BlockSource& a2, bool& a3, bool& a4, bool& a5, bool& a6) const {
		void (BlockLegacy::*rv)(class Block const&, class BlockPos const&, class BlockSource&, bool&, bool&, bool&, bool&) const;
		*((void**)&rv) = dlsym("?getConnectedDirections@BlockLegacy@@UEBAXAEBVBlock@@AEBVBlockPos@@AEAVBlockSource@@AEA_N333@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
	}
	MCINLINE bool shouldStopFalling(class Actor& a0) const {
		bool (BlockLegacy::*rv)(class Actor&) const;
		*((void**)&rv) = dlsym("?shouldStopFalling@BlockLegacy@@UEBA_NAEAVActor@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void tick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
		*((void**)&rv) = dlsym("?tick@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class BlockLegacy& addState(class ItemState const& a0) {
		class BlockLegacy& (BlockLegacy::*rv)(class ItemState const&);
		*((void**)&rv) = dlsym("?addState@BlockLegacy@@UEAAAEAV1@AEBVItemState@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isCraftingBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isCraftingBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class Vec3 randomlyModifyPosition(class BlockPos const& a0, int& a1) const {
		class Vec3 (BlockLegacy::*rv)(class BlockPos const&, int&) const;
		*((void**)&rv) = dlsym("?randomlyModifyPosition@BlockLegacy@@UEBA?AVVec3@@AEBVBlockPos@@AEAH@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void entityInside(class BlockSource& a0, class BlockPos const& a1, class Actor& a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Actor&) const;
		*((void**)&rv) = dlsym("?entityInside@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void onFallOn(class BlockSource& a0, class BlockPos const& a1, class Actor* a2, float a3) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Actor*, float) const;
		*((void**)&rv) = dlsym("?onFallOn@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE class AABB const& getAABB(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, class AABB& a3, bool a4) const {
		class AABB const& (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&, class AABB&, bool)const;
		*((void**)&rv) = dlsym("?getAABB@BlockLegacy@@UEBAAEBVAABB@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE void onPlace(class BlockSource& a0, class BlockPos const& a1) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?onPlace@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool onFertilized(class BlockSource& a0, class BlockPos const& a1, class Actor* a2, enum FertilizerType a3) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
		*((void**)&rv) = dlsym("?onFertilized@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool isValidAuxValue(int a0) const {
		bool (BlockLegacy::*rv)(int) const;
		*((void**)&rv) = dlsym("?isValidAuxValue@BlockLegacy@@UEBA_NH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool mayPick(class BlockSource& a0, class Block const& a1, bool a2) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class Block const&, bool) const;
		*((void**)&rv) = dlsym("?mayPick@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlock@@_N@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE int getComparatorSignal(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, unsigned char a3) const {
		int (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
		*((void**)&rv) = dlsym("?getComparatorSignal@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool ignoreEntitiesOnPistonMove(class Block const& a0) const {
		bool (BlockLegacy::*rv)(class Block const&) const;
		*((void**)&rv) = dlsym("?ignoreEntitiesOnPistonMove@BlockLegacy@@UEBA_NAEBVBlock@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void onRemove(class BlockSource& a0, class BlockPos const& a1) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?onRemove@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE int getColorForParticle(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const {
		int (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
		*((void**)&rv) = dlsym("?getColorForParticle@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool canContainLiquid() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?canContainLiquid@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isSignalSource() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isSignalSource@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isButtonBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isButtonBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE float getFlexibility(class BlockSource& a0, class BlockPos const& a1) const {
		float (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?getFlexibility@BlockLegacy@@UEBAMAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool getCollisionShape(class AABB& a0, class Block const& a1, class BlockSource& a2, class BlockPos const& a3, class Actor* a4) const {
		bool (BlockLegacy::*rv)(class AABB&, class Block const&, class BlockSource&, class BlockPos const&, class Actor*) const;
		*((void**)&rv) = dlsym("?getCollisionShape@BlockLegacy@@UEBA_NAEAVAABB@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE bool isFenceGateBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isFenceGateBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class BlockLegacy& setCategory(enum CreativeItemCategory a0) {
		class BlockLegacy& (BlockLegacy::*rv)(enum CreativeItemCategory);
		*((void**)&rv) = dlsym("?setCategory@BlockLegacy@@QEAAAEAV1@W4CreativeItemCategory@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void movedByPiston(class BlockSource& a0, class BlockPos const& a1) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?movedByPiston@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class MobSpawnerData const* getMobToSpawn(class SpawnConditions const& a0, class BlockSource& a1) const {
		class MobSpawnerData const* (BlockLegacy::*rv)(class SpawnConditions const&, class BlockSource&)const;
		*((void**)&rv) = dlsym("?getMobToSpawn@BlockLegacy@@UEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class BlockLegacy& init() {
		class BlockLegacy& (BlockLegacy::*rv)();
		*((void**)&rv) = dlsym("?init@BlockLegacy@@UEAAAEAV1@XZ");
		return (this->*rv)();
	}
	MCINLINE bool isStemBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isStemBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool canSpawnOn() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?canSpawnOn@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void onRedstoneUpdate(class BlockSource& a0, class BlockPos const& a1, int a2, bool a3) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, int, bool) const;
		*((void**)&rv) = dlsym("?onRedstoneUpdate@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool breaksFallingBlocks(class Block const& a0) const {
		bool (BlockLegacy::*rv)(class Block const&) const;
		*((void**)&rv) = dlsym("?breaksFallingBlocks@BlockLegacy@@UEBA_NAEBVBlock@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE int getExperienceDrop(class Random& a0) const {
		int (BlockLegacy::*rv)(class Random&) const;
		*((void**)&rv) = dlsym("?getExperienceDrop@BlockLegacy@@UEBAHAEAVRandom@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Block const* tryLegacyUpgrade(unsigned short a0) const {
		class Block const* (BlockLegacy::*rv)(unsigned short)const;
		*((void**)&rv) = dlsym("?tryLegacyUpgrade@BlockLegacy@@UEBAPEBVBlock@@G@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool tryToPlace(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, struct ActorBlockSyncMessage const* a3) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*) const;
		*((void**)&rv) = dlsym("?tryToPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE class Block const* tryGetStateFromLegacyData(unsigned short a0) const {
		class Block const* (BlockLegacy::*rv)(unsigned short)const;
		*((void**)&rv) = dlsym("?tryGetStateFromLegacyData@BlockLegacy@@QEBAPEBVBlock@@G@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void onFillBlock(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
		*((void**)&rv) = dlsym("?onFillBlock@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool isObstructingChests(class BlockSource& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?isObstructingChests@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE float getThickness() const {
		float (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?getThickness@BlockLegacy@@UEBAMXZ");
		return (this->*rv)();
	}
	MCINLINE class Vec3 randomlyModifyPosition(class BlockPos const& a0) const {
		class Vec3 (BlockLegacy::*rv)(class BlockPos const&) const;
		*((void**)&rv) = dlsym("?randomlyModifyPosition@BlockLegacy@@UEBA?AVVec3@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void transformOnFall(class BlockSource& a0, class BlockPos const& a1, class Actor* a2, float a3) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Actor*, float) const;
		*((void**)&rv) = dlsym("?transformOnFall@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> buildDescriptionName(class Block const& a0) const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (BlockLegacy::*rv)(class Block const&) const;
		*((void**)&rv) = dlsym("?buildDescriptionName@BlockLegacy@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z");
		return (this->*rv)(a0);
	} MCINLINE bool mayPlaceOn(class BlockSource& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?mayPlaceOn@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool isStairBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isStairBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool hasComparatorSignal() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?hasComparatorSignal@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE int getVariant(class Block const& a0) const {
		int (BlockLegacy::*rv)(class Block const&) const;
		*((void**)&rv) = dlsym("?getVariant@BlockLegacy@@UEBAHAEBVBlock@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE float getExplosionResistance(class Actor* a0) const {
		float (BlockLegacy::*rv)(class Actor*) const;
		*((void**)&rv) = dlsym("?getExplosionResistance@BlockLegacy@@UEBAMPEAVActor@@@Z");
		return (this->*rv)(a0);
	}

	MCINLINE void destroy(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, class Actor* a3) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
		*((void**)&rv) = dlsym("?destroy@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE static unsigned char getPlacementFacingAllExceptAxisY(class Actor& a0, class BlockPos const& a1, float a2) {
		return ((unsigned char (*)(class Actor&, class BlockPos const&, float))dlsym("?getPlacementFacingAllExceptAxisY@BlockLegacy@@SAEAEAVActor@@AEBVBlockPos@@M@Z"))(a0, a1, a2);
	}
	MCINLINE class BlockLegacy& setExperimental() {
		class BlockLegacy& (BlockLegacy::*rv)();
		*((void**)&rv) = dlsym("?setExperimental@BlockLegacy@@QEAAAEAV1@XZ");
		return (this->*rv)();
	}
	MCINLINE bool isInteractiveBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isInteractiveBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE enum Flip getFaceFlip(unsigned char a0, class Block const& a1) const {
		enum Flip (BlockLegacy::*rv)(unsigned char, class Block const&) const;
		*((void**)&rv) = dlsym("?getFaceFlip@BlockLegacy@@UEBA?AW4Flip@@EAEBVBlock@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class AABB const& getVisualShape(class Block const& a0, class AABB& a1, bool a2) const {
		class AABB const& (BlockLegacy::*rv)(class Block const&, class AABB&, bool)const;
		*((void**)&rv) = dlsym("?getVisualShape@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void triggerEvent(class BlockSource& a0, class BlockPos const& a1, int a2, int a3) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, int, int) const;
		*((void**)&rv) = dlsym("?triggerEvent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE void onGraphicsModeChanged(bool a0, bool a1, bool a2) {
		void (BlockLegacy::*rv)(bool, bool, bool);
		*((void**)&rv) = dlsym("?onGraphicsModeChanged@BlockLegacy@@UEAAX_N00@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void onStepOn(class Actor& a0, class BlockPos const& a1) const {
		void (BlockLegacy::*rv)(class Actor&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?onStepOn@BlockLegacy@@UEBAXAEAVActor@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class BlockLegacy& setNameId(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		class BlockLegacy& (BlockLegacy::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
		*((void**)&rv) = dlsym("?setNameId@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool hasVariableLighting() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?hasVariableLighting@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool shouldDispense(class BlockSource& a0, class Container& a1) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class Container&) const;
		*((void**)&rv) = dlsym("?shouldDispense@BlockLegacy@@UEBA_NAEAVBlockSource@@AEAVContainer@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void onMove(class BlockSource& a0, class BlockPos const& a1, class BlockPos const& a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?onMove@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class Block const& getDefaultState() const {
		class Block const& (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?getDefaultState@BlockLegacy@@QEBAAEBVBlock@@XZ");
		return (this->*rv)();
	}
	MCINLINE bool spawnBurnResources(class BlockSource& a0, float a1, float a2, float a3) const {
		bool (BlockLegacy::*rv)(class BlockSource&, float, float, float) const;
		*((void**)&rv) = dlsym("?spawnBurnResources@BlockLegacy@@UEBA_NAEAVBlockSource@@MMM@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool canBeSilkTouched() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?canBeSilkTouched@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class Block const& getPlacementBlock(class Actor& a0, class BlockPos const& a1, unsigned char a2, class Vec3 const& a3, int a4) const {
		class Block const& (BlockLegacy::*rv)(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int)const;
		*((void**)&rv) = dlsym("?getPlacementBlock@BlockLegacy@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE bool canHaveExtraData() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?canHaveExtraData@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void handleRain(class BlockSource& a0, class BlockPos const& a1, float a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, float) const;
		*((void**)&rv) = dlsym("?handleRain@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@M@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool addAABB(class AABB const& a0, class AABB const* a1, class std::vector<class AABB, class std::allocator<class AABB>>& a2) const {
		bool (BlockLegacy::*rv)(class AABB const&, class AABB const*, class std::vector<class AABB, class std::allocator<class AABB>>&) const;
		*((void**)&rv) = dlsym("?addAABB@BlockLegacy@@QEBA_NAEBVAABB@@PEBV2@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool isAuxValueRelevantForPicking() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isAuxValueRelevantForPicking@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void setupRedstoneComponent(class BlockSource& a0, class BlockPos const& a1) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?setupRedstoneComponent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE int telemetryVariant(class BlockSource& a0, class BlockPos const& a1) const {
		int (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?telemetryVariant@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class BlockLegacy& setFriction(float a0) {
		class BlockLegacy& (BlockLegacy::*rv)(float);
		*((void**)&rv) = dlsym("?setFriction@BlockLegacy@@UEAAAEAV1@M@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isRailBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isRailBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isWallBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isWallBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void spawnResources(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, float a3, int a4) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&, float, int) const;
		*((void**)&rv) = dlsym("?spawnResources@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@MH@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE void neighborChanged(class BlockSource& a0, class BlockPos const& a1, class BlockPos const& a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?neighborChanged@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool canSurvive(class BlockSource& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?canSurvive@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class Block const& getStateFromLegacyData(unsigned short a0) const {
		class Block const& (BlockLegacy::*rv)(unsigned short)const;
		*((void**)&rv) = dlsym("?getStateFromLegacyData@BlockLegacy@@UEBAAEBVBlock@@G@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class BlockLegacy& setMapColor(class Color const& a0) {
		class BlockLegacy& (BlockLegacy::*rv)(class Color const&);
		*((void**)&rv) = dlsym("?setMapColor@BlockLegacy@@UEAAAEAV1@AEBVColor@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isStrippable(class Block const& a0) const {
		bool (BlockLegacy::*rv)(class Block const&) const;
		*((void**)&rv) = dlsym("?isStrippable@BlockLegacy@@UEBA_NAEBVBlock@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool mayPlace(class BlockSource& a0, class BlockPos const& a1, unsigned char a2) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, unsigned char) const;
		*((void**)&rv) = dlsym("?mayPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool isDoorBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isDoorBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isFenceBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isFenceBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE float calcGroundFriction(class Mob& a0, class BlockPos const& a1) const {
		float (BlockLegacy::*rv)(class Mob&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?calcGroundFriction@BlockLegacy@@UEBAMAEAVMob@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> buildDescriptionId(class Block const& a0) const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (BlockLegacy::*rv)(class Block const&) const;
		*((void**)&rv) = dlsym("?buildDescriptionId@BlockLegacy@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z");
		return (this->*rv)(a0);
	} MCINLINE class AABB const& getOutline(class BlockSource& a0, class BlockPos const& a1, class AABB& a2) const {
		class AABB const& (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class AABB&)const;
		*((void**)&rv) = dlsym("?getOutline@BlockLegacy@@UEBAAEBVAABB@@AEAVBlockSource@@AEBVBlockPos@@AEAV2@@Z");
		return (this->*rv)(a0, a1, a2);
	}

	MCINLINE bool checkIsPathable(class Actor& a0, class BlockPos const& a1, class BlockPos const& a2) const {
		bool (BlockLegacy::*rv)(class Actor&, class BlockPos const&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?checkIsPathable@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool playerWillDestroy(class Player& a0, class BlockPos const& a1, class Block const& a2) const {
		bool (BlockLegacy::*rv)(class Player&, class BlockPos const&, class Block const&) const;
		*((void**)&rv) = dlsym("?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool canHurtAndBreakItem() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?canHurtAndBreakItem@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class AABB const& getVisualShapeInWorld(class Block const& a0, class BlockSource& a1, class BlockPos const& a2, class AABB& a3, bool a4) const {
		class AABB const& (BlockLegacy::*rv)(class Block const&, class BlockSource&, class BlockPos const&, class AABB&, bool)const;
		*((void**)&rv) = dlsym("?getVisualShapeInWorld@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAV2@_N@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE bool attack(class Player* a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class Player*, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?attack@BlockLegacy@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class BlockLegacy& setExplodeable(float a0) {
		class BlockLegacy& (BlockLegacy::*rv)(float);
		*((void**)&rv) = dlsym("?setExplodeable@BlockLegacy@@UEAAAEAV1@M@Z");
		return (this->*rv)(a0);
	}
	MCINLINE enum BlockProperty getRedstoneProperty(class BlockSource& a0, class BlockPos const& a1) const {
		enum BlockProperty (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?getRedstoneProperty@BlockLegacy@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE unsigned char getMappedFace(unsigned char a0, class Block const& a1) const {
		unsigned char (BlockLegacy::*rv)(unsigned char, class Block const&) const;
		*((void**)&rv) = dlsym("?getMappedFace@BlockLegacy@@UEBAEEAEBVBlock@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool hasTag(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a3) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&) const;
		*((void**)&rv) = dlsym("?hasTag@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool canFillAtPos(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
		*((void**)&rv) = dlsym("?canFillAtPos@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE int calcVariant(class BlockSource& a0, class BlockPos const& a1) const {
		int (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?calcVariant@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool getSecondPart(class BlockSource& a0, class BlockPos const& a1, class BlockPos& a2) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class BlockPos&) const;
		*((void**)&rv) = dlsym("?getSecondPart@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void executeEvent(class BlockSource& a0, class BlockPos const& a1, class Block const& a2, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a3, class Actor& a4) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Block const&, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class Actor&) const;
		*((void**)&rv) = dlsym("?executeEvent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE void animateTick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
		*((void**)&rv) = dlsym("?animateTick@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class BlockLegacy& setLightEmission(float a0) {
		class BlockLegacy& (BlockLegacy::*rv)(float);
		*((void**)&rv) = dlsym("?setLightEmission@BlockLegacy@@UEAAAEAV1@M@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool dealsContactDamage(class Actor const& a0, class Block const& a1, bool a2) const {
		bool (BlockLegacy::*rv)(class Actor const&, class Block const&, bool) const;
		*((void**)&rv) = dlsym("?dealsContactDamage@BlockLegacy@@UEBA_NAEBVActor@@AEBVBlock@@_N@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool getLiquidClipVolume(class BlockSource& a0, class BlockPos const& a1, class AABB& a2) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class AABB&) const;
		*((void**)&rv) = dlsym("?getLiquidClipVolume@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool isAttachedTo(class BlockSource& a0, class BlockPos const& a1, class BlockPos& a2) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class BlockPos&) const;
		*((void**)&rv) = dlsym("?isAttachedTo@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void addAABBs(class Block const& a0, class BlockSource& a1, class BlockPos const& a2, class AABB const* a3, class std::vector<class AABB, class std::allocator<class AABB>>& a4) const {
		void (BlockLegacy::*rv)(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, class std::vector<class AABB, class std::allocator<class AABB>>&) const;
		*((void**)&rv) = dlsym("?addAABBs@BlockLegacy@@UEBAXAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE void setVisualShape(class Vec3 const& a0, class Vec3 const& a1) {
		void (BlockLegacy::*rv)(class Vec3 const&, class Vec3 const&);
		*((void**)&rv) = dlsym("?setVisualShape@BlockLegacy@@UEAAXAEBVVec3@@0@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class BlockLegacy& setAllowsRunes(bool a0) {
		class BlockLegacy& (BlockLegacy::*rv)(bool);
		*((void**)&rv) = dlsym("?setAllowsRunes@BlockLegacy@@UEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isCropBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isCropBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool addCollisionShapes(class Block const& a0, class BlockSource& a1, class BlockPos const& a2, class AABB const* a3, class std::vector<class AABB, class std::allocator<class AABB>>& a4, class Actor* a5) const {
		bool (BlockLegacy::*rv)(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, class std::vector<class AABB, class std::allocator<class AABB>>&, class Actor*) const;
		*((void**)&rv) = dlsym("?addCollisionShapes@BlockLegacy@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@PEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5);
	}
	MCINLINE bool waterSpreadCausesSpawn() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?waterSpreadCausesSpawn@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool getIgnoresDestroyPermissions(class Actor& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class Actor&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?getIgnoresDestroyPermissions@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE static unsigned char getPlacementFacingAll(class Actor& a0, class BlockPos const& a1, float a2) {
		return ((unsigned char (*)(class Actor&, class BlockPos const&, float))dlsym("?getPlacementFacingAll@BlockLegacy@@SAEAEAVActor@@AEBVBlockPos@@M@Z"))(a0, a1, a2);
	}
	MCINLINE bool isBounceBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isBounceBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isSeasonTinted(class Block const& a0, class BlockSource& a1, class BlockPos const& a2) const {
		bool (BlockLegacy::*rv)(class Block const&, class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?isSeasonTinted@BlockLegacy@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool isWaterBlocking() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isWaterBlocking@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isContainerBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isContainerBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isHurtableBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isHurtableBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool detachesOnPistonMove(class BlockSource& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?detachesOnPistonMove@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE enum BlockRenderLayer getRenderLayer(class Block const& a0, class BlockSource& a1, class BlockPos const& a2) const {
		enum BlockRenderLayer (BlockLegacy::*rv)(class Block const&, class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?getRenderLayer@BlockLegacy@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool isThinFenceBlock() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?isThinFenceBlock@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool shouldRandomTick() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?shouldRandomTick@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void handleEntityInside(class BlockSource& a0, class BlockPos const& a1, class Actor* a2, class Vec3& a3) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
		*((void**)&rv) = dlsym("?handleEntityInside@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@AEAVVec3@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE int getIconYOffset() const {
		int (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?getIconYOffset@BlockLegacy@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE void onProjectileHit(class BlockSource& a0, class BlockPos const& a1, class Actor const& a2) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, class Actor const&) const;
		*((void**)&rv) = dlsym("?onProjectileHit@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool canSlide(class BlockSource& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?canSlide@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class Block const& getStrippedBlock(class Block const& a0) const {
		class Block const& (BlockLegacy::*rv)(class Block const&)const;
		*((void**)&rv) = dlsym("?getStrippedBlock@BlockLegacy@@UEBAAEBVBlock@@AEBV2@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool canProvideSupport(class Block const& a0, unsigned char a1, enum BlockSupportType a2) const {
		bool (BlockLegacy::*rv)(class Block const&, unsigned char, enum BlockSupportType) const;
		*((void**)&rv) = dlsym("?canProvideSupport@BlockLegacy@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool pushesUpFallingBlocks() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?pushesUpFallingBlocks@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool use(class Player& a0, class BlockPos const& a1) const {
		bool (BlockLegacy::*rv)(class Player&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?use@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class BlockLegacy& setCanBeExtraBlock(bool a0) {
		class BlockLegacy& (BlockLegacy::*rv)(bool);
		*((void**)&rv) = dlsym("?setCanBeExtraBlock@BlockLegacy@@QEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE int getResourceCount(class Random& a0, class Block const& a1, int a2) const {
		int (BlockLegacy::*rv)(class Random&, class Block const&, int) const;
		*((void**)&rv) = dlsym("?getResourceCount@BlockLegacy@@UEBAHAEAVRandom@@AEBVBlock@@H@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool dispense(class BlockSource& a0, class Container& a1, int a2, class Vec3 const& a3, unsigned char a4) const {
		bool (BlockLegacy::*rv)(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
		*((void**)&rv) = dlsym("?dispense@BlockLegacy@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}

	MCINLINE void spawnResources(class BlockSource& a0, class BlockPos const& a1, float a2, int a3) const {
		void (BlockLegacy::*rv)(class BlockSource&, class BlockPos const&, float, int) const;
		*((void**)&rv) = dlsym("?spawnResources@BlockLegacy@@QEBAXAEAVBlockSource@@AEBVBlockPos@@MH@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool canBeOriginalSurface() const {
		bool (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?canBeOriginalSurface@BlockLegacy@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool canBeUsedInCommands(bool a0, class BaseGameVersion const& a1) const {
		bool (BlockLegacy::*rv)(bool, class BaseGameVersion const&) const;
		*((void**)&rv) = dlsym("?canBeUsedInCommands@BlockLegacy@@UEBA_N_NAEBVBaseGameVersion@@@Z");
		return (this->*rv)(a0, a1);
	}
#endif
	MCINLINE class BlockLegacy& addProperty(enum BlockProperty a0) {
		class BlockLegacy& (BlockLegacy::*rv)(enum BlockProperty);
		*((void**)&rv) = dlsym("?addProperty@BlockLegacy@@UEAAAEAV1@W4BlockProperty@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class BlockLegacy& addBlockProperty(enum BlockProperty a0) {
		class BlockLegacy& (BlockLegacy::*rv)(enum BlockProperty);
		*((void**)&rv) = dlsym("?addBlockProperty@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool operator==(class BlockLegacy const& a0) const {
		bool (BlockLegacy::*rv)(class BlockLegacy const&) const;
		*((void**)&rv) = dlsym("??8BlockLegacy@@QEBA_NAEBV0@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE short getBlockItemId() const {
		short (BlockLegacy::*rv)() const;
		*((void**)&rv) = dlsym("?getBlockItemId@BlockLegacy@@QEBAFXZ");
		return (this->*rv)();
	}
#if 0
//   bad fun  

	MCINLINE void  forEachBlockPermutation(class std::function<bool > a0)const {
void (BlockLegacy::*rv)(class std::function<bool >)const ; *((void**)&rv) = dlsym("?forEachBlockPermutation@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class ItemInstance  getSilkTouchItemInstance(class Block const & a0)const {
 class ItemInstance (BlockLegacy::*rv)(class Block const &)const ; *((void**)&rv) = dlsym("?getSilkTouchItemInstance@BlockLegacy@@UEBA?AVItemInstance@@AEBVBlock@@@Z"); return (this->*rv)(a0);}
	// ??0BlockLegacy@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
	// BlockLegacy::BlockLegacy(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int,class Material const &)
	MCINLINE void  forEachItemStateInstance(class std::function<bool > a0)const {
void (BlockLegacy::*rv)(class std::function<bool >)const ; *((void**)&rv) = dlsym("?forEachItemStateInstance@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVItemStateInstance@@@Z@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class Color  getMapColor(class BlockSource & a0,class BlockPos const & a1)const {
 class Color (BlockLegacy::*rv)(class BlockSource &,class BlockPos const &)const ; *((void**)&rv) = dlsym("?getMapColor@BlockLegacy@@UEBA?AVColor@@AEAVBlockSource@@AEBVBlockPos@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE  class HitResult  clip(class BlockSource & a0,class BlockPos const & a1,class Vec3 const & a2,class Vec3 const & a3,bool a4)const {
 class HitResult (BlockLegacy::*rv)(class BlockSource &,class BlockPos const &,class Vec3 const &,class Vec3 const &,bool)const ; *((void**)&rv) = dlsym("?clip@BlockLegacy@@UEBA?AVHitResult@@AEAVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z"); return (this->*rv)(a0,a1,a2,a3,a4);}
	MCINLINE class WeakPtr<class BlockLegacy>  createWeakPtr(){
class WeakPtr<class BlockLegacy> (BlockLegacy::*rv)(); *((void**)&rv) = dlsym("?createWeakPtr@BlockLegacy@@QEAA?AV?$WeakPtr@VBlockLegacy@@@@XZ"); return (this->*rv)();}
	MCINLINE  bool  liquidCanFlowIntoFromDirection(unsigned char a0,class std::function<class Block const & > const & a1,class BlockPos const & a2)const {
 bool (BlockLegacy::*rv)(unsigned char,class std::function<class Block const & > const &,class BlockPos const &)const ; *((void**)&rv) = dlsym("?liquidCanFlowIntoFromDirection@BlockLegacy@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE  class ItemInstance  asItemInstance(class BlockSource & a0,class BlockPos const & a1,class Block const & a2)const {
 class ItemInstance (BlockLegacy::*rv)(class BlockSource &,class BlockPos const &,class Block const &)const ; *((void**)&rv) = dlsym("?asItemInstance@BlockLegacy@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE  class Color  getMapColor()const {
 class Color (BlockLegacy::*rv)()const ; *((void**)&rv) = dlsym("?getMapColor@BlockLegacy@@UEBA?AVColor@@XZ"); return (this->*rv)();}
	MCINLINE  struct Brightness  getLightEmission(class Block const & a0)const {
 struct Brightness (BlockLegacy::*rv)(class Block const &)const ; *((void**)&rv) = dlsym("?getLightEmission@BlockLegacy@@UEBA?AUBrightness@@AEBVBlock@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class BlockLegacy &  setLightBlock(struct Brightness a0){
 class BlockLegacy & (BlockLegacy::*rv)(struct Brightness); *((void**)&rv) = dlsym("?setLightBlock@BlockLegacy@@UEAAAEAV1@UBrightness@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class ItemInstance  getResourceItem(class Random & a0,class Block const & a1,int a2)const {
 class ItemInstance (BlockLegacy::*rv)(class Random &,class Block const &,int)const ; *((void**)&rv) = dlsym("?getResourceItem@BlockLegacy@@UEBA?AVItemInstance@@AEAVRandom@@AEBVBlock@@H@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE class HitResult  clip(class BlockSource & a0,class BlockPos const & a1,class Vec3 const & a2,class Vec3 const & a3,bool a4,class AABB const & a5)const {
class HitResult (BlockLegacy::*rv)(class BlockSource &,class BlockPos const &,class Vec3 const &,class Vec3 const &,bool,class AABB const &)const ; *((void**)&rv) = dlsym("?clip@BlockLegacy@@QEBA?AVHitResult@@AEAVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_NAEBVAABB@@@Z"); return (this->*rv)(a0,a1,a2,a3,a4,a5);}
#endif
};
#pragma once
#include "Core.h"
class Block {
public:
	Block(const Block&) = delete;
	Block& operator=(const Block&) = delete;
	Block() = delete;
	#ifdef MCAPI_BLOCK_EXTRA
	MCINLINE class Block const& copyState(class Block const& a0, class ItemState const& a1) const {
		class Block const& (Block::*rv)(class Block const&, class ItemState const&)const;
		*((void**)&rv) = dlsym("?copyState@Block@@QEBAAEBV1@AEBV1@AEBVItemState@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool isSolidBlockingBlockAndNotSignalSource() const {
		bool (Block::*rv)() const;
		*((void**)&rv) = dlsym("?isSolidBlockingBlockAndNotSignalSource@Block@@QEBA_NXZ");
		return (this->*rv)();
	}
	
	MCINLINE enum BlockRenderLayer getRenderLayer() const {
		enum BlockRenderLayer (Block::*rv)() const;
		*((void**)&rv) = dlsym("?getRenderLayer@Block@@UEBA?AW4BlockRenderLayer@@XZ");
		return (this->*rv)();
	}
	MCINLINE class Block const& keepState(class ItemState const& a0) const {
		class Block const& (Block::*rv)(class ItemState const&)const;
		*((void**)&rv) = dlsym("?keepState@Block@@QEBAAEBV1@AEBVItemState@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void spawnResources(class BlockSource& a0, class BlockPos const& a1, float a2, int a3) const {
		void (Block::*rv)(class BlockSource&, class BlockPos const&, float, int) const;
		*((void**)&rv) = dlsym("?spawnResources@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@MH@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE void buildSerializationId(unsigned int a0) {
		void (Block::*rv)(unsigned int);
		*((void**)&rv) = dlsym("?buildSerializationId@Block@@IEAAXI@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isSlabBlock() const {
		bool (Block::*rv)() const;
		*((void**)&rv) = dlsym("?isSlabBlock@Block@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isSolidBlockingBlock() const {
		bool (Block::*rv)() const;
		*((void**)&rv) = dlsym("?isSolidBlockingBlock@Block@@QEBA_NXZ");
		return (this->*rv)();
	}
 MCINLINE bool hasState(class ItemState const& a0) const {
		bool (Block::*rv)(class ItemState const&) const;
		*((void**)&rv) = dlsym("?hasState@Block@@QEBA_NAEBVItemState@@@Z");
		return (this->*rv)(a0);
	}
#endif
		MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> toDebugString() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Block::*rv)() const;
		*((void**)&rv) = dlsym("?toDebugString@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	}

#if 0
//   bad fun

#endif
};

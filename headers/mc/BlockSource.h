#pragma once
#include "Core.h"
class BlockSource {
    char filler[256];

  public:
    BlockSource(const BlockSource &) = delete;
    BlockSource &operator=(const BlockSource &) = delete;
    BlockSource()                               = delete;
#ifdef MCAPI_BLOCKSOURCE_EXTRA
    MCINLINE bool containsMaterial(class AABB const &a0, enum MaterialType a1) {
        bool (BlockSource::*rv)(class AABB const &, enum MaterialType);
        *((void **)&rv) =
            dlsym("?containsMaterial@BlockSource@@QEAA_NAEBVAABB@@W4MaterialType@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool findNextTopSolidBlockUnder(class BlockPos &a0) {
        bool (BlockSource::*rv)(class BlockPos &);
        *((void **)&rv) = dlsym("?findNextTopSolidBlockUnder@BlockSource@@QEAA_NAEAVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool checkBlockDestroyPermissions(class Actor &a0,
                                               class BlockPos const &a1,
                                               class ItemStack const &a2,
                                               bool a3) {
        bool (BlockSource::*rv)(class Actor &, class BlockPos const &, class ItemStack const &,
                                bool);
        *((void **)&rv) = dlsym(
            "?checkBlockDestroyPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@"
            "AEBVItemStack@@_N@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE bool isConsideredSolidBlock(class BlockPos const &a0) {
        bool (BlockSource::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?isConsideredSolidBlock@BlockSource@@QEAA_NAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool containsAnyBlockOfType(class BlockPos const &a0,
                                         class BlockPos const &a1,
                                         class Block const &a2) {
        bool (BlockSource::*rv)(class BlockPos const &, class BlockPos const &,
                                class Block const &);
        *((void **)&rv) =
            dlsym("?containsAnyBlockOfType@BlockSource@@QEAA_NAEBVBlockPos@@0AEBVBlock@@@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool hasTickInCurrentTick(class BlockPos const &a0, enum TickingQueueType a1) const {
        bool (BlockSource::*rv)(class BlockPos const &, enum TickingQueueType) const;
        *((void **)&rv) =
            dlsym("?hasTickInCurrentTick@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE class Biome *tryGetBiome(class BlockPos const &a0) const {
        class Biome *(BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?tryGetBiome@BlockSource@@QEBAPEAVBiome@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class std::vector<class Actor *, class std::allocator<class Actor *>> const &
    fetchEntities(enum ActorType a0, class AABB const &a1, class Actor *a2) {
        class std::vector<class Actor *, class std::allocator<class Actor *>> const &(
            BlockSource::*rv)(enum ActorType, class AABB const &, class Actor *);
        *((void **)&rv) = dlsym(
            "?fetchEntities@BlockSource@@QEAAAEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@"
            "@std@@W4ActorType@@AEBVAABB@@PEAVActor@@@Z");
        return (this->*rv)(a0, a1, a2);
    } MCINLINE bool _hasChunksAt(struct Bounds const &a0) const {
        bool (BlockSource::*rv)(struct Bounds const &) const;
        *((void **)&rv) = dlsym("?_hasChunksAt@BlockSource@@IEBA_NAEBUBounds@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void addVoidFloor(class AABB const &a0) {
        void (BlockSource::*rv)(class AABB const &);
        *((void **)&rv) = dlsym("?addVoidFloor@BlockSource@@IEAAXAEBVAABB@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void fireBlockEntityChanged(class BlockActor &a0) {
        void (BlockSource::*rv)(class BlockActor &);
        *((void **)&rv) = dlsym("?fireBlockEntityChanged@BlockSource@@QEAAXAEAVBlockActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isUnobstructedByEntities(class AABB const &a0, class Actor *a1) {
        bool (BlockSource::*rv)(class AABB const &, class Actor *);
        *((void **)&rv) =
            dlsym("?isUnobstructedByEntities@BlockSource@@QEAA_NAEBVAABB@@PEAVActor@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE class Block const &getLiquidBlock(class BlockPos const &a0) const {
        class Block const &(BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?getLiquidBlock@BlockSource@@QEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool setExtraBlock(class BlockPos const &a0, class Block const &a1, int a2) {
        bool (BlockSource::*rv)(class BlockPos const &, class Block const &, int);
        *((void **)&rv) = dlsym("?setExtraBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@H@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE class Actor *fetchNearestEntityOfType(class Actor *a0,
                                                   class AABB const &a1,
                                                   enum ActorType a2) {
        class Actor *(BlockSource::*rv)(class Actor *, class AABB const &, enum ActorType);
        *((void **)&rv) = dlsym(
            "?fetchNearestEntityOfType@BlockSource@@QEAAPEAVActor@@PEAV2@AEBVAABB@@W4ActorType@@@"
            "Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void neighborChanged(class BlockPos const &a0, class BlockPos const &a1) {
        void (BlockSource::*rv)(class BlockPos const &, class BlockPos const &);
        *((void **)&rv) = dlsym("?neighborChanged@BlockSource@@QEAAXAEBVBlockPos@@0@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isUnderWater(class Vec3 const &a0, class Block const &a1) const {
        bool (BlockSource::*rv)(class Vec3 const &, class Block const &) const;
        *((void **)&rv) = dlsym("?isUnderWater@BlockSource@@QEBA_NAEBVVec3@@AEBVBlock@@@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE bool isTouchingMaterial(class BlockPos const &a0, enum MaterialType a1) const {
        bool (BlockSource::*rv)(class BlockPos const &, enum MaterialType) const;
        *((void **)&rv) =
            dlsym("?isTouchingMaterial@BlockSource@@QEBA_NAEBVBlockPos@@W4MaterialType@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE class std::vector<class AABB, class std::allocator<class AABB>>
        &fetchCollisionShapes(class AABB const &a0, float *a1, bool a2, class Actor *a3) {
        class std::vector<class AABB, class std::allocator<class AABB>> &(
            BlockSource::*rv)(class AABB const &, float *, bool, class Actor *);
        *((void **)&rv) = dlsym(
            "?fetchCollisionShapes@BlockSource@@QEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@"
            "std@@AEBVAABB@@PEAM_NPEAVActor@@@Z");
        return (this->*rv)(a0, a1, a2, a3);
    } MCINLINE short getHeightmap(int a0, int a1) {
        short (BlockSource::*rv)(int, int);
        *((void **)&rv) = dlsym("?getHeightmap@BlockSource@@QEAAFHH@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE bool isPositionUnderLiquid(class Vec3 const &a0, enum MaterialType a1) {
        bool (BlockSource::*rv)(class Vec3 const &, enum MaterialType);
        *((void **)&rv) =
            dlsym("?isPositionUnderLiquid@BlockSource@@QEAA_NAEBVVec3@@W4MaterialType@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void updateNeighborsAtExceptFromFacing(class BlockPos const &a0,
                                                    class BlockPos const &a1,
                                                    int a2) {
        void (BlockSource::*rv)(class BlockPos const &, class BlockPos const &, int);
        *((void **)&rv) =
            dlsym("?updateNeighborsAtExceptFromFacing@BlockSource@@QEAAXAEBVBlockPos@@0H@Z");
        return (this->*rv)(a0, a1, a2);
    }

    MCINLINE bool hasTickInPendingTicks(class BlockPos const &a0, enum TickingQueueType a1) const {
        bool (BlockSource::*rv)(class BlockPos const &, enum TickingQueueType) const;
        *((void **)&rv) =
            dlsym("?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void fireBlockChanged(class BlockPos const &a0,
                                   unsigned int a1,
                                   class Block const &a2,
                                   class Block const &a3,
                                   int a4,
                                   struct ActorBlockSyncMessage const *a5) {
        void (BlockSource::*rv)(class BlockPos const &, unsigned int, class Block const &,
                                class Block const &, int, struct ActorBlockSyncMessage const *);
        *((void **)&rv) = dlsym(
            "?fireBlockChanged@BlockSource@@QEAAXAEBVBlockPos@@IAEBVBlock@@"
            "1HPEBUActorBlockSyncMessage@@@Z");
        return (this->*rv)(a0, a1, a2, a3, a4, a5);
    }
    MCINLINE bool containsAnySolidBlocking(class AABB const &a0) {
        bool (BlockSource::*rv)(class AABB const &);
        *((void **)&rv) = dlsym("?containsAnySolidBlocking@BlockSource@@QEAA_NAEBVAABB@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Block const &getExtraBlock(class BlockPos const &a0) const {
        class Block const &(BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?getExtraBlock@BlockSource@@QEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Material const &getMaterial(int a0, int a1, int a2) const {
        class Material const &(BlockSource::*rv)(int, int, int) const;
        *((void **)&rv) = dlsym("?getMaterial@BlockSource@@QEBAAEBVMaterial@@HHH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool _getBlockPermissions(class BlockPos const &a0, bool a1) {
        bool (BlockSource::*rv)(class BlockPos const &, bool);
        *((void **)&rv) = dlsym("?_getBlockPermissions@BlockSource@@AEAA_NAEBVBlockPos@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void addToTickingQueue(class BlockPos const &a0,
                                    class Block const &a1,
                                    int a2,
                                    int a3) {
        void (BlockSource::*rv)(class BlockPos const &, class Block const &, int, int);
        *((void **)&rv) =
            dlsym("?addToTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@HH@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE class Biome const &getConstBiome(class BlockPos const &a0) const {
        class Biome const &(BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?getConstBiome@BlockSource@@QEBAAEBVBiome@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void blockEvent(class BlockPos const &a0, int a1, int a2) {
        void (BlockSource::*rv)(class BlockPos const &, int, int);
        *((void **)&rv) = dlsym("?blockEvent@BlockSource@@QEAAXAEBVBlockPos@@HH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE class std::vector<class Actor *, class std::allocator<class Actor *>> const &
    fetchActors(struct ActorDefinitionIdentifier const &a0, class AABB const &a1) {
        class std::vector<class Actor *, class std::allocator<class Actor *>> const &(
            BlockSource::*rv)(struct ActorDefinitionIdentifier const &, class AABB const &);
        *((void **)&rv) = dlsym(
            "?fetchActors@BlockSource@@QEAAAEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@"
            "std@@AEBUActorDefinitionIdentifier@@AEBVAABB@@@Z");
        return (this->*rv)(a0, a1);
    } MCINLINE bool hasChunksAt(struct Bounds const &a0) const {
        bool (BlockSource::*rv)(struct Bounds const &) const;
        *((void **)&rv) = dlsym("?hasChunksAt@BlockSource@@QEBA_NAEBUBounds@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool removeBlock(class BlockPos const &a0) {
        bool (BlockSource::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?removeBlock@BlockSource@@QEAA_NAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool mayPlace(class Block const &a0,
                           class BlockPos const &a1,
                           unsigned char a2,
                           class Actor *a3,
                           bool a4) {
        bool (BlockSource::*rv)(class Block const &, class BlockPos const &, unsigned char,
                                class Actor *, bool);
        *((void **)&rv) =
            dlsym("?mayPlace@BlockSource@@QEAA_NAEBVBlock@@AEBVBlockPos@@EPEAVActor@@_N@Z");
        return (this->*rv)(a0, a1, a2, a3, a4);
    }
    MCINLINE void fetchBlockEntities(
        class AABB const &a0,
        class std::vector<class BlockActor *, class std::allocator<class BlockActor *>> &a1) {
        void (BlockSource::*rv)(
            class AABB const &,
            class std::vector<class BlockActor *, class std::allocator<class BlockActor *>> &);
        *((void **)&rv) = dlsym(
            "?fetchBlockEntities@BlockSource@@QEAAXAEBVAABB@@AEAV?$vector@PEAVBlockActor@@V?$"
            "allocator@PEAVBlockActor@@@std@@@std@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool findNextSpawnBlockUnder(class BlockPos &a0, enum MaterialType a1) {
        bool (BlockSource::*rv)(class BlockPos &, enum MaterialType);
        *((void **)&rv) =
            dlsym("?findNextSpawnBlockUnder@BlockSource@@QEAA_NAEAVBlockPos@@W4MaterialType@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool containsFireBlock(class AABB const &a0) {
        bool (BlockSource::*rv)(class AABB const &);
        *((void **)&rv) = dlsym("?containsFireBlock@BlockSource@@QEAA_NAEBVAABB@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class std::vector<class AABB, class std::allocator<class AABB>> &fetchAABBs(
        class AABB const &a0,
        bool a1) {
        class std::vector<class AABB, class std::allocator<class AABB>> &(
            BlockSource::*rv)(class AABB const &, bool);
        *((void **)&rv) = dlsym(
            "?fetchAABBs@BlockSource@@QEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@"
            "AEBVAABB@@_N@Z");
        return (this->*rv)(a0, a1);
    } MCINLINE bool hasChunksAt(class AABB const &a0) const {
        bool (BlockSource::*rv)(class AABB const &) const;
        *((void **)&rv) = dlsym("?hasChunksAt@BlockSource@@QEBA_NAEBVAABB@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE bool hasTickInPendingTicks(class BlockPos const &a0) const {
        bool (BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class std::vector<class Actor *, class std::allocator<class Actor *>> const &
    fetchEntities2(enum ActorType a0, class AABB const &a1, bool a2) {
        class std::vector<class Actor *, class std::allocator<class Actor *>> const &(
            BlockSource::*rv)(enum ActorType, class AABB const &, bool);
        *((void **)&rv) = dlsym(
            "?fetchEntities2@BlockSource@@QEAAAEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@"
            "@@std@@W4ActorType@@AEBVAABB@@_N@Z");
        return (this->*rv)(a0, a1, a2);
    } MCINLINE bool canSeeSky(int a0, int a1, int a2) const {
        bool (BlockSource::*rv)(int, int, int) const;
        *((void **)&rv) = dlsym("?canSeeSky@BlockSource@@QEBA_NHHH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE short getHeightmap(class BlockPos const &a0) const {
        short (BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?getHeightmap@BlockSource@@QEBAFAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool containsAnyLiquid(class AABB const &a0) {
        bool (BlockSource::*rv)(class AABB const &);
        *((void **)&rv) = dlsym("?containsAnyLiquid@BlockSource@@QEAA_NAEBVAABB@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE bool getNextTickUpdateForPos(class BlockPos const &a0,
                                          enum TickingQueueType a1,
                                          struct Tick &a2) const {
        bool (BlockSource::*rv)(class BlockPos const &, enum TickingQueueType, struct Tick &) const;
        *((void **)&rv) = dlsym(
            "?getNextTickUpdateForPos@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@"
            "AEAUTick@@@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE short getAboveTopSolidBlock(class BlockPos const &a0, bool a1, bool a2) {
        short (BlockSource::*rv)(class BlockPos const &, bool, bool);
        *((void **)&rv) = dlsym("?getAboveTopSolidBlock@BlockSource@@QEAAFAEBVBlockPos@@_N1@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool isEmptyBlock(int a0, int a1, int a2) {
        bool (BlockSource::*rv)(int, int, int);
        *((void **)&rv) = dlsym("?isEmptyBlock@BlockSource@@QEAA_NHHH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool areChunksFullyLoaded(class BlockPos const &a0, int a1) {
        bool (BlockSource::*rv)(class BlockPos const &, int);
        *((void **)&rv) = dlsym("?areChunksFullyLoaded@BlockSource@@QEAA_NAEBVBlockPos@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool canSeeSkyFromBelowWater(class BlockPos const &a0) {
        bool (BlockSource::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?canSeeSkyFromBelowWater@BlockSource@@QEAA_NAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool canSeeSky(class BlockPos const &a0) const {
        bool (BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?canSeeSky@BlockSource@@QEBA_NAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class std::vector<class Actor *, class std::allocator<class Actor *>> const &
    fetchEntities(class Actor *a0, class AABB const &a1) {
        class std::vector<class Actor *, class std::allocator<class Actor *>> const &(
            BlockSource::*rv)(class Actor *, class AABB const &);
        *((void **)&rv) = dlsym(
            "?fetchEntities@BlockSource@@QEAAAEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@"
            "@std@@PEAVActor@@AEBVAABB@@@Z");
        return (this->*rv)(a0, a1);
    } MCINLINE class Biome &getBiome(class BlockPos const &a0) {
        class Biome &(BlockSource::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?getBiome@BlockSource@@QEAAAEAVBiome@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSolidBlockingBlock(int a0, int a1, int a2) const {
        bool (BlockSource::*rv)(int, int, int) const;
        *((void **)&rv) = dlsym("?isSolidBlockingBlock@BlockSource@@QEBA_NHHH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE float getVisualLiquidHeight(class Vec3 const &a0) {
        float (BlockSource::*rv)(class Vec3 const &);
        *((void **)&rv) = dlsym("?getVisualLiquidHeight@BlockSource@@QEAAMAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float _getLiquidHeight(class BlockPos const &a0, enum MaterialType a1, bool a2) {
        float (BlockSource::*rv)(class BlockPos const &, enum MaterialType, bool);
        *((void **)&rv) =
            dlsym("?_getLiquidHeight@BlockSource@@AEAAMAEBVBlockPos@@W4MaterialType@@_N@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool isInWall(class Vec3 const &a0) {
        bool (BlockSource::*rv)(class Vec3 const &);
        *((void **)&rv) = dlsym("?isInWall@BlockSource@@QEAA_NAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _removeFromTickingQueue(class BlockPos const &a0,
                                          class Block const &a1,
                                          enum TickingQueueType a2) {
        void (BlockSource::*rv)(class BlockPos const &, class Block const &, enum TickingQueueType);
        *((void **)&rv) = dlsym(
            "?_removeFromTickingQueue@BlockSource@@AEAAXAEBVBlockPos@@AEBVBlock@@"
            "W4TickingQueueType@@@Z");
        return (this->*rv)(a0, a1, a2);
    }

    MCINLINE class BlockTickingQueue *_getTickingQueue(class BlockPos const &a0,
                                                       enum TickingQueueType a1) const {
        class BlockTickingQueue *(BlockSource::*rv)(class BlockPos const &, enum TickingQueueType)
            const;
        *((void **)&rv) = dlsym(
            "?_getTickingQueue@BlockSource@@AEBAPEAVBlockTickingQueue@@AEBVBlockPos@@"
            "W4TickingQueueType@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void addToRandomTickingQueue(class BlockPos const &a0,
                                          class Block const &a1,
                                          int a2,
                                          int a3) {
        void (BlockSource::*rv)(class BlockPos const &, class Block const &, int, int);
        *((void **)&rv) =
            dlsym("?addToRandomTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@HH@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE float getSeenPercent(class Vec3 const &a0, class AABB const &a1) {
        float (BlockSource::*rv)(class Vec3 const &, class AABB const &);
        *((void **)&rv) = dlsym("?getSeenPercent@BlockSource@@QEAAMAEBVVec3@@AEBVAABB@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool hasBorderBlock(class BlockPos a0) {
        bool (BlockSource::*rv)(class BlockPos);
        *((void **)&rv) = dlsym("?hasBorderBlock@BlockSource@@QEAA_NVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool containsLiquid(class AABB const &a0, enum MaterialType a1) {
        bool (BlockSource::*rv)(class AABB const &, enum MaterialType);
        *((void **)&rv) = dlsym("?containsLiquid@BlockSource@@QEAA_NAEBVAABB@@W4MaterialType@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void addUnloadedChunksAABBs(class AABB const &a0) {
        void (BlockSource::*rv)(class AABB const &);
        *((void **)&rv) = dlsym("?addUnloadedChunksAABBs@BlockSource@@IEAAXAEBVAABB@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool findNextTopSolidBlockAbove(class BlockPos &a0) {
        bool (BlockSource::*rv)(class BlockPos &);
        *((void **)&rv) = dlsym("?findNextTopSolidBlockAbove@BlockSource@@QEAA_NAEAVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool checkBlockPermissions(class Actor &a0,
                                        class BlockPos const &a1,
                                        unsigned char a2,
                                        class ItemStack const &a3,
                                        bool a4) {
        bool (BlockSource::*rv)(class Actor &, class BlockPos const &, unsigned char,
                                class ItemStack const &, bool);
        *((void **)&rv) = dlsym(
            "?checkBlockPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@EAEBVItemStack@@_N@"
            "Z");
        return (this->*rv)(a0, a1, a2, a3, a4);
    }
    MCINLINE void updateNeighborsAt(class BlockPos const &a0) {
        void (BlockSource::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?updateNeighborsAt@BlockSource@@QEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class BlockActor *getBlockEntity(class BlockPos const &a0) {
        class BlockActor *(BlockSource::*rv)(class BlockPos const &);
        *((void **)&rv) =
            dlsym("?getBlockEntity@BlockSource@@QEAAPEAVBlockActor@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE bool hasChunksAt(class BlockPos const &a0, class BlockPos const &a1) const {
        bool (BlockSource::*rv)(class BlockPos const &, class BlockPos const &) const;
        *((void **)&rv) = dlsym("?hasChunksAt@BlockSource@@QEBA_NAEBVBlockPos@@0@Z");
        return (this->*rv)(a0, a1);
    }
#endif
    MCINLINE float getBrightness(class BlockPos const &a0) const {
        float (BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?getBrightness@BlockSource@@QEBAMAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool hasChunksAt(class BlockPos const &a0, int a1) const {
        bool (BlockSource::*rv)(class BlockPos const &, int) const;
        *((void **)&rv) = dlsym("?hasChunksAt@BlockSource@@QEBA_NAEBVBlockPos@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool setBlockNoUpdate(int a0, int a1, int a2, class Block const &a3) {
        bool (BlockSource::*rv)(int, int, int, class Block const &);
        *((void **)&rv) = dlsym("?setBlockNoUpdate@BlockSource@@QEAA_NHHHAEBVBlock@@@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE bool hasBlock(class BlockPos const &a0) const {
        bool (BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?hasBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE class LevelChunk *getChunk(class ChunkPos const &a0) const {
        class LevelChunk *(BlockSource::*rv)(class ChunkPos const &) const;
        *((void **)&rv) = dlsym("?getChunk@BlockSource@@QEBAPEAVLevelChunk@@AEBVChunkPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Block const &getBlock(class BlockPos const &a0) const {
        class Block const &(BlockSource::*rv)(class BlockPos const &) const;
        *((void **)&rv) = dlsym("?getBlock@BlockSource@@QEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool setBlock(int a0, int a1, int a2, class Block const &a3, int a4) {
        bool (BlockSource::*rv)(int, int, int, class Block const &, int);
        *((void **)&rv) = dlsym("?setBlock@BlockSource@@QEAA_NHHHAEBVBlock@@H@Z");
        return (this->*rv)(a0, a1, a2, a3, a4);
    }
    MCINLINE bool setBlock(class BlockPos const &a0,
                           class Block const &a1,
                           int a2,
                           struct ActorBlockSyncMessage const *a3) {
        bool (BlockSource::*rv)(class BlockPos const &, class Block const &, int,
                                struct ActorBlockSyncMessage const *);
        *((void **)&rv) = dlsym(
            "?setBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@HPEBUActorBlockSyncMessage@@@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE class Block const &getBlock(int a0, int a1, int a2) const {
        class Block const &(BlockSource::*rv)(int, int, int) const;
        *((void **)&rv) = dlsym("?getBlock@BlockSource@@QEBAAEBVBlock@@HHH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE class BlockActor *getBlockEntity(int a0, int a1, int a2) {
        class BlockActor *(BlockSource::*rv)(int, int, int);
        *((void **)&rv) = dlsym("?getBlockEntity@BlockSource@@QEAAPEAVBlockActor@@HHH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    /*??0BlockSource@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N3@Z
    // BlockSource::BlockSource(class Level &,class Dimension &,class ChunkSource &,bool,bool)*/
    BlockSource(class Level &a, class Dimension &b, class ChunkSource &c, bool d, bool e) {
        SymCall("??0BlockSource@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N3@Z", void,
                void *, class Level &, class Dimension &, class ChunkSource &, bool,
                bool)(this, a, b, c, d, e);
    }
#if 0
	MCINLINE bool  setBlock(class BlockPos const & a0,class Block const & a1,int a2,class std::shared_ptr<class BlockActor> a3,struct ActorBlockSyncMessage const * a4){
bool (BlockSource::*rv)(class BlockPos const &,class Block const &,int,class std::shared_ptr<class BlockActor>,struct ActorBlockSyncMessage const *); *((void**)&rv) = dlsym("?setBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@HV?$shared_ptr@VBlockActor@@@std@@PEBUActorBlockSyncMessage@@@Z"); return (this->*rv)(a0,a1,a2,a3,a4);}
	MCINLINE void  fireBlockEntityAboutToBeRemoved(class std::shared_ptr<class BlockActor> a0){
void (BlockSource::*rv)(class std::shared_ptr<class BlockActor>); *((void**)&rv) = dlsym("?fireBlockEntityAboutToBeRemoved@BlockSource@@QEAAXV?$shared_ptr@VBlockActor@@@std@@@Z"); return (this->*rv)(a0);}
//   bad fun  

	MCINLINE class std::vector<class Actor *,class std::allocator<class Actor *> > const &  fetchEntities(class buffer_span<class Actor *> a0,class AABB const & a1){
class std::vector<class Actor *,class std::allocator<class Actor *> > const & (BlockSource::*rv)(class buffer_span<class Actor *>,class AABB const &); *((void**)&rv) = dlsym("?fetchEntities@BlockSource@@QEAAAEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@V?$buffer_span@PEAVActor@@@@AEBVAABB@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE class Block const *  isOnTopOfBlock(class AABB const & a0,class std::function<bool > a1){
class Block const * (BlockSource::*rv)(class AABB const &,class std::function<bool >); *((void**)&rv) = dlsym("?isOnTopOfBlock@BlockSource@@QEAAPEBVBlock@@AEBVAABB@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z"); return (this->*rv)(a0,a1);}
	// ??0BlockSource@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N3@Z
	// BlockSource::BlockSource(class Level &,class Dimension &,class ChunkSource &,bool,bool)
	MCINLINE class gsl::span<class BlockFetchResult const ,-1>  fetchBlocksInCylinder(class BlockPos const & a0,unsigned int a1,unsigned int a2,class std::function<bool > a3){
class gsl::span<class BlockFetchResult const ,-1> (BlockSource::*rv)(class BlockPos const &,unsigned int,unsigned int,class std::function<bool >); *((void**)&rv) = dlsym("?fetchBlocksInCylinder@BlockSource@@QEAA?AV?$span@$$CBVBlockFetchResult@@$0?0@gsl@@AEBVBlockPos@@IIV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z"); return (this->*rv)(a0,a1,a2,a3);}
	MCINLINE class HitResult  clip(class Vec3 const & a0,class Vec3 const & a1,bool a2,bool a3,int a4,bool a5,bool a6){
class HitResult (BlockSource::*rv)(class Vec3 const &,class Vec3 const &,bool,bool,int,bool,bool); *((void**)&rv) = dlsym("?clip@BlockSource@@QEAA?AVHitResult@@AEBVVec3@@0_N1H11@Z"); return (this->*rv)(a0,a1,a2,a3,a4,a5,a6);}
	MCINLINE class AABB  generateUnloadedChunkAABB(class ChunkPos const & a0){
class AABB (BlockSource::*rv)(class ChunkPos const &); *((void**)&rv) = dlsym("?generateUnloadedChunkAABB@BlockSource@@QEAA?AVAABB@@AEBVChunkPos@@@Z"); return (this->*rv)(a0);}
	MCINLINE class gsl::span<class BlockFetchResult const ,-1>  fetchBlocksInBox(class BoundingBox const & a0,class std::function<bool > a1){
class gsl::span<class BlockFetchResult const ,-1> (BlockSource::*rv)(class BoundingBox const &,class std::function<bool >); *((void**)&rv) = dlsym("?fetchBlocksInBox@BlockSource@@QEAA?AV?$span@$$CBVBlockFetchResult@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE class gsl::span<class BlockFetchResult const ,-1>  fetchBlocksInCylinderSorted(class BlockPos const & a0,unsigned int a1,unsigned int a2,class std::function<bool > a3){
class gsl::span<class BlockFetchResult const ,-1> (BlockSource::*rv)(class BlockPos const &,unsigned int,unsigned int,class std::function<bool >); *((void**)&rv) = dlsym("?fetchBlocksInCylinderSorted@BlockSource@@QEAA?AV?$span@$$CBVBlockFetchResult@@$0?0@gsl@@AEBVBlockPos@@IIV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z"); return (this->*rv)(a0,a1,a2,a3);}
	MCINLINE struct Brightness  getRawBrightness(class BlockPos const & a0,bool a1,bool a2)const {
struct Brightness (BlockSource::*rv)(class BlockPos const &,bool,bool)const ; *((void**)&rv) = dlsym("?getRawBrightness@BlockSource@@QEBA?AUBrightness@@AEBVBlockPos@@_N1@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE struct BrightnessPair  getBrightnessPair(class BlockPos const & a0)const {
struct BrightnessPair (BlockSource::*rv)(class BlockPos const &)const ; *((void**)&rv) = dlsym("?getBrightnessPair@BlockSource@@QEBA?AUBrightnessPair@@AEBVBlockPos@@@Z"); return (this->*rv)(a0);}
#endif
};

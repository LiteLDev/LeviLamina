#pragma once
#include "Core.h"
class LevelChunk {
public:
	LevelChunk(const LevelChunk&) = delete;
	LevelChunk& operator=(const LevelChunk&) = delete;
	LevelChunk() = delete;
	#ifdef MCAPI_LEVELCHUNK_EXTRA
	MCINLINE struct SubChunk& _createSubChunk(unsigned __int64 a0, bool a1, enum SubChunkInitMode a2) {
		struct SubChunk& (LevelChunk::*rv)(unsigned __int64, bool, enum SubChunkInitMode);
		*((void**)&rv) = dlsym("?_createSubChunk@LevelChunk@@IEAAAEAUSubChunk@@_K_NW4SubChunkInitMode@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void checkBiomeStates() {
		void (LevelChunk::*rv)();
		*((void**)&rv) = dlsym("?checkBiomeStates@LevelChunk@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void tickBlockEntities(class BlockSource& a0) {
		void (LevelChunk::*rv)(class BlockSource&);
		*((void**)&rv) = dlsym("?tickBlockEntities@LevelChunk@@QEAAXAEAVBlockSource@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void deserializeBlockEntities(class IDataInput& a0) {
		void (LevelChunk::*rv)(class IDataInput&);
		*((void**)&rv) = dlsym("?deserializeBlockEntities@LevelChunk@@QEAAXAEAVIDataInput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void setUnsaved() {
		void (LevelChunk::*rv)();
		*((void**)&rv) = dlsym("?setUnsaved@LevelChunk@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void getEntities(enum ActorType a0, class AABB const& a1, class std::vector<class Actor*, class std::allocator<class Actor*>>& a2, bool a3) const {
		void (LevelChunk::*rv)(enum ActorType, class AABB const&, class std::vector<class Actor*, class std::allocator<class Actor*>>&, bool) const;
		*((void**)&rv) = dlsym("?getEntities@LevelChunk@@QEBAXW4ActorType@@AEBVAABB@@AEAV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@_N@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE void setupRedstoneCircuit(class BlockSource& a0) {
		void (LevelChunk::*rv)(class BlockSource&);
		*((void**)&rv) = dlsym("?setupRedstoneCircuit@LevelChunk@@QEAAXAEAVBlockSource@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool hasEntity(class Actor& a0) {
		bool (LevelChunk::*rv)(class Actor&);
		*((void**)&rv) = dlsym("?hasEntity@LevelChunk@@QEAA_NAEAVActor@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool serializeHardcodedSpawners(class IDataOutput& a0) const {
		bool (LevelChunk::*rv)(class IDataOutput&) const;
		*((void**)&rv) = dlsym("?serializeHardcodedSpawners@LevelChunk@@QEBA_NAEAVIDataOutput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void _deserializeEntity(class BlockSource& a0, class IDataInput& a1, class std::vector<struct ActorLink, class std::allocator<struct ActorLink>>& a2) {
		void (LevelChunk::*rv)(class BlockSource&, class IDataInput&, class std::vector<struct ActorLink, class std::allocator<struct ActorLink>>&);
		*((void**)&rv) = dlsym("?_deserializeEntity@LevelChunk@@IEAAXAEAVBlockSource@@AEAVIDataInput@@AEAV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void fetchBlocks(class BlockPos const& a0, class BlockVolume& a1) const {
		void (LevelChunk::*rv)(class BlockPos const&, class BlockVolume&) const;
		*((void**)&rv) = dlsym("?fetchBlocks@LevelChunk@@QEBAXAEBVBlockPos@@AEAVBlockVolume@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool needsSaving(int a0, int a1) const {
		bool (LevelChunk::*rv)(int, int) const;
		*((void**)&rv) = dlsym("?needsSaving@LevelChunk@@QEBA_NHH@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void removeHardcodedSpawningArea(enum HardcodedSpawnAreaType a0) {
		void (LevelChunk::*rv)(enum HardcodedSpawnAreaType);
		*((void**)&rv) = dlsym("?removeHardcodedSpawningArea@LevelChunk@@QEAAXW4HardcodedSpawnAreaType@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE signed char getCachedTemperatureNoise(class ChunkBlockPos const& a0) {
		signed char (LevelChunk::*rv)(class ChunkBlockPos const&);
		*((void**)&rv) = dlsym("?getCachedTemperatureNoise@LevelChunk@@QEAACAEBVChunkBlockPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void tick(class BlockSource& a0, struct Tick const& a1) {
		void (LevelChunk::*rv)(class BlockSource&, struct Tick const&);
		*((void**)&rv) = dlsym("?tick@LevelChunk@@QEAAXAEAVBlockSource@@AEBUTick@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void _removeCallbacks(class ChunkBlockPos const& a0, class Block const& a1, class Block const& a2, class BlockSource* a3) {
		void (LevelChunk::*rv)(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*);
		*((void**)&rv) = dlsym("?_removeCallbacks@LevelChunk@@IEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE class Block const& getBlock(class ChunkBlockPos const& a0) const {
		class Block const& (LevelChunk::*rv)(class ChunkBlockPos const&)const;
		*((void**)&rv) = dlsym("?getBlock@LevelChunk@@QEBAAEBVBlock@@AEBVChunkBlockPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void addHardcodedSpawningArea(class BoundingBox const& a0, enum HardcodedSpawnAreaType a1) {
		void (LevelChunk::*rv)(class BoundingBox const&, enum HardcodedSpawnAreaType);
		*((void**)&rv) = dlsym("?addHardcodedSpawningArea@LevelChunk@@QEAAXAEBVBoundingBox@@W4HardcodedSpawnAreaType@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool generateOriginalLighting(class ChunkViewSource& a0, bool a1) {
		bool (LevelChunk::*rv)(class ChunkViewSource&, bool);
		*((void**)&rv) = dlsym("?generateOriginalLighting@LevelChunk@@QEAA_NAEAVChunkViewSource@@_N@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void _lightingCallbacks(class ChunkBlockPos const& a0, class Block const& a1, class Block const& a2, class BlockSource* a3) {
		void (LevelChunk::*rv)(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*);
		*((void**)&rv) = dlsym("?_lightingCallbacks@LevelChunk@@IEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE void _generateOriginalLightingSubChunk(class BlockSource& a0, unsigned __int64 a1, bool a2) {
		void (LevelChunk::*rv)(class BlockSource&, unsigned __int64, bool);
		*((void**)&rv) = dlsym("?_generateOriginalLightingSubChunk@LevelChunk@@IEAAXAEAVBlockSource@@_K_N@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void serializeBlockEntities(class IDataOutput& a0) const {
		void (LevelChunk::*rv)(class IDataOutput&) const;
		*((void**)&rv) = dlsym("?serializeBlockEntities@LevelChunk@@QEBAXAEAVIDataOutput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Biome& getBiome(class ChunkBlockPos const& a0) const {
		class Biome& (LevelChunk::*rv)(class ChunkBlockPos const&)const;
		*((void**)&rv) = dlsym("?getBiome@LevelChunk@@QEBAAEAVBiome@@AEBVChunkBlockPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class BlockPos findLightningTarget(class BlockPos const& a0, class BlockSource& a1) {
		class BlockPos (LevelChunk::*rv)(class BlockPos const&, class BlockSource&);
		*((void**)&rv) = dlsym("?findLightningTarget@LevelChunk@@QEAA?AVBlockPos@@AEBV2@AEAVBlockSource@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void setBiome(class Biome const& a0, class ChunkBlockPos const& a1) {
		void (LevelChunk::*rv)(class Biome const&, class ChunkBlockPos const&);
		*((void**)&rv) = dlsym("?setBiome@LevelChunk@@QEAAXAEBVBiome@@AEBVChunkBlockPos@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class Block const& getExtraBlock(class ChunkBlockPos const& a0) const {
		class Block const& (LevelChunk::*rv)(class ChunkBlockPos const&)const;
		*((void**)&rv) = dlsym("?getExtraBlock@LevelChunk@@QEBAAEBVBlock@@AEBVChunkBlockPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void serializeRandomTicks(class IDataOutput& a0) const {
		void (LevelChunk::*rv)(class IDataOutput&) const;
		*((void**)&rv) = dlsym("?serializeRandomTicks@LevelChunk@@QEBAXAEAVIDataOutput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool checkSeasonsPostProcessDirty() {
		bool (LevelChunk::*rv)();
		*((void**)&rv) = dlsym("?checkSeasonsPostProcessDirty@LevelChunk@@QEAA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool serializeBorderBlocks(class IDataOutput& a0) const {
		bool (LevelChunk::*rv)(class IDataOutput&) const;
		*((void**)&rv) = dlsym("?serializeBorderBlocks@LevelChunk@@QEBA_NAEAVIDataOutput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void tickBlocks(class BlockSource& a0) {
		void (LevelChunk::*rv)(class BlockSource&);
		*((void**)&rv) = dlsym("?tickBlocks@LevelChunk@@QEAAXAEAVBlockSource@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void serializeEntities(class IDataOutput& a0) const {
		void (LevelChunk::*rv)(class IDataOutput&) const;
		*((void**)&rv) = dlsym("?serializeEntities@LevelChunk@@QEBAXAEAVIDataOutput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE short getAboveTopSolidBlock(class ChunkBlockPos const& a0, bool a1, bool a2, bool a3) {
		short (LevelChunk::*rv)(class ChunkBlockPos const&, bool, bool, bool);
		*((void**)&rv) = dlsym("?getAboveTopSolidBlock@LevelChunk@@QEAAFAEBVChunkBlockPos@@_N11@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE class BlockPos const getTopRainBlockPos(class ChunkBlockPos const& a0) {
		class BlockPos const (LevelChunk::*rv)(class ChunkBlockPos const&);
		*((void**)&rv) = dlsym("?getTopRainBlockPos@LevelChunk@@QEAA?BVBlockPos@@AEBVChunkBlockPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Block const& setExtraBlock(class ChunkBlockPos const& a0, class Block const& a1, class BlockSource* a2) {
		class Block const& (LevelChunk::*rv)(class ChunkBlockPos const&, class Block const&, class BlockSource*);
		*((void**)&rv) = dlsym("?setExtraBlock@LevelChunk@@QEAAAEBVBlock@@AEBVChunkBlockPos@@AEBV2@PEAVBlockSource@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void recomputeHeightMap(bool a0) {
		void (LevelChunk::*rv)(bool);
		*((void**)&rv) = dlsym("?recomputeHeightMap@LevelChunk@@QEAAX_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class BlockActor* getBlockEntity(class ChunkBlockPos const& a0) {
		class BlockActor* (LevelChunk::*rv)(class ChunkBlockPos const&);
		*((void**)&rv) = dlsym("?getBlockEntity@LevelChunk@@QEAAPEAVBlockActor@@AEBVChunkBlockPos@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void legacyDeserializeTerrain(class IDataInput& a0) {
		void (LevelChunk::*rv)(class IDataInput&);
		*((void**)&rv) = dlsym("?legacyDeserializeTerrain@LevelChunk@@QEAAXAEAVIDataInput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void setSaved() {
		void (LevelChunk::*rv)();
		*((void**)&rv) = dlsym("?setSaved@LevelChunk@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void runtimeRelightSubchunk(class BlockSource& a0, unsigned __int64 a1, class std::vector<struct SubChunkLightUpdate, class std::allocator<struct SubChunkLightUpdate>>* a2, class std::vector<class BlockPos, class std::allocator<class BlockPos>>& a3) {
		void (LevelChunk::*rv)(class BlockSource&, unsigned __int64, class std::vector<struct SubChunkLightUpdate, class std::allocator<struct SubChunkLightUpdate>>*, class std::vector<class BlockPos, class std::allocator<class BlockPos>>&);
		*((void**)&rv) = dlsym("?runtimeRelightSubchunk@LevelChunk@@QEAAXAEAVBlockSource@@_KPEAV?$vector@USubChunkLightUpdate@@V?$allocator@USubChunkLightUpdate@@@std@@@std@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@4@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool applySeasonsPostProcess(class BlockSource& a0) {
		bool (LevelChunk::*rv)(class BlockSource&);
		*((void**)&rv) = dlsym("?applySeasonsPostProcess@LevelChunk@@QEAA_NAEAVBlockSource@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void legacyDeserializeBlockExtraData(class IDataInput& a0) {
		void (LevelChunk::*rv)(class IDataInput&);
		*((void**)&rv) = dlsym("?legacyDeserializeBlockExtraData@LevelChunk@@QEAAXAEAVIDataInput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool _recalcHeight(class ChunkBlockPos const& a0, class BlockSource* a1) {
		bool (LevelChunk::*rv)(class ChunkBlockPos const&, class BlockSource*);
		*((void**)&rv) = dlsym("?_recalcHeight@LevelChunk@@IEAA_NAEBVChunkBlockPos@@PEAVBlockSource@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class LevelChunk& operator=(class LevelChunk&& a0) {
		class LevelChunk& (LevelChunk::*rv)(class LevelChunk &&);
		*((void**)&rv) = dlsym("??4LevelChunk@@QEAAAEAV0@$$QEAV0@@Z");
		return (this->*rv)(std::forward<LevelChunk>(a0));
	}
#endif

#if 0
	MCINLINE void  _placeBlockEntity(class std::shared_ptr<class BlockActor> a0){
void (LevelChunk::*rv)(class std::shared_ptr<class BlockActor>); *((void**)&rv) = dlsym("?_placeBlockEntity@LevelChunk@@IEAAXV?$shared_ptr@VBlockActor@@@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE class std::unique_ptr<class Actor,struct std::default_delete<class Actor> >  removeEntity(class Actor & a0){
class std::unique_ptr<class Actor,struct std::default_delete<class Actor> > (LevelChunk::*rv)(class Actor &); *((void**)&rv) = dlsym("?removeEntity@LevelChunk@@QEAA?AV?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@AEAVActor@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  setPreWorldGenHeightMap(class std::unique_ptr<class std::vector<short,class std::allocator<short> >,struct std::default_delete<class std::vector<short,class std::allocator<short> > > > a0){
void (LevelChunk::*rv)(class std::unique_ptr<class std::vector<short,class std::allocator<short> >,struct std::default_delete<class std::vector<short,class std::allocator<short> > > >); *((void**)&rv) = dlsym("?setPreWorldGenHeightMap@LevelChunk@@QEAAXV?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  placeCallbacks(class ChunkBlockPos const & a0,class Block const & a1,class Block const & a2,class BlockSource * a3,class std::shared_ptr<class BlockActor> a4){
void (LevelChunk::*rv)(class ChunkBlockPos const &,class Block const &,class Block const &,class BlockSource *,class std::shared_ptr<class BlockActor>); *((void**)&rv) = dlsym("?placeCallbacks@LevelChunk@@QEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@V?$shared_ptr@VBlockActor@@@std@@@Z"); return (this->*rv)(a0,a1,a2,a3,a4);}
	MCINLINE class std::shared_ptr<class BlockActor>  removeBlockEntity(class BlockPos const & a0){
class std::shared_ptr<class BlockActor> (LevelChunk::*rv)(class BlockPos const &); *((void**)&rv) = dlsym("?removeBlockEntity@LevelChunk@@QEAA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  addEntity(class std::unique_ptr<class Actor,struct std::default_delete<class Actor> > a0){
void (LevelChunk::*rv)(class std::unique_ptr<class Actor,struct std::default_delete<class Actor> >); *((void**)&rv) = dlsym("?addEntity@LevelChunk@@QEAAXV?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE class Block const &  setBlock(class ChunkBlockPos const & a0,class Block const & a1,class BlockSource * a2,class std::shared_ptr<class BlockActor> a3){
class Block const & (LevelChunk::*rv)(class ChunkBlockPos const &,class Block const &,class BlockSource *,class std::shared_ptr<class BlockActor>); *((void**)&rv) = dlsym("?setBlock@LevelChunk@@QEAAAEBVBlock@@AEBVChunkBlockPos@@AEBV2@PEAVBlockSource@@V?$shared_ptr@VBlockActor@@@std@@@Z"); return (this->*rv)(a0,a1,a2,a3);}
//   bad fun  

	MCINLINE void  _reassignSubChunks(class buffer_span_mut<struct SubChunk> a0){
void (LevelChunk::*rv)(class buffer_span_mut<struct SubChunk>); *((void**)&rv) = dlsym("?_reassignSubChunks@LevelChunk@@IEAAXV?$buffer_span_mut@USubChunk@@@@@Z"); return (this->*rv)(a0);}
	// ??0LevelChunk@@QEAA@AEAVDimension@@AEBVChunkPos@@_N@Z
	// LevelChunk::LevelChunk(class Dimension &,class ChunkPos const &,bool)
	MCINLINE void  setAllBlocks(class buffer_span<class Block const *> a0,short a1){
void (LevelChunk::*rv)(class buffer_span<class Block const *>,short); *((void**)&rv) = dlsym("?setAllBlocks@LevelChunk@@QEAAXV?$buffer_span@PEBVBlock@@@@F@Z"); return (this->*rv)(a0,a1);}
	MCINLINE struct BrightnessPair  getBrightness(class ChunkBlockPos const & a0)const {
struct BrightnessPair (LevelChunk::*rv)(class ChunkBlockPos const &)const ; *((void**)&rv) = dlsym("?getBrightness@LevelChunk@@QEBA?AUBrightnessPair@@AEBVChunkBlockPos@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  setAllLegacyBlockIDAndData(class buffer_span<struct BlockID> a0,class buffer_span<struct NibblePair> a1){
void (LevelChunk::*rv)(class buffer_span<struct BlockID>,class buffer_span<struct NibblePair>); *((void**)&rv) = dlsym("?setAllLegacyBlockIDAndData@LevelChunk@@QEAAXV?$buffer_span@UBlockID@@@@V?$buffer_span@UNibblePair@@@@@Z"); return (this->*rv)(a0,a1);}
#endif
};

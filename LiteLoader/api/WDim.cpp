#include <lbpch.h>
#include<api\types\types.h>
#include<mc/Dimension.h>
#include<mc/Level.h>
#include<mc/BlockSource.h>

static std::unordered_map<void*, int> dim_id;
static uintptr_t bs_dim;
LIAPI WDim WBlockSource::getDim() {
	return *(WDim*)((uintptr_t)v + bs_dim);
}
LIAPI int WDim::getID() {
	return dim_id[v];
}
THook(void*, "??0BlockSource@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N3@Z", void* a0, void* a1, void* a2_dim, void* a3, bool a4, bool a5) {
	auto rv = original(a0, a1, a2_dim, a3, a4, a5);
	if (!bs_dim) {
		void** pfind = (void**)a0;
		for (int poff = 1; poff < 8; ++poff) {
			if (pfind[poff] == a2_dim) {
				if (bs_dim) {
					printf("bs_dim wtf %lld %d\n", bs_dim, poff * 8);
				}
				bs_dim = (size_t)poff * 8;
			}
		}
	}
	return rv;
}
//THook(void*, "??0Dimension@@QEAA@AEAVLevel@@V?$AutomaticID@VDimension@@H@@FAEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z", void* a0_dim, void* a1, int a2_id, void* a3, void* a4, void* a5) {
//	auto rv = original(a0_dim, a1, a2_id, a3, a4, a5);
//	dim_id[a0_dim] = a2_id;
//	return rv;
//}
#include<debug/MemSearcher.h>
static MSearcherEx<BlockSource*> pDim_BS;
LIAPI BlockSource& WDim::getBlockSource_() {
	if (!pDim_BS.myOff) {
		pDim_BS.init(
			v, [](void* x) {
				return (MreadPtr_Compare((const void***)x, SYM("??_7BlockSource@@6B@")));
			},
			72);
	}
	return **pDim_BS.get(v);
	#if 0
		return *dAccess<BlockSource*, 72>(v); //TODO auto search
	#endif
}
LIAPI void WDim::setBlock(int x, int y, int z, Block const& blk) {
	getBlockSource_().setBlock({ x, y, z }, blk, 3, nullptr);
	//stub
}
LIAPI struct WBlock WDim::getBlock(int x, int y, int z) {
	return WBlock(getBlockSource_().getBlock(x, y, z));
}
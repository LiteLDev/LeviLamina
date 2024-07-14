//#pragma once
//
//#include "ll/api/utils/RandomUtils.h"
//
//#include "ll/api/Logger.h"
//#include "ll/api/memory/Hook.h"
//#include "ll/api/memory/Memory.h"
//#include "ll/api/service/Bedrock.h"
//#include "ll/core/LeviLamina.h"
//#include "mc/common/wrapper/WeakRef.h"
//#include "mc/common/wrapper/optional_ref.h"
//#include "mc/deps/core/common/bedrock/Intrusive.h"
//#include "mc/deps/core/data/DividedPos2d.h"
//#include "mc/deps/core/debug/log/ContentLog.h"
//#include "mc/deps/core/mce/Math.h"
//#include "mc/deps/core/string/HashedString.h"
//#include "mc/deps/core/utility/buffer_span.h"
//#include "mc/deps/json/Reader.h"
//#include "mc/deps/json/Value.h"
//#include "mc/deps/json/Writer.h"
//#include "mc/entity/systems/common/BiomeSurfaceSystem.h"
//#include "mc/server/commands/CommandOutput.h"
//#include "mc/util/Random.h"
//#include "mc/util/random/XoroshiroPositionalRandomFactory.h"
//#include "mc/world/actor/player/Player.h"
//#include "mc/world/level/BlockPalette.h"
//#include "mc/world/level/BlockSource.h"
//#include "mc/world/level/BlockTickingQueue.h"
//#include "mc/world/level/BlockVolumeTarget.h"
//#include "mc/world/level/ChunkBlockPos.h"
//#include "mc/world/level/ChunkPos.h"
//#include "mc/world/level/DimensionConversionData.h"
//#include "mc/world/level/Level.h"
//#include "mc/world/level/MolangVariableMap.h"
//#include "mc/world/level/WorldBlockTarget.h"
//#include "mc/world/level/WorldGenContext.h"
//#include "mc/world/level/biome/Biome.h"
//#include "mc/world/level/biome/VanillaBiomeNames.h"
//#include "mc/world/level/biome/registry/BiomeRegistry.h"
//#include "mc/world/level/biome/source/BiomeArea.h"
//#include "mc/world/level/biome/source/FixedBiomeSource.h"
//#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
//#include "mc/world/level/biome/surface/PerlinNoise.h"
//#include "mc/world/level/biome/surface/PerlinSimplexNoise.h"
//#include "mc/world/level/block/Block.h"
//#include "mc/world/level/block/BlockVolume.h"
//#include "mc/world/level/block/actor/EndGatewayBlockActor.h"
//#include "mc/world/level/block/registry/BlockTypeRegistry.h"
//#include "mc/world/level/block/utils/BedrockBlockNames.h"
//#include "mc/world/level/block/utils/VanillaBlockTypeIds.h"
//#include "mc/world/level/chunk/ChunkGeneratorStructureState.h"
//#include "mc/world/level/chunk/ChunkViewSource.h"
//#include "mc/world/level/chunk/LevelChunk.h"
//#include "mc/world/level/chunk/LevelChunkBlockActorAccessToken.h"
//#include "mc/world/level/chunk/PostprocessingManager.h"
//#include "mc/world/level/chunk/VanillaLevelChunkUpgrade.h"
//#include "mc/world/level/dimension/Dimension.h"
//#include "mc/world/level/dimension/DimensionBrightnessRamp.h"
//#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
//#include "mc/world/level/dimension/OverworldDimension.h"
//#include "mc/world/level/dimension/VanillaDimensions.h"
//#include "mc/world/level/levelgen/WorldGenerator.h"
//#include "mc/world/level/levelgen/feature/BambooFeature.h"
//#include "mc/world/level/levelgen/feature/DesertWellFeature.h"
//#include "mc/world/level/levelgen/feature/FlowerFeature.h"
//#include "mc/world/level/levelgen/feature/LakeFeature.h"
//#include "mc/world/level/levelgen/feature/SpikeFeature.h"
//#include "mc/world/level/levelgen/feature/VanillaTreeFeature.h"
//#include "mc/world/level/levelgen/feature/gamerefs_feature/FeatureRefTraits.h"
//#include "mc/world/level/levelgen/feature/helpers/RenderParams.h"
//#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"
//#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
//#include "mc/world/level/levelgen/flat/FlatWorldGeneratorOptions.h"
//#include "mc/world/level/levelgen/structure/EndCityFeature.h"
//#include "mc/world/level/levelgen/structure/StructureFeatureRegistry.h"
//#include "mc/world/level/levelgen/structure/StructureFeatureType.h"
//#include "mc/world/level/levelgen/structure/StructureSetRegistry.h"
//#include "mc/world/level/levelgen/structure/VillageFeature.h"
//#include "mc/world/level/levelgen/v1/Aquifer.h"
//#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"
//#include "mc/world/level/levelgen/v1/HardcodedSpawnAreaRegistry.h"
//#include "mc/world/level/levelgen/v1/NetherGenerator.h"
//#include "mc/world/level/levelgen/v1/OverworldGenerator2d.h"
//#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"
//#include "mc/world/level/levelgen/v1/TheEndGenerator.h"
//#include "mc/world/level/levelgen/v1/WorldGenCache.h"
//#include "mc/world/level/storage/LevelData.h"
//
//#include "mc/entity/systems/common/BiomeDecorationSystem.h"
//#include "mc/resources/VanillaGameVersions.h"
//#include "mc/world/components/FeatureHelper.h"
//#include <mc/world/level/levelgen/feature/EndIslandFeature.h>
//#include <mc/world/level/levelgen/feature/helpers/TheEndSpikeHelper.h>
//#include <numeric>
//
//// namespace Bedrock {
//// namespace Threading {
//// template <class _Ty, class _Alloc>
//// class InstancedThreadLocalBase {
//// protected:
////     void _debugAddThread();
////     void _debugRemoveThread();
//// };
////
//// template <class _Ty, class _Alloc = std::allocator<_Ty>>
//// class InstancedThreadLocal : public InstancedThreadLocalBase {
////     Bedrock::Threading::InstancedThreadLocal<_Ty, _Alloc>::Constructor mConstructor;
////
////     typedef std::function<void(_Ty)> Constructor;
////
////     Bedrock::Threading::InstancedThreadLocal<_Ty, _Alloc>::ItemList mItems;
////
////     typedef Bedrock::Intrusive::list<
////         Bedrock::Threading::InstancedThreadLocal<_Ty, _Alloc>::Item,
////         Bedrock::Intrusive::list_base_hook<void>,
////         Bedrock::Intrusive::list_base_hook<void>>
////         ItemList;
////
////     struct Item : list_base_hook<void> {
////         std::aligned_storage<262144UL, 8UL>::type mData;
////         _Ty*                                      data();
////     };
////
////     MutexType                          mMutex;
////     Bedrock::Threading::CustomTLS::Key mKey;
////     bool                               mInitialized;
////
//// public:
////     InstancedThreadLocal();
////     ~InstancedThreadLocal();
////     _Ty&                                                                get();
////     _Ty&                                                                operator*();
////     _Ty*                                                                operator->();
////     Bedrock::Threading::InstancedThreadLocal<_Ty, _Alloc>::IteratorType begin();
////
//// private:
//// public:
////     Bedrock::Threading::InstancedThreadLocal<_Ty, _Alloc>::IteratorType end();
////
//// private:
////     void _init();
////     void _destroy();
////     _Ty* _load();
////     typedef std::allocator_traits<_Alloc>::rebind_alloc<Bedrock::Threading::InstancedThreadLocal<_Ty, _Alloc>::Item>
////         AllocatorType;
//// };
////
//// } // namespace Threading
//// } // namespace Bedrock
//
//
//class MyWorldGenerator : public WorldGenerator {
//public:
//    struct ThreadData {
//        std::array<const Block*, 32768UL> mBlockBuffer;
//    };
//
//public:
//    std::unique_ptr<PerlinNoise>        mLPerlinNoise1;
//    std::unique_ptr<PerlinNoise>        mLPerlinNoise2;
//    std::unique_ptr<PerlinNoise>        mPerlinNoise1;
//    std::unique_ptr<SimplexNoise>       mIslandNoise;
//    std::unique_ptr<PerlinSimplexNoise> mMaterialAdjNoise;
//    // Bedrock::Threading::InstancedThreadLocal<TheEndGenerator::ThreadData>
//    char                              mGeneratorHelpersPool[168];
//    std::unique_ptr<FixedBiomeSource> mBiomeSource;
//    Random                            mRandom;
//    uint                              mSeed;
//
//public:
//    MyWorldGenerator(Dimension& dimension, uint seed) : WorldGenerator(dimension), mSeed(seed) {
//        mRandom.mRandom.mObject._setSeed(seed);
//        mLPerlinNoise1    = std::make_unique<PerlinNoise>(mRandom, 16, 0);
//        mLPerlinNoise2    = std::make_unique<PerlinNoise>(mRandom, 16, 0);
//        mPerlinNoise1     = std::make_unique<PerlinNoise>(mRandom, 8, 0);
//        mIslandNoise      = std::make_unique<SimplexNoise>(mRandom, 0);
//        mMaterialAdjNoise = std::make_unique<PerlinSimplexNoise>(mRandom, 3, 0);
//        mBiomeSource      = std::make_unique<FixedBiomeSource>(
//            *dimension.getLevel().getBiomeRegistry().lookupByHash(VanillaBiomeNames::TheEnd)
//        );
//
//        for (auto& v : getStructureFeatureRegistry().mStructureFeatures) {
//            v->initMobSpawnTypes(*mHardcodedSpawnTypes);
//        }
//    }
//
//    virtual bool isNaturalDimension() const { return 0; }
//
//
//public:
//    bool postProcess(ChunkViewSource& neighborhood) {
//        ChunkPos chunkPos;
//        chunkPos.x      = neighborhood.getArea().mBounds.min.x;
//        chunkPos.z      = neighborhood.getArea().mBounds.min.z;
//        auto levelChunk = neighborhood.getExistingChunk(chunkPos);
//
//        auto lockChunk =
//            levelChunk->getDimension().mPostProcessingManager->tryLock(levelChunk->getPosition(), neighborhood);
//
//        if (!lockChunk) {
//            return false;
//        }
//        BlockSource blockSource(getLevel(), neighborhood.getDimension(), neighborhood, false, true, true);
//        auto        chunkPosL = levelChunk->getPosition();
//        mRandom.mRandom.mObject._setSeed(mSeed);
//        auto one = 2 * (mRandom.nextInt() / 2) + 1;
//        auto two = 2 * (mRandom.nextInt() / 2) + 1;
//        mRandom.mRandom.mObject._setSeed(mSeed ^ (chunkPosL.x * one + chunkPosL.z * two));
//        WorldGenerator::postProcessStructureFeatures(blockSource, mRandom, chunkPosL.x, chunkPosL.z);
//        WorldGenerator::postProcessStructures(blockSource, mRandom, chunkPosL.x, chunkPosL.z);
//        return true;
//        //    int                                                            v5;               // edx
//        //    bool                                                           Has_value;        // al
//        //    unsigned __int8                                                v9;               // r14
//        //    __int64                                                        v10;              // rsi
//        //    std::string*                                                   Ptr;              // rbx
//        //    unsigned int                                                   v16;              // edi
//        //    unsigned int                                                   v17;              // edi
//        //    std::string*                                                   v18;              // rbx
//        //    SpikeFeature::EndSpike*                                        Myfirst;          // rdi
//        //    SpikeFeature::EndSpike*                                        Mylast;           // r14
//        //    int                                                            CenterZ;          // ebx
//        //    unsigned __int64                                               v22;              // rdx
//        //    SpikeFeature::EndSpike*                                        v23;              // rax
//        //    unsigned __int64                                               v24;              // r8
//        //    unsigned __int64                                               v25;              // r8
//        //    unsigned int                                                   v26;              // eax
//        //    std::string*                                                   v27;              // rbx
//        //    unsigned int                                                   v28;              // edi
//        //    unsigned int                                                   v29;              // ebx
//        //    char                                                           v30;              // al
//        //    unsigned __int64                                               v31;              // r8
//        //    std::string*                                                   v32;              // rbx
//        //    signed int                                                     v33;              // r13d
//        //    signed int                                                     v34;              // r12d
//        //    unsigned int                                                   v35;              // edi
//        //    unsigned int                                                   v36;              // esi
//        //    __int16                                                        Heightmap;        // ax
//        //    int                                                            v38;              // r14d
//        //    BlockLegacy*                                                   v39;              // rcx
//        //    unsigned __int64                                               Hash;             // rbx
//        //    unsigned int                                                   v41;              // eax
//        //    unsigned int                                                   v42;              // ebx
//        //    unsigned int                                                   v43;              // edi
//        //    __int16                                                        v44;              // ax
//        //    int                                                            v45;              // r14d
//        //    unsigned int                                                   v46;              // eax
//        //    BlockActor*                                                    BlockEntity;      // rax
//        //    EndGatewayBlockActor*                                          v48;              // rbx
//        //    const BlockPos*                                                v49;              // rax
//        //    std::string*                                                   v50;              // rbx
//        //    BlockTickingQueue*                                             TickQueue;        // rax
//        //    BlockTickingQueue*                                             v52;              // rax
//        //    LevelChunkBlockActorAccessToken*                               mChunk;           // rbx
//        //    LevelChunkBlockActorAccessToken*                               v54;              // rdi
//        //    unsigned __int64                                               v55;              // rdx
//        //    LevelChunkBlockActorAccessToken*                               v56;              // rax
//        //    unsigned __int64                                               v57;              // r8
//        //    unsigned __int64                                               v58;              // r8
//        //    PostprocessingManager::LockedChunk*                            v59;              // rcx
//        //    PostprocessingManager::LockedChunk*                            v60;              // rsi
//        //    Bedrock::Threading::UniqueLock<std::mutex>*                    p_mChunkLock;     // rdi
//        //    volatile signed __int32*                                       v62;              // rbx
//        //    unsigned __int64                                               v63;              // rdx
//        //    PostprocessingManager::LockedChunk*                            v64;              // rax
//        //    std::_Ref_count_base*                                          Rep;              // rbx
//        //    BlockPos                                                       pos;              // [rsp+40h] [rbp-C0h]
//        //    BYREF BlockPos                                                       v83;              // [rsp+4Ch]
//        //    [rbp-B4h] BYREF BlockPos                                                       v84;              //
//        //    [rsp+58h] [rbp-A8h] BYREF BlockPos                                                       v85; // [rsp+64h]
//        //    [rbp-9Ch] BYREF BlockPos                                                       target;           //
//        //    [rsp+70h] [rbp-90h] BYREF BlockPos                                                       v87; // [rsp+7Ch]
//        //    [rbp-84h] BYREF TheEndGenerator*                                               v88;              //
//        //    [rsp+88h] [rbp-78h] BYREF Feature*                                                        v89; //
//        //    [rsp+98h] [rbp-68h] BYREF std::string                                                    name; //
//        //    [rsp+B0h] [rbp-50h] BYREF std::string                                                    v91; // [rsp+D0h]
//        //    [rbp-30h] BYREF std::string                                                    v92;              //
//        //    [rsp+F0h] [rbp-10h] BYREF std::string                                                    v93; //
//        //    [rsp+110h] [rbp+10h] BYREF std::string                                                    v94; //
//        //    [rsp+130h] [rbp+30h] BYREF BlockPos                                                       gatewayPos; //
//        //    [rsp+160h] [rbp+60h] BYREF ChunkPos                                                       centerPos; //
//        //    [rsp+180h] [rbp+80h] BYREF BlockPos featurePlacement; // [rsp+188h] [rbp+88h] BYREF
//        //    std::vector<SpikeFeature::EndSpike>                            spikes;           // [rsp+1B0h] [rbp+B0h]
//        //    BYREF EndIslandFeature                                               endIslands;       // [rsp+1C8h]
//        //    [rbp+C8h] BYREF BlockTickingQueue                                              randomTickQueue;  //
//        //    [rsp+200h] [rbp+100h] BYREF BlockTickingQueue                                              instaTickQueue;
//        //    // [rsp+250h] [rbp+150h] BYREF SpikeFeature                       spikeFeature; // [rsp+2F0h] [rbp+1F0h]
//        //    BYREF Random                             v113;                                         // [rsp+4D0h]
//        //    [rbp+3D0h] BYREF
//
//        //    centerPos.x         = neighborhood.getArea().mBounds.min.x + 1;
//        //    centerPos.z         = neighborhood.getArea().mBounds.min.z + 1;
//        //    auto     levelChunk = neighborhood.getExistingChunk(centerPos);
//        //    ChunkPos Position   = levelChunk->getPosition();
//        //    if (neighborhood.getArea().mBounds.mVolume != 9) {
//        //    }
//        //    Dimension& dimension = levelChunk->getDimension();
//
//        //    std::optional<std::vector<PostprocessingManager::LockedChunk>> ownsNeighborhood =
//        //        dimension.mPostProcessingManager->tryLock(Position, neighborhood);
//
//        //    if (ownsNeighborhood.has_value()) {
//        //        std::vector<LevelChunkBlockActorAccessToken> blockEntityLock = neighborhood.enableBlockEntityAccess();
//        //        Dimension&                                   ndimension      = neighborhood.getDimension();
//        //        Level&                                       level           = neighborhood.getLevel();
//        //        BlockSource                                  source(level, ndimension, neighborhood, 0, 1, 1);
//        //        source.setTickingQueue(instaTickQueue);
//        //        source.setRandomTickingQueue(&source, &randomTickQueue);
//        //        BlockPos min   = levelChunk->getMin();
//        //        Biome    biome = source.getBiome(min);
//        //        BlockPos origin(Position, 0);
//        //        LODWORD(v12) = -1724254968 * Position->x - 245998635 * Position->z;
//        //        v113.IRandom::__vftable =
//        //            (Random_vtbl*)IRandom::`vftable'; Bedrock::EnableNonOwnerReferences::EnableNonOwnerReferences(
//        //                &v113.Bedrock::EnableNonOwnerReferences
//        //            );
//        //        v113.IRandom::__vftable = (Random_vtbl*)Random::`vftable '{for `IRandom'
//        //    };
//        //    v113.Bedrock::EnableNonOwnerReferences::__vftable =
//        //        (Bedrock::EnableNonOwnerReferences_vtbl*)Random::`vftable '{for `Bedrock::EnableNonOwnerReferences'
//        //
//        // v113.mRandom.mObject.__vftable =
//        //    (Core::Random_vtbl*)Core::Random::`vftable'; v113.mRandom.mObject.mFakeUniformRandomInt = 0;
//        // v113.mRandom.mObject.mTest_OnlyUsedDeterministically                                        = 0;
//        // Core::Random::_setSeed(&v113.mRandom.mObject, (unsigned int)v12);
//        // v113.mRandom.mThreadIdInitialized     = 0;
//        //*(_QWORD*)&v113.mRandom.mThreadId._Id = 0i64;
//        // LODWORD(v12)                          = this->mLevel->getSeed(this->mLevel);
//        // Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        // Core::Random::_setSeed(&v113.mRandom.mObject, (unsigned int)v12);
//        // Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        // v16 = ((Core::Random::_genRandInt32(&v113.mRandom.mObject) >> 1) & 0xFFFFFFFE) + 1;
//        // Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        // LODWORD(v12) = ((Core::Random::_genRandInt32(&v113.mRandom.mObject) >> 1) & 0xFFFFFFFE) + 1;
//        // v17          = ((__int64(__fastcall*)(Level*))this->mLevel->getSeed)(this->mLevel)
//        //    ^ (Position->z * (_DWORD)v12 + Position->x * v16);
//        // Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        // Core::Random::_setSeed(&v113.mRandom.mObject, v17);
//        // WorldGenerator::postProcessStructureFeatures(this, &source, &v113, Position->x, Position->z);
//        // v18 = &label_305;
//        // if (_TSS2 > *(_DWORD*)(v10 + 1400)) {
//        //    j__Init_thread_header(&_TSS2);
//        //    if (_TSS2 == -1) {
//        //        Core::Profile::constructLabel(&label_305, "TheEndGenerator::postProcess");
//        //        j_atexit(TheEndGenerator::postProcess_::_31_::_dynamic_atexit_destructor_for__label_305__);
//        //        j__Init_thread_footer(&_TSS2);
//        //    }
//        //}
//        // if (_TSS3 > *(_DWORD*)(v10 + 1400)) {
//        //    j__Init_thread_header(&_TSS3);
//        //    if (_TSS3 == -1) {
//        //        if (label_305._Mypair._Myval2._Myres >= 0x10) v18 = (std::string*)label_305._Mypair._Myval2._Bx._Ptr;
//        //        v91._Mypair._Myval2._Bx._Ptr = 0i64;
//        //        v91._Mypair._Myval2._Mysize  = 0i64;
//        //        v91._Mypair._Myval2._Myres   = 15i64;
//        //        v25                          = -1i64;
//        //        do ++v25;
//        //        while (Core::Profile::Area::CHUNK_LOAD_SYSTEM_2[v25]);
//        //        std::string::assign(&v91, "Chunk load system", v25);
//        //        v70 = Core::Profile::findOrCreateGroup(&v91, 0xBC8F8Fu);
//        //        Core::Profile::GroupToken::GroupToken(&token_305, v70, v18->_Mypair._Myval2._Bx._Buf, 0xBC8F8Fu);
//        //        if (v91._Mypair._Myval2._Myres >= 0x10) {
//        //            v71 = v91._Mypair._Myval2._Myres + 1;
//        //            v72 = v91._Mypair._Myval2._Bx._Ptr;
//        //            if (v91._Mypair._Myval2._Myres + 1 >= 0x1000) {
//        //                v71 = v91._Mypair._Myval2._Myres + 40;
//        //                v72 = (char*)*((_QWORD*)v91._Mypair._Myval2._Bx._Ptr - 1);
//        //                if ((unsigned __int64)(v91._Mypair._Myval2._Bx._Ptr - v72 - 8) > 0x1F)
//        //                    _invalid_parameter_noinfo_noreturn();
//        //            }
//        //            operator delete(v72, v71);
//        //        }
//        //        j_atexit(TheEndGenerator::postProcess_::_31_::_dynamic_atexit_destructor_for__token_305__);
//        //        j__Init_thread_footer(&_TSS3);
//        //    }
//        //}
//        // Core::Profile::ProfileSectionGroup::ProfileSectionGroup(&ProfileSectionGroup13, &token_305, 0);
//        // this->decorateWorldGenPostProcess(this, Biome, levelChunk._Ptr, &source, &v113);
//        // Core::Profile::ProfileSectionGroup::~ProfileSectionGroup(&ProfileSectionGroup13);
//        // memset(&spikes, 0, sizeof(spikes));
//        // TheEndSpikeHelper::getSpikesForLevel(&spikes, this->mLevel);
//        // Myfirst = spikes._Mypair._Myval2._Myfirst;
//        // Mylast  = spikes._Mypair._Myval2._Mylast;
//        // if (spikes._Mypair._Myval2._Myfirst != spikes._Mypair._Myval2._Mylast) {
//        //    do {
//        //        if (SpikeFeature::EndSpike::startsInChunk(Myfirst, &origin)) {
//        //            memset(&spikeFeature, 0, sizeof(spikeFeature));
//        //            SpikeFeature::SpikeFeature(&spikeFeature, Myfirst);
//        //            CenterZ = SpikeFeature::EndSpike::getCenterZ(Myfirst);
//        //            pos.x   = SpikeFeature::EndSpike::getCenterX(Myfirst);
//        //            pos.y   = 45;
//        //            pos.z   = CenterZ;
//        //            SpikeFeature::place(&spikeFeature, &source, &pos, &v113);
//        //            Feature::~Feature(&spikeFeature);
//        //        }
//        //        ++Myfirst;
//        //    } while (Myfirst != Mylast);
//        //    Myfirst = spikes._Mypair._Myval2._Myfirst;
//        //}
//        // if (Myfirst) {
//        //    v22 = 44 * (spikes._Mypair._Myval2._Myend - Myfirst);
//        //    v23 = Myfirst;
//        //    if (v22 >= 0x1000) {
//        //        v22     += 39i64;
//        //        Myfirst  = *(SpikeFeature::EndSpike**)&Myfirst[-1].mTopBoundingBox.max.y;
//        //        if ((unsigned __int64)((char*)v23 - (char*)Myfirst - 8) > 0x1F) _invalid_parameter_noinfo_noreturn();
//        //    }
//        //    operator delete(Myfirst, v22);
//        //}
//        // if (Position->x * (__int64)Position->x + Position->z * (__int64)Position->z > 4096) {
//        //    if (TheEndGenerator::getIslandHeightValue(this, Position->x, Position->z, 1, 1) < -20.0) {
//        //        Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //        v26 = Core::Random::_genRandInt32(&v113.mRandom.mObject);
//        //        if (v26 == 14 * (v26 / 0xE)) {
//        //            v27 = &label_323;
//        //            if (_TSS5 > *(_DWORD*)(v10 + 1400)) {
//        //                j__Init_thread_header(&_TSS5);
//        //                if (_TSS5 == -1) {
//        //                    Core::Profile::constructLabel(&label_323, "TheEndGenerator::postProcess");
//        //                    j_atexit(TheEndGenerator::postProcess_::_45_::_dynamic_atexit_destructor_for__label_323__);
//        //                    j__Init_thread_footer(&_TSS5);
//        //                }
//        //            }
//        //            if (_TSS6 > *(_DWORD*)(v10 + 1400)) {
//        //                j__Init_thread_header(&_TSS6);
//        //                if (_TSS6 == -1) {
//        //                    if (label_323._Mypair._Myval2._Myres >= 0x10)
//        //                        v27 = (std::string*)label_323._Mypair._Myval2._Bx._Ptr;
//        //                    v92._Mypair._Myval2._Bx._Ptr = 0i64;
//        //                    v92._Mypair._Myval2._Mysize  = 0i64;
//        //                    v92._Mypair._Myval2._Myres   = 15i64;
//        //                    v31                          = -1i64;
//        //                    do ++v31;
//        //                    while (Core::Profile::Area::CHUNK_LOAD_SYSTEM_2[v31]);
//        //                    std::string::assign(&v92, "Chunk load system", v31);
//        //                    v73 = Core::Profile::findOrCreateGroup(&v92, 0xBC8F8Fu);
//        //                    Core::Profile::GroupToken::GroupToken(
//        //                        &token_323,
//        //                        v73,
//        //                        v27->_Mypair._Myval2._Bx._Buf,
//        //                        0xBC8F8Fu
//        //                    );
//        //                    if (v92._Mypair._Myval2._Myres >= 0x10) {
//        //                        v74 = v92._Mypair._Myval2._Myres + 1;
//        //                        v75 = v92._Mypair._Myval2._Bx._Ptr;
//        //                        if (v92._Mypair._Myval2._Myres + 1 >= 0x1000) {
//        //                            v74 = v92._Mypair._Myval2._Myres + 40;
//        //                            v75 = (char*)*((_QWORD*)v92._Mypair._Myval2._Bx._Ptr - 1);
//        //                            if ((unsigned __int64)(v92._Mypair._Myval2._Bx._Ptr - v75 - 8) > 0x1F)
//        //                                _invalid_parameter_noinfo_noreturn();
//        //                        }
//        //                        operator delete(v75, v74);
//        //                    }
//        //                    j_atexit(TheEndGenerator::postProcess_::_45_::_dynamic_atexit_destructor_for__token_323__);
//        //                    j__Init_thread_footer(&_TSS6);
//        //                }
//        //            }
//        //            Core::Profile::ProfileSectionGroup::ProfileSectionGroup(&ProfileSectionGroup14, &token_323, 0);
//        //            Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //            v28 = (Core::Random::_genRandInt32(&v113.mRandom.mObject) & 0xF) + 8;
//        //            Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //            v29 = (Core::Random::_genRandInt32(&v113.mRandom.mObject) & 0xF) + 55;
//        //            Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //            v30                = Core::Random::_genRandInt32(&v113.mRandom.mObject);
//        //            featurePlacement.x = v28 + origin.x;
//        //            featurePlacement.y = v29 + origin.y;
//        //            featurePlacement.z = (v30 & 0xF) + 8 + origin.z;
//        //            memset(&endIslands, 0, sizeof(endIslands));
//        //            Feature::Feature(&endIslands, 0i64);
//        //            endIslands.__vftable = (EndIslandFeature_vtbl*)EndIslandFeature::`vftable';
//        //            EndIslandFeature::place(
//        //                &endIslands,
//        //                &source,
//        //                &featurePlacement,
//        //                &v113
//        //            );
//        //            Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //            if ((Core::Random::_genRandInt32(&v113.mRandom.mObject) & 3) == 0)
//        //                EndIslandFeature::place(&endIslands, &source, &featurePlacement, &v113);
//        //            Feature::~Feature(&endIslands);
//        //            Core::Profile::ProfileSectionGroup::~ProfileSectionGroup(&ProfileSectionGroup14);
//        //        }
//        //    }
//        //    if (TheEndGenerator::getIslandHeightValue(this, Position->x, Position->z, 1, 1) > 40.0) {
//        //        v32 = &label_338;
//        //        if (_TSS7 > *(_DWORD*)(v10 + 1400)) {
//        //            j__Init_thread_header(&_TSS7);
//        //            if (_TSS7 == -1) {
//        //                Core::Profile::constructLabel(&label_338, "TheEndGenerator::postProcess");
//        //                j_atexit(TheEndGenerator::postProcess_::_51_::_dynamic_atexit_destructor_for__label_338__);
//        //                j__Init_thread_footer(&_TSS7);
//        //            }
//        //        }
//        //        if (_TSS8 > *(_DWORD*)(v10 + 1400)) {
//        //            j__Init_thread_header(&_TSS8);
//        //            if (_TSS8 == -1) {
//        //                if (label_338._Mypair._Myval2._Myres >= 0x10)
//        //                    v32 = (std::string*)label_338._Mypair._Myval2._Bx._Ptr;
//        //                v93._Mypair._Myval2._Bx._Ptr = 0i64;
//        //                v93._Mypair._Myval2._Mysize  = 0i64;
//        //                v93._Mypair._Myval2._Myres   = 15i64;
//        //                v57                          = -1i64;
//        //                do ++v57;
//        //                while (Core::Profile::Area::CHUNK_LOAD_SYSTEM_2[v57]);
//        //                std::string::assign(&v93, "Chunk load system", v57);
//        //                v76 = Core::Profile::findOrCreateGroup(&v93, 0xBC8F8Fu);
//        //                Core::Profile::GroupToken::GroupToken(&token_338, v76, v32->_Mypair._Myval2._Bx._Buf,
//        //                0xBC8F8Fu); if (v93._Mypair._Myval2._Myres >= 0x10) {
//        //                    v77 = v93._Mypair._Myval2._Myres + 1;
//        //                    v78 = v93._Mypair._Myval2._Bx._Ptr;
//        //                    if (v93._Mypair._Myval2._Myres + 1 >= 0x1000) {
//        //                        v77 = v93._Mypair._Myval2._Myres + 40;
//        //                        v78 = (char*)*((_QWORD*)v93._Mypair._Myval2._Bx._Ptr - 1);
//        //                        if ((unsigned __int64)(v93._Mypair._Myval2._Bx._Ptr - v78 - 8) > 0x1F)
//        //                            _invalid_parameter_noinfo_noreturn();
//        //                    }
//        //                    operator delete(v78, v77);
//        //                }
//        //                j_atexit(TheEndGenerator::postProcess_::_51_::_dynamic_atexit_destructor_for__token_338__);
//        //                j__Init_thread_footer(&_TSS8);
//        //            }
//        //        }
//        //        Core::Profile::ProfileSectionGroup::ProfileSectionGroup(&ProfileSectionGroup15, &token_338, 0);
//        //        Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //        v33 = Core::Random::_genRandInt32(&v113.mRandom.mObject) % 5;
//        //        v34 = 0;
//        //        if (v33 > 0) {
//        //            do {
//        //                Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //                v35 = (Core::Random::_genRandInt32(&v113.mRandom.mObject) & 0xF) + 8;
//        //                Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //                v36       = (Core::Random::_genRandInt32(&v113.mRandom.mObject) & 0xF) + 8;
//        //                v83.x     = v35 + origin.x;
//        //                v83.y     = origin.y;
//        //                v83.z     = v36 + origin.z;
//        //                Heightmap = BlockSource::getHeightmap(&source, &v83);
//        //                if (Heightmap > 0) {
//        //                    v38   = Heightmap - 1;
//        //                    v84.x = v35 + origin.x;
//        //                    v84.y = Heightmap + origin.y;
//        //                    v84.z = v36 + origin.z;
//        //                    if (BlockSource::isEmptyBlock(&source, &v84)) {
//        //                        v85.x = v35 + origin.x;
//        //                        v85.y = v38 + origin.y;
//        //                        v85.z = v36 + origin.z;
//        //                        v39   = BlockSource::getBlock(&source, &v85)->mLegacyBlock.ptr_;
//        //                        if (!v39) gsl::details::terminate(0i64);
//        //                        Hash = HashedString::getHash(&v39->mNameInfo.mFullName);
//        //                        if (Hash == HashedString::getHash(&VanillaBlockTypeIds::EndStone)) {
//        //                            target.x = v35 + origin.x;
//        //                            target.y = v38 + origin.y + 1;
//        //                            target.z = v36 + origin.z;
//        //                            ChorusFlowerBlock::generatePlant(&source, &target, &v113, 8);
//        //                        }
//        //                    }
//        //                }
//        //                ++v34;
//        //            } while (v34 < v33);
//        //            v10 = *(_QWORD*)&gatewayPos.x;
//        //        }
//        //        Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //        v41 = Core::Random::_genRandInt32(&v113.mRandom.mObject);
//        //        if (v41 == 700 * (v41 / 0x2BC)) {
//        //            Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //            v42 = (Core::Random::_genRandInt32(&v113.mRandom.mObject) & 0xF) + 8;
//        //            Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //            v43   = (Core::Random::_genRandInt32(&v113.mRandom.mObject) & 0xF) + 8;
//        //            v87.x = v42 + origin.x;
//        //            v87.y = origin.y;
//        //            v87.z = v43 + origin.z;
//        //            v44   = BlockSource::getHeightmap(&source, &v87);
//        //            v45   = v44;
//        //            if (v44 > 0) {
//        //                Bedrock::Application::ThreadOwner<Core::Random>::_assertSameThreadID(&v113.mRandom);
//        //                v46          = Core::Random::_genRandInt32(&v113.mRandom.mObject);
//        //                gatewayPos.x = v42 + origin.x;
//        //                gatewayPos.y = v45 + v46 % 7 + 3 + origin.y;
//        //                gatewayPos.z = v43 + origin.z;
//        //                memset(&v89, 0, sizeof(v89));
//        //                Feature::Feature(&v89, 0i64);
//        //                v89.__vftable = (Feature_vtbl*)EndGatewayFeature::`vftable'; EndGatewayFeature::place(
//        //                    (EndGatewayFeature*)&v89,
//        //                    &source,
//        //                    &gatewayPos,
//        //                    &v113
//        //                );
//        //                Feature::~Feature(&v89);
//        //                BlockEntity = BlockSource::getBlockEntity(&source, &gatewayPos);
//        //                v48         = (EndGatewayBlockActor*)BlockEntity;
//        //                if (BlockEntity) {
//        //                    if (*BlockActor::getType(BlockEntity) == 24) {
//        //                        v49 = v88->mDimension->getSpawnPos(v88->mDimension, (BlockPos*)&v88);
//        //                        EndGatewayBlockActor::setExitPosition(v48, v49);
//        //                    }
//        //                }
//        //            }
//        //        }
//        //        Core::Profile::ProfileSectionGroup::~ProfileSectionGroup(&ProfileSectionGroup15);
//        //    }
//        //}
//        // v50 = &label_373;
//        // BlockTickingQueue::tickAllPendingTicks(&instaTickQueue, &source, WorldGenerator::TICKING_QUEUE_PASS_LIMIT);
//        // BlockTickingQueue::tickAllPendingTicks(&randomTickQueue, &source, WorldGenerator::TICKING_QUEUE_PASS_LIMIT);
//        // TickQueue = LevelChunk::getTickQueue(levelChunk._Ptr);
//        // BlockTickingQueue::acquireAllTicks(TickQueue, &instaTickQueue);
//        // v52 = LevelChunk::getRandomTickQueue(levelChunk._Ptr);
//        // BlockTickingQueue::acquireAllTicks(v52, &randomTickQueue);
//        // mChunk = blockEntityLock._Mypair._Myval2._Myfirst;
//        // v9        = 1;
//        // return v9;
//    }
//
//    void loadChunk(LevelChunk& levelchunk, bool forceImmediateReplacementDataLoad) {
//        auto& position = levelchunk.getPosition();
//
//        auto& dimension = ChunkSource::getDimension();
//        WorldGenerator::prepareStructureFeatureBlueprints(dimension, position, *this->mBiomeSource, *this);
//
//        ChunkLocalNoiseCache chunkLocalNoiseCache;
//
//        this->mBiomeSource->fillBiomes(levelchunk, chunkLocalNoiseCache);
//
//        ThreadData threadData{};
//
//        buffer_span_mut<Block const*> buffer{};
//        buffer.mBegin = &*threadData.mBlockBuffer.begin();
//        buffer.mEnd   = &*threadData.mBlockBuffer.end();
//        BlockVolume box(buffer, 16, 128, 16, Block::tryGetFromRegistry("minecraft:air"), 0);
//
//        this->prepareHeights(box, position, 1);
//        buildSurfaces(&box, &position, &levelchunk);
//        levelchunk.setBlockVolume(box, 0);
//        levelchunk.recomputeHeightMap(0);
//        if (!levelchunk.getGenerator()) levelchunk._setGenerator(this);
//        levelchunk.changeState(ChunkState::Generating, ChunkState::Generated);
//    }
//
//    std::optional<short> getPreliminarySurfaceLevel(DividedPos2d<4> worldQuartPos) const {
//        float    IslandHeightValue;
//        BlockPos pos;
//
//        pos.y = 0;
//        pos.z = 4 * worldQuartPos.z;
//        pos.x = 4 * worldQuartPos.x;
//        ChunkPos chunkPos{pos};
//        IslandHeightValue = getIslandHeightValue(chunkPos.x, chunkPos.z, 1, 1);
//        return mce::Math::floor(IslandHeightValue);
//    }
//
//    void prepareAndComputeHeights(
//        BlockVolume& /*box*/,
//        ChunkPos const& /*chunkPos*/,
//        std::vector<short>& ZXheights,
//        bool /*factorInBeardsAndShavers*/,
//        int /*skipTopN*/
//    ) {}
//
//    virtual void prepareHeights(BlockVolume& box, ChunkPos const& chunkPos, bool factorInBeardsAndShavers) {
//        signed int             Height;
//        const Block*           block;
//        int                    z;
//        float                  val;
//        uint32_t               offs;
//        int                    x;
//        float                  _s1;
//        float                  _s0;
//        int                    y;
//        float                  s3a;
//        float                  s2a;
//        float                  s1a;
//        float                  s0a;
//        float                  s3;
//        float                  s2;
//        float                  s1;
//        float                  s0;
//        int                    yc;
//        int                    zc;
//        int                    xc;
//        int                    levelHeightBits;
//        std::array<float, 297> noiseBuffer;
//        uint64                 v27;
//
//        Height          = getDimension().getHeight();
//        levelHeightBits = std::log((float)Height) / std::log(2.0f);
//        getHeights(&noiseBuffer, 2 * chunkPos.x, 0, 2 * chunkPos.z);
//        for (xc = 0; xc < 2; ++xc) {
//            for (zc = 0; zc < 2; ++zc) {
//                for (yc = 0; yc < 32; ++yc) {
//                    s0  = noiseBuffer.at(yc + 33 * (zc + 3 * xc));
//                    s1  = noiseBuffer.at(yc + 33 * (zc + 3 * xc + 1));
//                    s2  = noiseBuffer.at(yc + 33 * (zc + 3 * (xc + 1)));
//                    s3  = noiseBuffer.at(yc + 33 * (zc + 3 * (xc + 1) + 1));
//                    s0a = (float)(noiseBuffer.at(yc + 33 * (zc + 3 * xc) + 1) - s0) * 0.25f;
//                    s1a = (float)(noiseBuffer.at(yc + 33 * (zc + 3 * xc + 1) + 1) - s1) * 0.25;
//                    s2a = (float)(noiseBuffer.at(yc + 33 * (zc + 3 * (xc + 1)) + 1) - s2) * 0.25;
//                    s3a = (float)(noiseBuffer.at(yc + 33 * (zc + 3 * (xc + 1) + 1) + 1) - s3) * 0.25;
//                    for (y = 0; y < 4; ++y) {
//                        _s0 = s0;
//                        _s1 = s1;
//                        for (x = 0; x < 8; ++x) {
//                            offs =
//                                (4 * yc + y) | ((8 * zc) << levelHeightBits) | ((8 * xc + x) << (levelHeightBits + 4));
//                            val = _s0;
//                            for (z = 0; z < 8; ++z) {
//                                block = Block::tryGetFromRegistry("minecraft:air");
//                                if (val > 0.0) block = Block::tryGetFromRegistry("minecraft:end_stone");
//                                box.block(offs)  = block;
//                                offs            += 1 << levelHeightBits;
//                                val              = (float)((float)(_s1 - _s0) * 0.125) + val;
//                            }
//                            _s0 = (float)((float)(s2 - s0) * 0.125) + _s0;
//                            _s1 = (float)((float)(s3 - s1) * 0.125) + _s1;
//                        }
//                        s0 = s0a + s0;
//                        s1 = s1a + s1;
//                        s2 = s2a + s2;
//                        s3 = s3a + s3;
//                    }
//                }
//            }
//        }
//    };
//
//    StructureFeatureType findStructureFeatureTypeAt(BlockPos const& blockPos) {
//        return WorldGenerator::findStructureFeatureTypeAt(blockPos);
//    };
//
//    bool isStructureFeatureTypeAt(const BlockPos& blockPos, ::StructureFeatureType type) const {
//        return WorldGenerator::isStructureFeatureTypeAt(blockPos, type);
//    }
//
//    bool findNearestStructureFeature(
//        ::StructureFeatureType      type,
//        BlockPos const&             blockPos,
//        BlockPos&                   blockPos1,
//        bool                        mustBeInNewChunks,
//        std::optional<HashedString> hash
//    ) {
//        return WorldGenerator::findNearestStructureFeature(type, blockPos, blockPos1, mustBeInNewChunks, hash);
//    };
//
//    void garbageCollectBlueprints(buffer_span<ChunkPos> activeChunks) {
//        return WorldGenerator::garbageCollectBlueprints(activeChunks);
//    };
//
//    BlockPos findSpawnPosition() const { return {0, 16, 0}; };
//
//    virtual void buildSurfaces(BlockVolume* box, const ChunkPos* chunkPos, LevelChunk* levelChunk) {
//        Random random(mLevel->getSeed(), 0);
//
//        ChunkBlockPos p{0, 0, 0};
//        BlockPos      t{0, 0, 0};
//
//        short           seaLevel        = getDimension().mSeaLevel;
//        Dimension&      dimension       = ChunkSource::getDimension();
//        short           v12             = dimension.getMinHeight();
//        Level&          level           = levelChunk->getLevel();
//        LevelData&      levelData       = level.getLevelData();
//        BaseGameVersion baseGameVersion = levelData.getBaseGameVersion();
//
//        bool useCCOrLater = baseGameVersion.isCompatibleWith(VanillaGameVersions::CavesAndCliffsUpdate);
//        p.x               = 0;
//        do {
//            p.z = 0;
//            do {
//                t    = levelChunk->toWorldPos(p);
//                t.y -= v12;
//                BiomeSurfaceSystem::buildSurfaceAt(ISurfaceBuilder::BuildParameters(
//                    levelChunk->getBiome(p),
//                    random,
//                    *box,
//                    t,
//                    0.0,
//                    seaLevel,
//                    std::move(this->mMaterialAdjNoise),
//                    ISurfaceBuilder::WaterLevelStrategy::GLOBAL,
//                    0,
//                    levelChunk->getPreWorldGenHeightmap(),
//                    useCCOrLater
//                ));
//                ++p.z;
//            } while (p.z < 0x10u);
//            ++p.x;
//        } while (p.x < 0x10u);
//    }
//
//    virtual BiomeArea getBiomeArea(const BoundingBox& area, uint scale) const {
//        return mBiomeSource->getBiomeArea(area, scale);
//    }
//
//    virtual const BiomeSource& getBiomeSource(void) const { return *mBiomeSource; }
//
//    virtual BlockVolumeDimensions getBlockVolumeDimensions(void) const { return {16, 16, 320}; }
//
//    virtual void decorateWorldGenLoadChunk(
//        const Biome&       biome,
//        LevelChunk&        levelChunk,
//        BlockVolumeTarget& target,
//        Random&            random,
//        const ChunkPos&    chunkPos
//    ) const {
//        ;
//    }
//
//    virtual void
//    decorateWorldGenPostProcess(const Biome& biome, LevelChunk& levelChunk, BlockSource& blockSource, Random& random)
//        const {
//        std::vector<class Biome const*> vbp{&biome};
//        auto                            result = getLevel().getFeatureRegistry().getSmallFeaturePasses();
//        for (auto& v : result) {
//            BiomeDecorationSystem::decorate(levelChunk, blockSource, random, vbp, v, *this);
//        }
//    }
//
//    void getHeights(std::array<float, 297>* noiseBuffer, int x, int y, int z) {
//        float        v5;
//        PerlinNoise* v6;
//        PerlinNoise* v7;
//        PerlinNoise* v8;
//        float        slide_0;
//        float        v;
//        float        val;
//        float        vala;
//        float        bb;
//        int          yy;
//        float        doffs;
//        int          zz;
//        int          xx;
//        int          p;
//        Vec3         v22{1368.824, 684.41199, 1368.824};
//        Vec3         v24{1368.824, 684.41199, 1368.824};
//        Vec3         scale{1368.824 / 80.0, 684.41199 / 160.0, 1368.824 / 80.0};
//        BlockPos     noisePos{x, y, z};
//        Vec3         pos{noisePos.x, noisePos.y, noisePos.z};
//        Vec3         v25{noisePos.x, noisePos.y, noisePos.z};
//        Vec3         v23{noisePos.x, noisePos.y, noisePos.z};
//        float        noiseRegionB[297];
//        float        noiseRegionA[297];
//        float        noiseRegionPrimary[297];
//        uint64       v32;
//
//        this->mPerlinNoise1->getRegion(noiseRegionPrimary, pos, 3, 33, 3, scale);
//        this->mLPerlinNoise1->getRegion(noiseRegionA, v25, 3, 33, 3, v24);
//        this->mLPerlinNoise2->getRegion(noiseRegionB, v23, 3, 33, 3, v22);
//        p = 0;
//        for (xx = 0; xx < 3; ++xx) {
//            for (zz = 0; zz < 3; ++zz) {
//                doffs = getIslandHeightValue(x / 2, z / 2, xx, zz);
//                for (yy = 0; yy < 33; ++yy) {
//                    v = (float)((float)(noiseRegionPrimary[p] / 10.0) + 1.0) / 2.0;
//                    if (v >= 0.0) {
//                        if (v <= 1.0) {
//                            bb  = noiseRegionA[p] / 512.0;
//                            val = bb + (float)((float)((float)(noiseRegionB[p] / 512.0) - bb) * v);
//                        } else {
//                            val = noiseRegionB[p] / 512.0;
//                        }
//                    } else {
//                        val = noiseRegionA[p] / 512.0;
//                    }
//                    vala = doffs + (float)(val - 8.0);
//                    if (yy > 14) {
//                        v5   = mce::Math::clamp((float)(yy - 14) / 64.0f, 0.0f, 1.0f);
//                        vala = (float)(vala * (float)(1.0 - v5)) + (float)(-3000.0 * v5);
//                    }
//                    if (yy < 8) {
//                        slide_0 = (float)(8 - yy) / (float)((float)8 - 1.0);
//                        vala    = (float)(vala * (float)(1.0 - slide_0)) + (float)(-30.0 * slide_0);
//                    }
//                    noiseBuffer->at(p++) = vala;
//                }
//            }
//        }
//    }
//
//    float getIslandHeightValue(int chunkX, int chunkZ, int subSectionX, int subSectionZ) const {
//        float         v5;
//        float         v7;
//        int64         v9;
//        SimplexNoise* v10;
//        bool          v11;
//        float         newDoffs;
//        int64         totalChunkZ;
//        int64         totalChunkX;
//        int           zo;
//        int           xo;
//        float         doffs;
//        uint64        v22;
//
//        v5 = mce::Math::sqrt(
//            (float)((float)(subSectionX + 2 * chunkX) * (float)(subSectionX + 2 * chunkX))
//            + (float)((float)(subSectionZ + 2 * chunkZ) * (float)(subSectionZ + 2 * chunkZ))
//        );
//        doffs = mce::Math::clamp(float(100.0 - (float)(v5 * 8.0)), -100.0f, 80.0f);
//        for (xo = -12; xo <= 12; ++xo) {
//            for (zo = -12; zo <= 12; ++zo) {
//                totalChunkX = xo + chunkX;
//                totalChunkZ = zo + chunkZ;
//                v11         = 0;
//                if (totalChunkZ * totalChunkZ + totalChunkX * totalChunkX > 4096) {
//                    Vec2 vin((float)(int)totalChunkX, (float)(int)totalChunkZ);
//                    v11 = this->mIslandNoise->_getValue(vin) < -0.89999998;
//                }
//                if (v11) {
//                    v9      = 3439 * std::abs(totalChunkX);
//                    auto v6 = 147 * std::abs(totalChunkZ) + v9;
//                    v7      = mce::Math::sqrt(
//                        (float)((float)(subSectionX - 2 * xo) * (float)(subSectionX - 2 * xo))
//                        + (float)((float)(subSectionZ - 2 * zo) * (float)(subSectionZ - 2 * zo))
//                    );
//                    newDoffs = mce::Math::clamp(float(100.0 - (float)(v7 * (float)(int)(v6 % 13 + 9))), -100.0f, 80.0f);
//                    if (newDoffs > doffs) doffs = newDoffs;
//                }
//            }
//        }
//        return doffs;
//    }
//
//    bool isOutsideCentralIslandArea(const ChunkPos* chunkPos) {
//        return chunkPos->x * chunkPos->x + chunkPos->z * chunkPos->z > 4096;
//    }
//
//    virtual void postProcessMobsAt(BlockSource& blockSource, int chunkWestBlock, int chunkNorthBlock, Random& random) {
//        BlockPos pos;
//
//        Level&                              level  = blockSource.getLevel();
//        std::vector<SpikeFeature::EndSpike> spikes = TheEndSpikeHelper::getSpikesForLevel(level);
//        for (auto& v : spikes) {
//            bool v12 = v.getCenterX() >= chunkWestBlock && v.getCenterX() < chunkWestBlock + 16;
//            bool v13 = v.getCenterZ() >= chunkNorthBlock && v.getCenterZ() < chunkNorthBlock + 16;
//            if (v12 && v13) {
//                SpikeFeature spikeFeature = SpikeFeature::SpikeFeature(v);
//                int          CenterZ      = v.getCenterZ();
//                pos.x                     = v.getCenterX();
//                pos.y                     = 45;
//                pos.z                     = CenterZ;
//                spikeFeature.postProcessMobsAt(blockSource, pos, random);
//            }
//        }
//        WorldGenerator::postProcessMobsAt(blockSource, chunkWestBlock, chunkNorthBlock, random);
//    }
//
//    virtual void prepareAndComputeHeights(
//        BlockVolume&        box,
//        ChunkPos const&     chunkPos,
//        std::vector<short>& ZXheights,
//        bool                factorInBeardsAndShavers,
//        int                 skipTopN
//    ) {
//        prepareHeights(box, chunkPos, factorInBeardsAndShavers, ZXheights, skipTopN);
//    }
//
//    void
//    prepareHeights(TheEndGenerator* this, BlockVolume* box, const ChunkPos* chunkPos, bool factorInBeardsAndShavers) {
//        TheEndGenerator::_prepareHeights(this, box, chunkPos, factorInBeardsAndShavers, 0i64, 0);
//    }
//};
//
//LL_AUTO_TYPE_INSTANCE_HOOK(
//    OverworldDimensionCreateGeneratorHook,
//    ll::memory::HookPriority::Normal,
//    OverworldDimension,
//    "?createGenerator@OverworldDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@"
//    "@@std@@AEBVStructureSetRegistry@worldgen@br@@@Z",
//    std::unique_ptr<WorldGenerator>,
//    br::worldgen::StructureSetRegistry const& structureSetRegistry
//) {
//    // mSeaLevel = -61;
//
//    // auto  biome     = level.getBiomeRegistry().lookupByName(levelData.getBiomeOverride());
//    // auto& layer = levelData.getFlatWorldGeneratorOptions();
//    // std::string layerstr =
//    //    R"({
//    //      "biome_id": 4,
//    //      "world_version": "version.post_1_18",
//    //      "block_layers": [
//    //        {
//    //          "block_name": "minecraft:bedrock",
//    //          "count": 1
//    //        },
//    //        {
//    //          "block_name": "minecraft:cherry_log",
//    //          "count": 2
//    //        },
//    //        {
//    //          "block_name": "minecraft:grass",
//    //          "count": 61
//    //        }
//    //      ],
//    //      "encoding_version": 6,
//    //      "structure_options": null
//    //    })";
//    // Json::Value  layer;
//    // Json::Reader reader;
//    // reader.parse(layerstr, layer, 0);
//    // ll::logger.warn("Superflat worlds will be created based on the following option:{}", layer.toStyledString());
//    // return std::make_unique<MyFlatWorldGenerator>(*this, level.getSeed(), layer);
//
//    std::unique_ptr<WorldGenerator> worldGenerator;
//    auto                            seed      = getLevel().getSeed();
//    auto&                           levelData = getLevel().getLevelData();
//
//    worldGenerator = std::make_unique<MyWorldGenerator>(*this, seed);
//    std::vector<std::shared_ptr<const br::worldgen::StructureSet>> structureMap;
//    for (auto iter = structureSetRegistry.begin(); iter != structureSetRegistry.end(); iter++) {
//        structureMap.emplace_back(iter->second);
//    }
//    worldGenerator->getStructureFeatureRegistry().mChunkGeneratorStructureState.mSeed = seed;
//    worldGenerator->getStructureFeatureRegistry().mChunkGeneratorStructureState.mSeed64 =
//        LevelSeed64::fromUnsigned32(seed);
//
//    /*worldGenerator->getStructureFeatureRegistry().mStructureFeatures.emplace_back(
//        std::make_unique<VillageFeature>(seed, 9, 4)
//    );*/
//    worldGenerator->getStructureFeatureRegistry().mChunkGeneratorStructureState =
//        br::worldgen::ChunkGeneratorStructureState::createFlat(seed, worldGenerator->getBiomeSource(), structureMap);
//
//    worldGenerator->init();
//    return std::move(worldGenerator);
//}
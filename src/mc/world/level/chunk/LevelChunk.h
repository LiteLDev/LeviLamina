#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/VolumeOf.h"
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkLocalHeight.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/chunk/BiomeChunkData.h"
#include "mc/world/level/chunk/ChunkCachedDataState.h"
#include "mc/world/level/chunk/ChunkDebugDisplaySavedState.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/ChunkTerrainDataState.h"
#include "mc/world/level/chunk/ColumnCachedData.h"
#include "mc/world/level/chunk/DirtyTicksCounter.h"
#include "mc/world/level/chunk/LevelChunkBlockActorStorage.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/chunk/LevelChunkNeighbor.h"
#include "mc/world/level/chunk/LevelChunkVolumeData.h"
#include "mc/world/level/chunk/SubChunkInitMode.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/level_chunk_ticking/Entity.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/v1/HardcodedSpawnAreaType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Biome;
class BiomeRegistry;
class Block;
class BlockActor;
class BlockSource;
class BlockTickingQueue;
class BlockVolume;
class ChunkBlockPos;
class ChunkSource;
class ChunkViewSource;
class Dimension;
class EntityContext;
class GameEventListenerRegistry;
class IDataInput;
class IDataOutput;
class ILevel;
class LevelChunkMetaData;
class Random;
class SaveContext;
class StringByteInput;
class SubChunkPos;
class Vec3;
class WeakEntityRef;
class Weather;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct BiomeChunkState;
struct BlockID;
struct DeserializationChanges;
struct NibblePair;
struct SubChunk;
namespace LevelChunkTicking { struct Registry; }
// clang-format on

class LevelChunk {
public:
    // LevelChunk 内部类型声明
    // clang-format off
    class Neighbors;          // 邻居区块
    struct SpawningArea;      // 生物生成区域
    struct Telemetry;         // 遥测数据
    // clang-format on

    // LevelChunk 内部类型定义

    // 区块最终完成状态的枚举
    enum class Finalization : int {
        NeedsInstaticking = 0, // 需要立即执行刻更新（Instaticking）
        NeedsPopulation   = 1, // 需要进行生物群系填充（如生成树木、矿石）
        Done              = 2, // 已完成
    };

    // 存储邻居区块信息的内部类
    class Neighbors {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mNeighbors; // 使用类型化存储来表示邻居区块的状态
        // NOLINTEND

    public:
        // 静态变量
        // NOLINTBEGIN
        // 返回一个包含8个邻居方位和其对应区块位置偏移的静态映射表
        MCNAPI static ::std::array<::std::pair<::LevelChunkNeighbor, ::ChunkPos>, 8> const& sOffsetMap();
        // NOLINTEND
    };

    // 用于遥测和性能分析的结构体
    struct Telemetry {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mWasStored;                   // 标记该区块是否曾被存储过
        ::ll::TypedStorage<1, 1, bool> mWasGenerated;                // 标记该区块是否是新生成的
        ::ll::TypedStorage<1, 1, bool> mWasRequestedInsideTickRange; // 标记该区块是否在刻更新范围内被请求过
        ::ll::TypedStorage<1, 1, bool> mWasLoadedInsideTickRange;    // 标记该区块是否在刻更新范围内被加载过
        // NOLINTEND
    };

    // 定义 BlockPos 的 vector 类型别名，方便使用
    using BlockList = ::std::vector<::BlockPos>;

    // 定义方块实体共享指针的 vector 类型别名
    using BlockActorVector = ::std::vector<::std::shared_ptr<::BlockActor>>;

    // 硬编码的生物生成区域
    struct SpawningArea {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 24, ::BoundingBox>           aabb; // 生成区域的边界框
        ::ll::TypedStorage<1, 1, ::HardcodedSpawnAreaType> type; // 生成区域的类型
        // NOLINTEND
    };

    // 定义 bool 的类型别名，用于表示边界状态
    using BBorder = bool;

    // 反序列化实体时的结果枚举
    enum class DeserializeEntityResult : int {
        FailedToLoadActor  = 0, // 加载实体失败
        FailedToAddToLevel = 1, // 将实体添加到世界失败
        Succeeded          = 2, // 成功
    };

public:
    // 成员变量
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mBlockEntityAccessLock;            // 方块实体访问的互斥锁
    ::ll::TypedStorage<8, 8, ::ILevel&>                                         mLevel;                            // 对所在世界（ILevel）的引用
    ::ll::TypedStorage<8, 8, ::Dimension&>                                      mDimension;                        // 对所在维度（Dimension）的引用
    ::ll::TypedStorage<4, 12, ::BlockPos>                                       mMin;                              // 区块的最小坐标 (min corner)
    ::ll::TypedStorage<4, 12, ::BlockPos>                                       mMax;                              // 区块的最大坐标 (max corner)
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                        mPosition;                         // 区块的二维位置 (ChunkPos)
    ::ll::TypedStorage<1, 1, bool>                                              mLightingFixupDone;                // 光照修复是否完成的标志
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                               mLightingTaskActive;               // 是否有活跃的光照计算任务
    ::ll::TypedStorage<1, 1, bool>                                              mReadOnly;                         // 区块是否为只读
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                                    mGenerator;                        // 指向区块源（生成器）的指针
    ::ll::TypedStorage<4, 4, ::LevelChunkTicking::Entity>                       mTmpTickingEntity;                 // 临时用于刻更新的实体对象
    ::ll::TypedStorage<1, 2, ::std::optional<::LevelChunkFormat>>               mLoadedFormat;                     // 加载此区块时使用的数据格式
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSerializedEntitiesBuffer;         // 存储序列化后的实体数据的缓冲区
    ::ll::TypedStorage<8, 32, ::std::string>                                    mFailedSerializedEntitiesBuffer;   // 存储序列化失败的实体数据的缓冲区
    ::ll::TypedStorage<1, 1, bool>                                              mHadSerializedEntities;            // 标记是否曾有过序列化的实体
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>                       mUnresolvedActorLinks;             // 待处理的实体链接
    ::ll::TypedStorage<1, 1, ::std::atomic<::ChunkState>>                       mLoadState;                        // 区块的加载状态（原子操作）
    ::ll::TypedStorage<1, 1, ::ChunkTerrainDataState>                           mTerrainDataState;                 // 区块地形数据的状态
    ::ll::TypedStorage<1, 1, ::ChunkDebugDisplaySavedState>                     mDebugDisplaySavedState;           // 区块调试显示保存的状态
    ::ll::TypedStorage<1, 1, ::ChunkCachedDataState>                            mCachedDataState;                  // 区块缓存数据的状态
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                   mCachedDataStateSpinLock;          // 缓存数据状态的自旋锁
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                   mClientRequestHeightmapAdjustSpinLock; // 客户端请求高度图调整的自旋锁
    ::ll::TypedStorage<8, 8, ::Tick>                                            mLastTick;                         // 上一次被更新的游戏刻
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTickingQueue>>            mTickQueue;                        // 计划的方块更新队列（如红石）
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTickingQueue>>            mRandomTickQueue;                  // 随机的方块更新队列（如植物生长）
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunk>>                        mSubChunks;                        // 存储该区块所有子区块的向量
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SpinLockImpl>>> mSubChunkSpinLocks;                // 每个子区块对应的自旋锁
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> mBiomes;               // 3D生物群系数据存储
    ::ll::TypedStorage<2, 512, ::std::array<::BiomeChunkData, 256>>                         m2DBiomes;             // 2D生物群系数据（一个XZ位置对应一个生物群系）
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                           mBiomesMutex;          // 生物群系数据的读写锁
    ::ll::TypedStorage<4, 2048, ::std::array<::ColumnCachedData, 256>>                      mCachedData;           // 缓存的列数据
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>                       mHeightmap;            // 高度图（每个XZ位置的最高固体方块高度）
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>                       mRenderHeightmap;      // 用于渲染的高度图
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<short>>>                       mPreWorldGenHeightmap; // 世界生成前的高度图
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight>                                            mNonAirMaxHeight;      // 最高的非空气方块高度
    ::ll::TypedStorage<8, 64, ::std::unordered_map<ushort, ::BiomeChunkState>>              mBiomeStates;          // 生物群系状态映射
    ::ll::TypedStorage<2, 2, ushort>                                                        m3dBiomeStackSize;     // 3D生物群系栈的大小
    ::ll::TypedStorage<1, 1, bool>                                                          mHasCachedTemperatureNoise; // 是否缓存了温度噪声
    ::ll::TypedStorage<1, 256, ::std::array<bool, 256>>                                     mBorderBlockMap;       // 边界方块映射表
    ::ll::TypedStorage<4, 4, int>                                                           mCurrentInstatick;     // 当前的立即更新（instatick）计数
    ::ll::TypedStorage<4, 4, ::LevelChunk::Finalization>                                    mFinalized;            // 区块的最终完成状态
    ::ll::TypedStorage<1, 1, bool>                                                          mIsRedstoneLoaded;     // 红石电路是否已加载
    ::ll::TypedStorage<1, 1, bool>                                                          mOwnedByTickingThread; // 是否由刻更新线程拥有
    ::ll::TypedStorage<1, 1, bool>                                                          mUse3DBiomeMaps;       // 是否使用3D生物群系图
    ::ll::TypedStorage<1, 1, bool>                                                          mLevelChunkHas3dBiomeTag;  // 区块数据中是否有3D生物群系的标签
    ::ll::TypedStorage<1, 4, ::LevelChunk::Telemetry>                                       mTelemetry;            // 遥测数据
    ::ll::TypedStorage<4, 48, ::DirtyTicksCounter[6]>                         mFullChunkDirtyTicksCounters;       // 整个区块的脏刻计数器
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                             mChunkActorsDirtyTicksCounter;    // 区块内实体的脏刻计数器
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>         mRainHeights;                      // 降雨高度图（雨或雪能到达的最高位置）
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                 mEntities;                         // 区块内的实体列表（弱引用）
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                   mRemovedActorStorageKeys;          // 已移除实体的存储键
    ::ll::TypedStorage<8, 136, ::LevelChunkBlockActorStorage>                 mBlockEntities;                    // 区块内的方块实体存储
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockActor>>> mPreservedBlockEntities;           // 被保留的方块实体（通常在区块转换时使用）
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>>      mVolumes;                          // 区块内的体积（Volume）实体
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                                mDefaultBrightness;                // 默认亮度
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunk::SpawningArea>>      mSpawningAreas;                    // 硬编码的生物生成区域列表
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>         mLastNetworkLightingTime;          // 上次通过网络更新光照的时间点
    ::ll::TypedStorage<8, 8, uint64>                                          mLoadedMetaDataHash;               // 加载的元数据哈希值
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaData>>        mMetaData;                         // 区块的元数据
    ::ll::TypedStorage<1, 1, bool>                                            mClientNeedsToRequestSubChunks;    // 客户端是否需要请求子区块数据
    ::ll::TypedStorage<1, 1, bool>                                            mLevelChunkHasHadOriginalLighting; // 区块是否已经进行过初次光照计算
    ::ll::TypedStorage<4, 16, float[2][2]>                                    mChunkInterpolants;                // 区块插值数据（可能用于平滑过渡）
    ::ll::TypedStorage<1, 1, bool>                                            mbChunkHasConverterTag;            // 区块是否带有转换器标签
    ::ll::TypedStorage<1, 1, ::LevelChunk::Neighbors>                         mSavedNeighbors;                   // 已保存的邻居区块信息
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                           mGenerationSeed;                   // 生成种子
    ::ll::TypedStorage<1, 1, bool>                                            mGeneratedPreCavesAndCliffsBlending; // 是否在“洞穴与山崖”更新的混合算法之前生成
    ::ll::TypedStorage<1, 1, bool>                                            mOnChunkLoadedCalled;              // onChunkLoaded 回调是否已被调用
    ::ll::TypedStorage<1, 1, bool>                                            mAllSerializedEntitiesLoaded;      // 是否所有序列化的实体都已加载
    ::ll::TypedStorage<8, 32, ::std::string>                                  mOutOfBoundsEntitiesBuffer;        // 存储超出边界的实体的序列化数据
    ::ll::TypedStorage<8, 32, ::std::string>                                  mOutOfBoundsBlockEntitiesBuffer;   // 存储超出边界的方块实体的序列化数据
    ::ll::TypedStorage<1, 1, bool>                                            mSaveNonActorDataIfDirty;          // 如果非实体数据变脏，则保存
    ::ll::TypedStorage<1, 1, bool>                                            mSaveIfNeverSaved;                 // 如果从未保存过，则进行保存
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                              mSnowRandomValue;                  // 用于雪生成的随机值（原子）
    ::ll::TypedStorage<1, 1, bool>                                            mHasSubChunksToPrune;              // 是否有需要修剪的子区块
    ::ll::TypedStorage<1, 1, bool>                                            mHaveSubChunksBeenPruned;          // 子区块是否已经被修剪过
    ::ll::TypedStorage<1, 1, bool>                                            mShouldShiftUpFlatWorldSubChunks;  // 是否应该上移超平坦世界的子区块
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                 mSubChunksToPruneLock;             // 修剪子区块的自旋锁
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<::SubChunk>>>    mSubChunksToPruneOutsideRange;     // 存储范围外待修剪的子区块
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameEventListenerRegistry>> mGameEventListenerRegistry;        // 游戏事件监听器注册表
    ::ll::TypedStorage<1, 1, bool>                                            mIsClientGenerated;                // 是否由客户端生成
    ::ll::TypedStorage<1, 1, bool>                                            mWasClientGenerated;               // 之前是否由客户端生成
    ::ll::TypedStorage<1, 1, bool>                                            mIsEmptyClientChunk;               // 是否是空的客户端区块
    ::ll::TypedStorage<1, 1, bool>                     mActorStorageUpdatedAfterCheckingForReplacementData;    // 在检查替换数据后，实体存储是否已更新
    ::ll::TypedStorage<8, 856, ::LevelChunkVolumeData> mLevelChunkVolumeData;             // 区块的体数据（Volume Data）
    // NOLINTEND
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunk& operator=(LevelChunk const&);
    LevelChunk(LevelChunk const&);
    LevelChunk();

public:
    // 成员函数
    // NOLINTBEGIN

    // 构造函数
    MCAPI LevelChunk(
        ::Dimension&                                dimension,            // 所属维度
        ::ChunkPos const&                           cp,                   // 区块位置
        bool                                        readOnly,             // 是否只读
        ::SubChunkInitMode                          initBlocks,           // 子区块初始化模式
        bool                                        initializeMetaData,   // 是否初始化元数据
        ::LevelChunkBlockActorStorage::TrackingMode blockActorTrackingMode // 方块实体追踪模式
    );

    // 将一个实体添加到区块内的体积（Volume）中
    MCAPI void _addEntityToVolumes(::gsl::not_null<::Actor*> actor);

    // 在反序列化后检查并推断元数据
    MCAPI void _checkAndInferMetaDataAfterDeserialization();

    // 创建一个方块实体（BlockEntity/BlockActor）
    MCAPI ::std::shared_ptr<::BlockActor> _createBlockEntity(
        ::BlockPos const& block,     // 方块位置
        ::BlockSource*    currentSource, // 当前方块源
        ::Block const&    current,     // 当前方块
        ::Block const&    old          // 旧方块
    );

    // 从数据流中反序列化生物群系数据
    MCAPI void _deserializeBiomes(::IDataInput& stream, ::BiomeRegistry const& biomeRegistry, bool fromNetwork);

    // 从数据流中反序列化方块实体
    MCAPI void _deserializeBlockEntities(::IDataInput& stream, ::LevelChunkBlockActorStorage& blockEntityMap);

    // 从字符串字节流中反序列化压缩的子区块数据
    MCAPI void _deserializeCCsubChunks(short index, ::StringByteInput& stream);

    // 从数据流中反序列化实体
    MCAPI ::LevelChunk::DeserializeEntityResult
    _deserializeEntity(::BlockSource& source, ::IDataInput& stream, ::std::vector<::ActorLink>& links);



    // 从字符串字节流中反序列化单个子区块
    MCAPI bool _deserializeSubChunk(short index, ::StringByteInput& stream);

    // 修复刻更新队列中的命令方块
    MCAPI void _fixupCommandBlocksOnTickingQueue(::BlockSource& tickRegion);

    // 修复损坏的方块实体
    MCAPI void
    _fixupCorruptedBlockActors(::LevelChunkBlockActorStorage& deserialized, ::buffer_span_mut<::SubChunk> subchunks);

    // 为区块生成原始光照
    MCAPI void _generateOriginalLighting(::ChunkViewSource& neighborhood, bool enforceBorderCheck);

    // 为单个子区块生成原始光照
    MCAPI void _generateOriginalLightingSubChunk(::BlockSource& source, uint64 subchunkIdx, bool);

    // 处理方块变更时的光照回调
    MCAPI void _lightingCallbacks(
        ::ChunkBlockPos const& pos,         // 局部方块位置
        ::Block const&         old,         // 旧方块
        ::Block const&         current,     // 新方块
        ::BlockSource*         currentSource// 当前方块源
    );

    // 将整个区块的生物群系设置为统一的类型
    MCAPI void _makeUniformBiomes(::Biome const& biome);

    // 放置一个方块实体到区块中
    MCAPI void _placeBlockEntity(::std::shared_ptr<::BlockActor> te);

    // 重新计算指定列的高度图
    MCAPI bool _recalcHeight(::ChunkBlockPos const& start, ::BlockSource* source);

    // 处理方块被移除时的回调
    MCAPI void _removeCallbacks(
        ::ChunkBlockPos const& pos,         // 局部方块位置
        ::Block const&         oldBlock,    // 旧方块
        ::Block const&         current,     // 新方块
        ::BlockSource*         currentSource// 当前方块源
    );

    // 替换生物群系存储
    MCAPI void _replaceBiomeStorage(
        ushort                                                       biomeIndex, // 生物群系索引
        ::std::unique_ptr<::SubChunkStorage<::Biome>>                newStorage, // 新的存储
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const& lock        // 锁
    );

    // 从数据流中设置3D生物群系数据（数据源是2D的）
    MCAPI void _set2DBiomesFrom3D(::IDataInput& stream);

    // 从2D生物群系数据设置所有生物群系
    MCAPI void _setAllBiomesFrom2D(::std::array<::BiomeChunkData, 256>& legacyBiomes);

    // 设置指定位置的生物群系
    MCAPI void _setBiome(::Biome const& biome, ::ChunkBlockPos const& pos, bool fillYDimension);

    // 设置指定索引的生物群系
    MCAPI void _setBiome(
        ::Biome const&                                               biome,
        ushort                                                       biomeIndex,
        ushort                                                       storageIndex,
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const& writeLock
    );

    // 更新区块内的雪和冰
    MCAPI void _tickSnowAndIce(::BlockSource& region, ::Random& random, int xOffset, int zOffset, ::Weather& weather);

    // 添加一个实体到区块
    MCAPI void addEntity(::WeakEntityRef entityRef);

    // 添加一个硬编码的生物生成区域
    MCAPI void addHardcodedSpawningArea(::BoundingBox const& spawnerAABB, ::HardcodedSpawnAreaType type);

    // 将一个方块实体映射表中的所有方块实体添加到本区块
    MCAPI void addSubChunkBlockEntitiesToLevelChunk(::LevelChunkBlockActorStorage& blockActorMap);

    // 应用季节性后处理（比如树叶颜色变化）
    MCAPI bool applySeasonsPostProcess(::BlockSource& region);

    // 检查季节性后处理是否需要更新
    MCAPI bool checkSeasonsPostProcessDirty();


    // 客户端请求为指定子区块生成光照
    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(::ChunkViewSource& neighborhood, short absoluteIndex);

    // 从数据流中反序列化2D地图（高度图等）
    MCAPI void deserialize2DMaps(::IDataInput& stream);

    // 从数据流中反序列化旧版的2D地图
    MCAPI void deserialize2DMapsLegacy(::IDataInput& stream);

    // 从数据流中反序列化生物群系状态
    MCAPI void deserializeBiomeStates(::IDataInput& stream);

    // 从数据流中反序列化方块实体
    MCAPI void deserializeBlockEntities(::IDataInput& stream);

    // 从数据流中反序列化转换数据（用于旧世界格式升级）
    MCAPI void deserializeConversionData(::IDataInput& stream);

    // 从数据流中反序列化最终完成状态
    MCAPI void deserializeFinalization(::IDataInput& stream);

    // 反序列化键值对数据
    MCAPI bool deserializeKey(::std::string_view key, ::std::string_view value);

    // 从数据流中反序列化加载的版本号
    MCAPI void deserializeLoadedVersion(::IDataInput& stream);

    // 从数据流中反序列化元数据哈希
    MCAPI void deserializeMetaDataHash(::IDataInput& stream);

    // 反序列化单个子区块
    MCAPI void deserializeSubChunk(
        uchar                                      idx,
        ::IDataInput&                              stream,
        ::std::optional<schar>                     absoluteIndex,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );

    // 使用给定的生物群系数据填充整个区块
    MCAPI void fillBiomes(::BiomeChunkData const& biomeChunkData);

    // 完成反序列化过程的最后步骤
    MCAPI void finalizeDeserialization();

    // 完成后处理
    MCAPI void finalizePostProcessing();

    // 完成子区块的反序列化
    MCAPI void finalizeSubChunkDeserialization(
        ::LevelChunkBlockActorStorage& blockActorMap,
        ::buffer_span_mut<::SubChunk>  subchunks
    );

    // 寻找暴露在外的避雷针
    MCAPI ::std::optional<::BlockPos> findExposedLightningRod(::BlockPos const& pos, ::BlockSource& region);

    // 寻找闪电的目标位置
    MCAPI ::Vec3 findLightningTarget(::BlockPos const& pos, ::BlockSource& region);

    // 生成原始光照
    MCAPI bool generateOriginalLighting(::ChunkViewSource& neighborhood, bool enforceBorderCheck);

    // 获取高于顶部固体方块的高度
    MCAPI ::ChunkLocalHeight getAboveTopSolidBlock(
        ::ChunkBlockPos const& start,                   // 起始位置
        bool                   iteratePastInitialBlocking, // 是否越过初始阻挡方块
        bool                   includeWater,               // 是否将水视为固体
        bool                   includeLeaves               // 是否将树叶视为固体
    ) const;

    // 获取指定类型和边界框内的所有实体
    MCAPI void getActors(
        ::ActorDefinitionIdentifier const& actorDefinitionId, // 实体定义ID
        ::AABB const&                      bb,                // 搜索的边界框
        ::std::vector<::Actor*>&           actors             // 存储结果的向量
    ) const;

    // 获取指定局部坐标的生物群系
    MCAPI ::Biome const& getBiome(::ChunkBlockPos const& pos) const;

    // 获取指定局部坐标的方块
    MCAPI ::Block const& getBlock(::ChunkBlockPos const& pos) const;

    // 获取指定局部坐标的亮度
    MCAPI ::BrightnessPair getBrightness(::ChunkBlockPos const& pos) const;

    // 获取缓存的温度噪声值
    MCAPI schar getCachedTemperatureNoise(::ChunkBlockPos const& pos);

    // 获取指定边界框内的所有实体
    MCAPI void getEntities(
        ::gsl::span<::gsl::not_null<::Actor const*>> ignoredEntities, // 忽略的实体列表
        ::AABB const&                                bb,              // 搜索的边界框
        ::std::vector<::Actor*>&                     entities,        // 存储结果的向量
        bool                                         useHitbox        // 是否使用实体的碰撞箱进行检测
    ) const;

    // 获取指定类型和边界框内的所有实体（重载版本）
    MCAPI void
    getEntities(::ActorType type, ::AABB const& bb, ::std::vector<::Actor*>& es, bool ignoreTargetType) const;

    // 获取指定局部坐标的附加方块（通常是第二层方块，如水下植物）
    MCAPI ::Block const& getExtraBlock(::ChunkBlockPos const& localPos) const;

    // 获取最高的非空气子区块的索引
    MCAPI short getHighestNonAirSubChunkIndex() const;



    // 获取元数据的副本
    MCAPI ::std::shared_ptr<::LevelChunkMetaData> getMetaDataCopy() const;

    // 获取指定XZ坐标下，雨能到达的最高方块位置
    MCAPI ::BlockPos const getTopRainBlockPos(::ChunkBlockPos const& pos);

    // 检查区块是否包含指定的实体
    MCAPI bool hasEntity(::WeakEntityRef entityRef);

    // 检查是否有待修剪的子区块
    MCAPI bool hasSubChunksToPrune() const;

    // 检查非实体数据是否为“脏”状态（即需要保存）
    MCAPI bool isNonActorDataDirty() const;

    // 从数据流中反序列化旧版的方块附加数据
    MCAPI void legacyDeserializeBlockExtraData(::IDataInput& stream);

    // 从数据流中反序列化旧版的地形数据
    MCAPI void legacyDeserializeTerrain(::IDataInput& stream);

    // 标记此区块在本游戏刻需要进行更新
    MCAPI void markForTickingThisFrame(::LevelChunkTicking::Registry& registry);

    // 移动赋值运算符
    MCAPI ::LevelChunk& operator=(::LevelChunk&& otherChunk);

    // 放置方块时的回调函数
    MCAPI void placeCallbacks(
        ::ChunkBlockPos const&          pos,          // 局部方块位置
        ::Block const&                  old,          // 旧方块
        ::Block const&                  current,      // 新方块
        ::BlockSource*                  currentSource,// 当前方块源
        ::std::shared_ptr<::BlockActor> blockEntity   // 关联的方块实体
    );

    // 为子区块数据包填充高度图数据
    MCAPI void populateHeightMapDataForSubChunkPacket(
        short                                 subChunkAbsoluteIndex, // 子区块的绝对索引
        ::SubChunkPacket::SubChunkPacketData& subChunkPacketData     // 子区块数据包
    ) const;

    // 重新计算整个区块的高度图
    MCAPI void recomputeHeightMap(bool resetLighting);

    // 移除并返回指定位置的方块实体
    MCAPI ::std::shared_ptr<::BlockActor> removeBlockEntity(::BlockPos const& blockPos);

    // 从区块中移除一个实体
    MCAPI bool removeEntityFromChunk(::WeakEntityRef entityRef);

    // 从世界中移除一个实体
    MCAPI bool removeEntityFromWorld(::WeakEntityRef entityRef);

    // 移除指定类型的硬编码生物生成区域
    MCAPI void removeHardcodedSpawningArea(::HardcodedSpawnAreaType type);

    // 将生物群系数据序列化到数据流
    MCAPI void serializeBiomes(::IDataOutput& stream) const;

    // 将方块实体序列化到数据流
    MCAPI void serializeBlockEntities(::IDataOutput& stream, ::SaveContext const& saveContext) const;

    // 将指定子区块内的方块实体序列化到数据流
    MCAPI void serializeBlockEntitiesForSubChunk(
        ::IDataOutput&       stream,
        ::SubChunkPos const& subChunkPos,
        ::SaveContext const& saveContext
    ) const;

    // 序列化边界方块
    MCAPI bool serializeBorderBlocks(::IDataOutput& stream) const;

    // 序列化实体
    MCAPI void serializeEntities(
        ::std::string&                              buffer,                         // 目标缓冲区
        bool                                        markProcessedOnChunkDisard,     // 区块丢弃时是否标记为已处理
        ::std::function<void(::std::string const&)> addLiveActorCallback,         // 添加存活实体回调
        ::std::function<void(::std::string const&)> addActorKeyCallback,          // 添加实体键回调
        ::std::function<void(::std::string const&)> addSerializedActor            // 添加序列化实体回调
    ) const;

    // 序列化被移除的实体信息
    MCAPI void serializeEntityRemovals(::std::function<void(::std::string const&)> callback);

    // 设置所有旧版的方块ID和数据
    MCAPI void setAllLegacyBlockIDAndData(::buffer_span<::BlockID> ids, ::buffer_span<::NibblePair> data);

    // 从一个生物群系“体”数据设置生物群系
    MCAPI void setBiomeFromVolume(::ClientBlockPipeline::VolumeOf<::Biome const*> const& volume, uint yOffset);

    // 设置指定局部坐标的方块
    MCAPI ::Block const& setBlock(
        ::ChunkBlockPos const&          pos,           // 局部方块位置
        ::Block const&                  block,         // 要设置的方块
        ::BlockSource*                  issuingSource, // 操作源
        ::std::shared_ptr<::BlockActor> blockEntity    // 关联的方块实体
    );

    // 从一个方块“体”数据设置方块
    MCAPI void setBlockVolume(::BlockVolume const& box, uint yOffset);

    // 设置边界状态
    MCAPI void setBorder(::ChunkBlockPos const& pos, bool val);

    // 设置指定局部坐标的附加方块
    MCAPI ::Block const&
    setExtraBlock(::ChunkBlockPos const& localPos, ::Block const& block, ::BlockSource* issuingSource);

    // 设置区块的元数据
    MCAPI void setMetaData(::std::shared_ptr<::LevelChunkMetaData> metaData);

    // 设置待处理的实体数据（通常是加载时）
    MCAPI void setPendingEntities(::std::string entitiesData);

    // 设置世界生成前的高度图
    MCAPI void setPreWorldGenHeightMap(::std::unique_ptr<::std::vector<short>> heightmap);

    // 标记区块为已保存状态
    MCAPI void setSaved();

    // 标记区块为未保存状态
    MCAPI void setUnsaved();

    // 设置红石电路
    MCAPI void setupRedstoneCircuit(::BlockSource& resource);

    // 更新区块内的所有方块实体
    MCAPI void tickBlockEntities(::BlockSource& tickRegion);

    // 更新区块内的方块（计划更新和随机更新）
    MCAPI void tickBlocks(::BlockSource& region);

    // 区块的主要更新函数
    MCAPI void tickImpl(::BlockSource& tickRegion, ::Tick const& tick, ::std::function<void()> spawnerCallback);

    // 尝试在指定位置生成骷髅陷阱（闪电劈中骷髅马）
    MCAPI void trySpawnSkeletonTrap(::BlockSource& region, ::BlockPos const& pos);

    // 验证并修复生物群系状态
    MCAPI void validateAndFixBiomeStates();

    // 析构函数
    MCAPI ~LevelChunk();
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN

    // 反序列化2D生物群系并进行数据升级
    MCAPI static ::std::array<::BiomeChunkData, 256> _deserialize2DBiomesWithDataUpgrade(
        ::IDataInput&                              stream,
        ::std::optional<::LevelChunkFormat> const& lcFormat,
        bool                                       isClientSide
    );

    // 反序列化3D生物群系
    MCAPI static ::std::pair<ushort, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> deserialize3DBiomes(
        ::IDataInput&          stream,
        ::BiomeRegistry const& biomeRegistry,
        ushort                 dimensionHeightInSubchunks,
        ::Biome const*         defaultBiome,
        bool                   fromNetwork
    );

    // 序列化实体（静态版本，可用于任意实体列表）
    MCAPI static void serializeEntities(
        ::std::vector<::WeakEntityRef> const&       entities,                       // 实体列表
        ::std::string const&                        serializedEntitiesBuffer,       // 已序列化的实体缓冲区
        ::std::string const&                        failedSerializedEntitiesBuffer, // 序列化失败的实体缓冲区
        ::std::string&                              buffer,                         // 目标缓冲区
        bool                                        markProcessedOnChunkDisard,     // 区块丢弃时是否标记为已处理
        ::std::function<void(::std::string const&)> addLiveActorCallback,         // 添加存活实体回调
        ::std::function<void(::std::string const&)> addActorKeyCallback,          // 添加实体键回调
        ::std::function<void(::std::string const&)> addSerializedActor            // 添加序列化实体回调
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Dimension&                                dimension,
        ::ChunkPos const&                           cp,
        bool                                        readOnly,
        ::SubChunkInitMode                          initBlocks,
        bool                                        initializeMetaData,
        ::LevelChunkBlockActorStorage::TrackingMode blockActorTrackingMode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

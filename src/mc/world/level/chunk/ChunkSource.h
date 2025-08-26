#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class BlendingDataProvider;
class BlockSource;
class BoundingBox;
class ChunkKey;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class ILevelStorageManagerConnector;
class Level;
class LevelChunk;
class LevelChunkBuilderData;
class LevelChunkMetaDataDictionary;
class LevelStorage;
class Random;
struct ActorUnloadedChunkTransferEntry;
struct LevelChunkFinalDeleter;
// clang-format on

class ChunkSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkSource 内部类型定义

    // 定义加载区块的模式
    enum class LoadMode : int {
        None     = 0, // 不加载
        Deferred = 1, // 延迟加载，表示可以异步执行加载操作
    };

public:
    // 成员变量
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mChunkSide;                            // 区块边的长度（通常是16）
    ::ll::TypedStorage<8, 8, ::Level*>                         mLevel;                                // 指向所属世界（Level）的指针
    ::ll::TypedStorage<8, 8, ::Dimension*>                     mDimension;                            // 指向所属维度（Dimension）的指针
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                   mParent;                               // 指向父级 ChunkSource 的指针。这形成了一个责任链，例如，一个缓存层 ChunkSource 的父级可能是一个生成层 ChunkSource
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>> mOwnedParent;                          // 如果此 ChunkSource 拥有其父级的所有权，则通过这个智能指针管理
    ::ll::TypedStorage<8, 8, ::LevelChunkBuilderData*>         mLevelChunkBuilderData;                // 指向用于构建区块的数据
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>              mShuttingDown;                         // 一个原子布尔值，标记该 ChunkSource 是否正在关闭，用于多线程同步
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;                   // 对“保存”事件的订阅，当游戏保存时会触发
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageAppSuspendSubscription; // 对“应用暂停”事件的订阅，当应用被挂起时触发
    // NOLINTEND

public:
    // 禁用默认构造函数
    ChunkSource();

public:
    // 虚函数 - 定义了 ChunkSource 的核心接口
    // NOLINTBEGIN
    // vIndex: 0 - 虚析构函数，允许派生类正确地被销毁
    virtual ~ChunkSource() /*override*/;

    // vIndex: 1 - 开始关闭 ChunkSource，清理资源，完成挂起的任务
    virtual void shutdown();

    // vIndex: 2 - 检查关闭过程是否已完成
    virtual bool isShutdownDone();

    // vIndex: 3 - 获取一个已存在（已加载到内存中）的区块。如果区块不在内存中，则返回空指针。
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const&);

    // vIndex: 4 - 随机获取一个已加载的区块
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random);

    // vIndex: 5 - 检查一个区块是否“已知”（即，可能已生成或正在处理中）
    virtual bool isChunkKnown(::ChunkPos const& chunkPos);

    // vIndex: 6 - 检查一个区块是否已保存到磁盘
    virtual bool isChunkSaved(::ChunkPos const& chunkPos);

    // vIndex: 7 - 创建一个新的、空的 LevelChunk 对象，准备进行加载或生成
    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 8 - 获取或加载一个区块。这是最常用的函数，如果区块在内存中则直接返回，否则会尝试从磁盘加载或生成一个新的。
    virtual ::std::shared_ptr<::LevelChunk>
    getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 9 - 对区块进行后处理（例如，生成树木、矿石、湖泊等）。这需要访问邻近区块。
    virtual bool postProcess(::ChunkViewSource& neighborhood);

    // vIndex: 10 - 检查并替换区块。用于世界格式升级，将旧格式的区块数据转换为新格式。
    virtual void checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);

    // vIndex: 11 - 加载区块的核心逻辑，通常是从磁盘读取数据。
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 13 - 在指定区域进行生物后处理（即，生成生物）。
    virtual void postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    // vIndex: 12 - 在指定边界框内进行生物后处理（重载版本）。
    virtual void postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    // vIndex: 14 - 保存一个活动的（在内存中）区块到磁盘。
    virtual bool saveLiveChunk(::LevelChunk& lc);

    // vIndex: 15 - 将区块中的实体数据写入到“转移区”，以便在区块卸载后能恢复。
    virtual void writeEntityChunkTransfer(::LevelChunk& levelChunk);

    // vIndex: 16 - 将实体转移数据写入一个已卸载的区块文件。
    virtual void writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    // vIndex: 17 - 从存储中反序列化实体数据到 LevelChunk 中。
    virtual void deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);

    // vIndex: 18 - 提示系统：即将开始批量丢弃区块。用于性能优化。
    virtual void hintDiscardBatchBegin();

    // vIndex: 19 - 提示系统：批量丢弃区块结束。
    virtual void hintDiscardBatchEnd();

    // vIndex: 20 - 获取一个被其他系统丢弃的区块的所有权，并进行处理（通常是异步保存）。
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    // vIndex: 21 - 压缩内存，尝试释放未使用的资源。
    virtual void compact();

    // vIndex: 22 - 将所有等待写入磁盘的、被丢弃的区块数据立即写入。
    virtual void flushPendingDiscardedChunkWrites();

    // vIndex: 23 - 刷新线程批处理任务。
    virtual void flushThreadBatch();

    // vIndex: 24 - 检查给定的区块位置是否在世界边界之内。
    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const;

    // vIndex: 25 - 获取对内部区块缓存映射的访问权限（可能返回空）。
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap();

    // vIndex: 26 - 获取对内部区块缓存映射的引用。
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& getStorage() const;

    // vIndex: 27 - 清理已删除的实体数据。
    virtual void clearDeletedEntities();

    // vIndex: 28 - 检查此 ChunkSource 是否可以创建 ChunkView（区块视图）。
    virtual bool canCreateViews() const;

    // vIndex: 29 - 尝试获取一个用于地形混合的数据提供者。
    virtual ::std::unique_ptr<::BlendingDataProvider> tryGetBlendingDataProvider();

    // vIndex: 30 - 加载区块元数据字典。
    virtual ::std::shared_ptr<::LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    // vIndex: 31 - 将一个区块实例设置（或替换）到缓存中。
    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk>);

    // vIndex: 32 - 检查此 ChunkSource 是否可以启动异步任务。
    virtual bool canLaunchTasks() const;

    // vIndex: 33 - 检查给定的区块位置是否需要进行地形混合。
    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp);
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    // 构造函数，接收一个父级 ChunkSource
    MCAPI explicit ChunkSource(::std::unique_ptr<::ChunkSource> parent);

    // 检查并为指定的区块分派任务（如加载、生成）
    MCAPI bool _checkAndDispatchTaskForLevelChunk(
        ::std::pair<::ChunkPos, ::ChunkState> const& chunkPosAndExpectedState,
        bool                                         areInTask
    );

    // 检查是否需要为区块启动“替换数据”任务（用于世界升级）
    MCAPI void _checkForReplacementDataTask(::LevelChunk& lc, ::ChunkViewSource& chunks);

    // 检查一个区块是否解锁了其他等待它的区块进入下一阶段
    MCAPI void _checkForUnblockingChunks(::LevelChunk const& lc);



    // 检查区块是否可以进入下一个生成阶段
    MCAPI void _checkLevelChunkForNextStage(
        ::LevelChunk const&                                         lc,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& grid,
        ::ChunkState                                                stateToCheck
    );

    // 检查区块是否可以进行后处理
    MCAPI void _checkLevelChunkForPostProcessing(
        ::LevelChunk const&                                         lc,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& grid
    );

    // 检查一个区块（弱引用）是否处于特定阶段
    MCAPI bool _chunkAtStage(::std::weak_ptr<::LevelChunk> lcwp, ::ChunkState stateToCheck);

    // 创建或替换区块周围的网格区域图
    MCAPI void _createOrReplaceGridAreaMap(::std::shared_ptr<::LevelChunk> lc, bool createNeighbourGridsIfMissing);

    // 释放与指定区块位置关联的生成网格图
    MCAPI void _freeChunkGenerationGridMap(::ChunkPos const& cp, bool isLevelChunkDeletion);

    // 启动一个异步的区块生成任务
    MCAPI void _launchGenerationTask(::std::shared_ptr<::LevelChunk> const& lc, bool areInTask);

    // 启动一个异步的光照计算任务
    MCAPI void _launchLightingTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    // 启动一个异步的后处理任务
    MCAPI void _launchPostProcessingTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    // 启动一个异步的替换数据任务
    MCAPI void _launchReplacementDataTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    // 光照计算任务的实际执行函数
    MCAPI void _lightingTask(::std::shared_ptr<::LevelChunk> const& lc, ::ChunkViewSource& chunks);

    // 区块加载任务的实际执行函数
    MCAPI void _loadChunkTask(::LevelChunk& lc);

    // 后处理任务的实际执行函数
    MCAPI void _postProcessingTask(::LevelChunk& lc, ::ChunkViewSource& chunks);

    // 将所有脏区块（发生过修改的区块）保存到存储中
    MCAPI void _saveDirtyChunks(::LevelStorage&);

    // 派生指定数量的区块生成任务
    MCAPI void _spawnChunkGenerationTasks(int numTasks, bool calledFromTask);

    // 检查并启动区块生成任务
    MCAPI void checkAndLaunchChunkGenerationTasks(bool calledFromTask);

    // 创建一个空的区块视图
    MCAPI ::GridArea<::std::shared_ptr<::LevelChunk>> createEmptyView(
        ::ChunkSource::LoadMode                                                                        lm,
        bool                                                                                           circle,
        ::std::function<void(::buffer_span_mut<::std::shared_ptr<::LevelChunk>>, ::buffer_span<uint>)> add,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        float const*                  serverBuildRatio
    );

    // 获取一个可用的区块（通常是已加载的）
    MCAPI ::std::shared_ptr<::LevelChunk> getAvailableChunk(::ChunkPos const& cp);

    // 使用世界存储管理器连接器来初始化 ChunkSource
    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    // 判断服务器是否应该在给定的位置生成区块
    MCAPI bool shouldServerGeneratePos(::ChunkPos const& chunkPos, float serverBuildRatio, int viewRadius);
    // NOLINTEND

public:
    // 静态变量
    // NOLINTBEGIN
    // 全局性能标志：当前是否在客户端侧运行
    MCAPI static bool& gPerfIsClientSide();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::ChunkSource> parent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $shutdown();

    MCAPI bool $isShutdownDone();

    MCFOLD ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const&);

    MCFOLD ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);

    MCAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCAPI bool $isChunkSaved(::ChunkPos const& chunkPos);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCFOLD bool $postProcess(::ChunkViewSource& neighborhood);

    MCFOLD void $checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);

    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI void $postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    MCAPI void $postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    MCAPI bool $saveLiveChunk(::LevelChunk& lc);

    MCAPI void $writeEntityChunkTransfer(::LevelChunk& levelChunk);

    MCAPI void $writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    MCAPI void $deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);

    MCAPI void $hintDiscardBatchBegin();

    MCAPI void $hintDiscardBatchEnd();

    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCAPI void $compact();

    MCAPI void $flushPendingDiscardedChunkWrites();

    MCAPI void $flushThreadBatch();

    MCFOLD bool $isWithinWorldLimit(::ChunkPos const& cp) const;

    MCFOLD ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap();

    MCAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& $getStorage() const;

    MCFOLD void $clearDeletedEntities();

    MCFOLD bool $canCreateViews() const;

    MCAPI ::std::unique_ptr<::BlendingDataProvider> $tryGetBlendingDataProvider();

    MCAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();

    MCFOLD void $setLevelChunk(::std::shared_ptr<::LevelChunk>);

    MCAPI bool $canLaunchTasks() const;

    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

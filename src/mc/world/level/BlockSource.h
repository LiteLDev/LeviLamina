#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/IBlockSource.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/TickingQueueType.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Biome;
class Block;
class BlockActor;
class BlockDescriptor;
class BlockLegacy;
class BlockSourceListener;
class BlockTickingQueue;
class BlockVolume;
class BoundingBox;
class ChunkSource;
class Dimension;
class EntityContext;
class GameEvent;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ILevel;
class ItemStackBase;
class Level;
class LevelChunk;
class LevelSeed64;
class Material;
class SubChunkPos;
class Vec3;
class WeakEntityRef;
struct ActorBlockSyncMessage;
struct ActorDefinitionIdentifier;
struct Bounds;
struct Brightness;
struct ClipParameters;
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

class Mob;
class Container;
class CompoundTag;

/**
 * @brief 方块源，是访问世界中方块、实体等信息的主要接口。
 * 它不拥有方块数据，而是提供一个“视图”来访问由 Level、Dimension 和 ChunkSource 管理的数据。
 * 游戏中的大部分方块和实体交互都是通过 BlockSource 进行的。
 */
class BlockSource : public ::IBlockSource,
                    public ::EnableGetWeakRef<::BlockSource>,              // 允许获取指向此对象的 WeakRef
                    public ::std::enable_shared_from_this<::BlockSource> { // 允许获取指向此对象的 shared_ptr
public:
    // LiteLoaderBDS API 导出函数
    /**
     * @brief 在指定范围内获取实体列表
     * @param range AABB包围盒范围
     * @param extendDistance 扩展距离
     * @param actorType 要获取的实体类型
     * @param ignoreType 是否忽略指定的实体类型（即获取除指定类型外的所有实体）
     * @return 范围内的实体指针向量
     */
    LLNDAPI std::vector<Actor*> getEntities(
        AABB const& range,
        float       extendDistance = 2.0f,
        ActorType   actorType      = ActorType::TypeMask,
        bool        ignoreType     = false
    ) const;

    /**
     * @brief 尝试在指定位置获取一个容器（如箱子）
     * @param pos 方块位置
     * @return 一个可选的容器引用
     */
    LLNDAPI optional_ref<Container> tryGetContainer(BlockPos const& pos);

    /**
     * @brief 通过NBT数据生成一个实体
     * @param tag 实体的CompoundTag数据
     * @return 一个可选的实体引用
     */
    LLAPI optional_ref<Actor> spawnActor(CompoundTag const&);

public:
    // member variables
    // 成员变量
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::thread::id const> mOwnerThreadID; // 拥有此BlockSource的线程ID，用于调试和断言
    ::ll::TypedStorage<1, 1, bool const>     mAllowUnpopulatedChunks; // 是否允许访问未完全生成的区块
    ::ll::TypedStorage<1, 1, bool const>     mPublicSource;  // 是否为“公共”源，可能会影响某些行为
    ::ll::TypedStorage<1, 1, bool>           mCheckValidity; // 是否进行有效性检查
    ::ll::TypedStorage<8, 8, ::Level&>       mLevel;         // 关联的Level引用
    ::ll::TypedStorage<8, 8, ::ChunkSource&> mChunkSource;   // 关联的区块源引用
    ::ll::TypedStorage<8, 8, ::Dimension&>   mDimension;     // 关联的维度引用
    ::ll::TypedStorage<2, 2, short const>    mMaxHeight;     // 世界最大高度
    ::ll::TypedStorage<2, 2, short const>    mMinHeight;     // 世界最小高度
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDataFetchResult<::Block>>>
        mTempBlockFetchResult; // 用于临时存储方块获取结果的向量，避免重复分配内存
    ::ll::TypedStorage<1, 1, bool>        mAllowTickingChanges; // 是否允许在tick过程中进行修改
    ::ll::TypedStorage<4, 12, ::BlockPos> mPlaceChunkPos;       // 放置方块时所在的区块位置
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceListener*>> mListeners; // 监听此BlockSource变化的监听器列表
    ::ll::TypedStorage<8, 8, ::Tick>     mCurrentTickForValidityChecks; // 用于有效性检查的当前游戏刻
    ::ll::TypedStorage<1, 1, bool>       mIsPersistantBlockSource;      // 是否为持久化的BlockSource
    ::ll::TypedStorage<8, 8, ::ChunkPos> mLastChunkPos;                 // 上次访问的区块位置，用于缓存
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LevelChunk>> mLastChunkWeakPtr; // 上次访问的区块的弱引用指针，用于缓存
    ::ll::TypedStorage<8, 8, ::LevelChunk*> mLastChunkDirectPtr; // 上次访问的区块的裸指针，用于缓存
    ::ll::TypedStorage<8, 8, ::BlockTickingQueue*>     mRandomTickQueue;   // 随机tick队列
    ::ll::TypedStorage<8, 8, ::BlockTickingQueue*>     mTickQueue;         // 普通tick队列
    ::ll::TypedStorage<1, 2, ::BrightnessPair const>   mDefaultBrightness; // 默认亮度
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>> mTempEntityList; // 用于临时存储实体获取结果的向量
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockActor*>> mTempBlockEntityList; // 用于临时存储方块实体获取结果的向量
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mTempCubeList; // 用于临时存储AABB包围盒的向量
    // NOLINTEND

public:
    // prevent constructor by default
    // 默认禁止拷贝构造和赋值操作
    BlockSource& operator=(BlockSource const&);
    BlockSource(BlockSource const&);
    BlockSource();

public:
    // virtual functions
    // 虚函数, 实现了 IBlockSource 接口
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSource() /*override*/;

    // vIndex: 27
    virtual ::WeakRef<::BlockSource> getWeakRef() /*override*/; // 获取自身的弱引用

    // vIndex: 41
    virtual ::Level& getLevel() /*override*/; // 获取关联的Level

    // vIndex: 36
    virtual ::Dimension& getDimension() const /*override*/; // 获取关联的Dimension (const)

    // vIndex: 35
    virtual ::Dimension& getDimension() /*override*/; // 获取关联的Dimension

    // vIndex: 37
    virtual ::Dimension const& getDimensionConst() const /*override*/; // 获取关联的Dimension (const)

    // vIndex: 18
    virtual ::DimensionType getDimensionId() const /*override*/; // 获取维度ID

    // vIndex: 57
    virtual bool isInstaticking(::BlockPos const& pos) const /*override*/; // 检查某个位置的方块是否在“立即处理”列表中

    // vIndex: 28
    virtual void addListener(::BlockSourceListener& l) /*override*/; // 添加一个监听器

    // vIndex: 29
    virtual void removeListener(::BlockSourceListener& l) /*override*/; // 移除一个监听器

    // vIndex: 40
    virtual ::LevelChunk* getChunk(int x, int z) const /*override*/; // 根据区块坐标获取区块

    // vIndex: 39
    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) const /*override*/; // 根据ChunkPos获取区块

    // vIndex: 38
    virtual ::LevelChunk* getChunkAt(::BlockPos const& pos) const /*override*/; // 根据方块位置获取区块

    // vIndex: 44
    virtual short
    getAboveTopSolidBlock(::BlockPos const& pos, bool includeWater, bool includeLeaves, bool iteratePastInitialBlocking)
        const /*override*/; // 获取指定位置上方第一个非空气方块的高度

    // vIndex: 45
    virtual short getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const
        /*override*/; // 获取指定坐标上方第一个非空气方块的高度

    // vIndex: 47
    virtual short getHeight(::std::function<bool(::Block const&)> const& type, ::BlockPos const& pos) const
        /*override*/; // 根据自定义谓词函数获取高度

    // vIndex: 46
    virtual short getHeight(::std::function<bool(::Block const&)> const& type, int x, int z) const
        /*override*/; // 根据自定义谓词函数获取高度

    // vIndex: 13
    virtual ::Material const& getMaterial(::BlockPos const& pos) const /*override*/; // 获取指定位置的材质

    // vIndex: 12
    virtual ::Material const& getMaterial(int x, int y, int z) const /*override*/; // 获取指定坐标的材质

    // vIndex: 34
    virtual short getMaxHeight() const /*override*/; // 获取世界最大高度

    // vIndex: 33
    virtual short getMinHeight() const /*override*/; // 获取世界最小高度

    // vIndex: 14
    virtual bool hasBorderBlock(::BlockPos const pos) const /*override*/; // 检查一个位置是否有边界方块

    // vIndex: 23
    virtual float getBrightness(::BlockPos const& pos) const /*override*/; // 获取指定位置的光照亮度

    // vIndex: 6
    virtual ::Block const& getLiquidBlock(::BlockPos const& p) const /*override*/; // 获取指定位置的液体方块

    // vIndex: 5
    virtual ::Block const& getExtraBlock(::BlockPos const& p) const
        /*override*/; // 获取指定位置的附加方块（如水下海草）

    // vIndex: 54
    virtual bool mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    ) /*override*/; // 检查是否可以在此位置放置方块

    // vIndex: 7
    virtual bool hasBlock(::BlockPos const& pos) const /*override*/; // 检查指定位置是否有方块（非空气）

    // vIndex: 55
    virtual bool canDoBlockDrops() const /*override*/; // 检查是否可以执行方块掉落

    // vIndex: 56
    virtual bool canDoContainedItemDrops() const /*override*/; // 检查是否可以执行容器内物品掉落

    // vIndex: 17
    virtual bool hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const
        /*override*/; // 检查指定边界内的所有区块是否都已加载

    // vIndex: 16
    virtual bool hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const
        /*override*/; // 检查以pos为中心，半径为r的区域内的所有区块是否都已加载

    // vIndex: 15
    virtual bool hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const
        /*override*/; // 检查指定AABB内的所有区块是否都已加载

    // vIndex: 53
    virtual bool areChunksFullyLoaded(::BlockPos const& pos, int r) const
        /*override*/; // 检查指定区域内的区块是否已完全加载（包括邻近区块）

    // vIndex: 8
    virtual bool containsAnyLiquid(::AABB const& box) const /*override*/; // 检查指定AABB内是否含有任何液体

    // vIndex: 9
    virtual bool containsMaterial(::AABB const& box, ::MaterialType material) const
        /*override*/; // 检查指定AABB内是否含有指定材质

    // vIndex: 4
    virtual ::BlockActor const* getBlockEntity(::BlockPos const& pos) const
        /*override*/; // 获取指定位置的方块实体（只读）

    // vIndex: 31
    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::Actor const* except,
        ::AABB const&  bb,
        bool           useHitbox,
        bool           getDisplayEntities
    ) /*override*/; // 获取指定AABB内的实体

    // vIndex: 30
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>) /*override*/
        ; // 根据类型和自定义选择器获取实体

    // vIndex: 19
    virtual void
    fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const
        /*override*/; // 获取与指定AABB相交的所有方块的碰撞箱

    // vIndex: 25
    virtual ::std::vector<::AABB>& fetchAABBs(
        ::AABB const& intersectTestBox,
        bool          withUnloadedChunks
    ) /*override*/; // 获取与指定AABB相交的所有方块的碰撞箱（返回内部缓存）

    // vIndex: 26
    virtual ::std::vector<::AABB>& fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    ) /*override*/; // 获取碰撞形状

    // vIndex: 20
    virtual void fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const /*override*/; // 获取碰撞形状

    // vIndex: 21
    virtual void fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const /*override*/; // 获取碰撞形状和对应的方块

    // vIndex: 22
    virtual ::AABB getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/; // 获取最高的碰撞形状

    // vIndex: 49
    virtual ::HitResult clip(
        ::Vec3 const&                                                            A,
        ::Vec3 const&                                                            B,
        bool                                                                     checkAgainstLiquid,
        ::ShapeType                                                              shapeType,
        int                                                                      maxDistance,
        bool                                                                     ignoreBorderBlocks,
        bool                                                                     fullOnly,
        ::Actor*                                                                 actor,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock
    ) const /*override*/; // 执行一次射线检测（光线追踪）

    // vIndex: 48
    virtual ::HitResult clip(::ClipParameters const& parameters) const /*override*/; // 使用参数对象执行射线检测

    // vIndex: 10
    virtual bool isInWall(::Vec3 const& pos) const /*override*/; // 检查指定位置是否在墙内

    // vIndex: 11
    virtual bool isUnderWater(::Vec3 const& pos, ::Block const& block) const /*override*/; // 检查指定位置是否在水下

    // vIndex: 3
    virtual ::Block const& getBlock(int x, int y, int z) const /*override*/; // 根据坐标获取方块

    // vIndex: 2
    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/; // 根据BlockPos获取方块

    // vIndex: 1
    virtual ::Block const& getBlock(::BlockPos const& pos, uint layer) const
        /*override*/; // 获取指定层的方块（例如，主方块层或附加方块层）

    // vIndex: 32
    virtual bool setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       blockChangeSource
    ) /*override*/; // 设置方块

    // vIndex: 51
    virtual bool isSolidBlockingBlock(int x, int y, int z) const /*override*/; // 检查指定坐标的方块是否为固体阻挡方块

    // vIndex: 52
    virtual bool isSolidBlockingBlock(::BlockPos const& p) const /*override*/; // 检查指定位置的方块是否为固体阻挡方块

    // vIndex: 60
    virtual bool removeBlock(::BlockPos const& pos) /*override*/; // 移除指定位置的方块（设置为空气）

    // vIndex: 42
    virtual ::ILevel& getILevel() const /*override*/; // 获取 ILevel 接口

    // vIndex: 43
    virtual ::LevelSeed64 getLevelSeed64() const /*override*/; // 获取世界的64位种子

    // vIndex: 50
    virtual ::ChunkSource& getChunkSource() /*override*/; // 获取区块源

    // vIndex: 59
    virtual bool checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) /*override*/; // 检查实体对方块的交互权限

    // vIndex: 24
    virtual float getVisualLiquidHeight(::Vec3 const& pos) const /*override*/; // 获取视觉上的液体高度

    // vIndex: 61
    virtual void postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    ) /*override*/; // 发布一个游戏事件

    // vIndex: 58
    virtual void updateCheckForValidityState(bool checkForValidity) /*override*/; // 更新有效性检查的状态
    // NOLINTEND
public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockSource(
        ::Level&       level,
        ::Dimension&   dimension,
        ::ChunkSource& source,
        bool           publicSource,
        bool           allowUnpopulatedChunks,
        bool           allowClientTickingChanges
    );

    MCAPI void _addToTickingQueue(
        ::BlockPos const&  pos,
        ::Block const&     block,
        int                tickDelay,
        int                priorityOffset,
        ::TickingQueueType queueType,
        bool               skipOverrides
    );

    MCAPI void _blockChanged(
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 previousBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       blockChangeSource
    );

    MCAPI void _fetchBorderBlockCollisions(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        bool
    ) const;

    MCAPI void _fetchEntityHelper(
        ::WeakEntityRef const&                              entityRef,
        ::gsl::span<::gsl::not_null<::Actor const*>> const& ignoredEntities,
        ::AABB const&                                       bb,
        bool                                                useHitbox
    );

    MCAPI void _fetchEntityHelper(
        ::WeakEntityRef const&          entityRef,
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    );

    MCAPI bool _getBlockPermissions(::BlockPos const& pos, bool currentState);

    MCAPI ::Brightness
    _getRawBrightness(::BlockPos const& pos, ::Brightness skyDarken, bool propagate, bool accountForNight) const;

    MCAPI void _removeFromTickingQueue(::BlockPos const& pos, ::Block const& block, ::TickingQueueType queueType);

    MCAPI void _updateTallestCollisionShapeWithBorderBlockCollisions(
        ::AABB const&                                      intersectTestBox,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::AABB&                                            result,
        ::Vec3 const&                                      posToMinimizeDistanceToIfMatchingHeight,
        float&                                             currentDistanceSqr
    ) const;

    MCAPI void addToRandomTickingQueuePercentChance(
        ::BlockPos const& pos,
        ::Block const&    block,
        float             percentChance,
        int               priorityOffset,
        bool              skipOverrides
    );

    MCAPI void addToTickingQueue(
        ::BlockPos const& pos,
        ::Block const&    block,
        int               tickDelay,
        int               priorityOffset,
        bool              skipOverrides
    );

    MCAPI bool areChunksFullyLoaded(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI void blockEvent(::BlockPos const& pos, int b0, int b1);

    MCAPI bool canProvideSupport(::BlockPos const& pos, uchar face, ::BlockSupportType type) const;

    MCAPI bool canSeeSky(::BlockPos const& pos) const;

    MCAPI bool canSeeSkyFromBelowWater(::BlockPos const& pos);

    MCAPI bool checkBlockDestroyPermissions(
        ::Actor&               entity,
        ::BlockPos const&      pos,
        ::ItemStackBase const& item,
        bool                   generateParticle
    );

    MCAPI bool containsAnyBlockInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI bool containsAnyBlockOfType(::BlockPos const& min, ::BlockPos const& max, ::Block const& type) const;

    MCAPI bool containsAnySolidBlocking(::AABB const& box) const;

    MCAPI uint64 countBlocksOfType(
        ::BlockDescriptor const& blockDescriptor,
        ::BlockPos const&        min,
        ::BlockPos const&        max,
        uint64                   maxCount
    ) const;

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    fetchActors(::ActorDefinitionIdentifier const& actorId, ::AABB const& bb);

    MCAPI ::std::vector<::BlockActor*> fetchBlockEntities(::BlockActorType blockActorTypeId, ::AABB const& bb) const;

    MCAPI ::std::vector<::BlockActor*> const& fetchBlockEntities(::AABB const& bb);

    MCAPI bool fetchBlocks(::BlockPos const& origin, ::BlockVolume& volume) const;

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBoxSorted(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const> fetchBlocksInCylinder(
        ::BlockPos const&                     centerPos,
        uint                                  radius,
        uint                                  height,
        ::std::function<bool(::Block const&)> predicate
    );

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const> fetchBlocksInCylinderSorted(
        ::BlockPos const&                     centerPos,
        uint                                  radius,
        uint                                  height,
        ::std::function<bool(::Block const&)> predicate
    );

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::gsl::span<::gsl::not_null<::Actor const*>> ignoredEntities,
        ::AABB const&                                bb,
        bool                                         useHitbox,
        bool                                         getDisplayEntities
    );

    MCAPI ::std::vector<::Actor*> const& fetchEntities2(::ActorType type, ::AABB const& aabb, bool ignoreTargetType);

    MCAPI ::Actor* fetchNearestEntityOfType(::Actor const* except, ::AABB const& bb, ::ActorType entityTypeId);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    fetchPlayers(::AABB const& bb, ::Actor const* except, ::std::function<bool(::Actor*)> selector);

    MCAPI bool findNextTopSolidBlockUnder(::BlockPos& pos);

    MCAPI void fireBlockChanged(
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            flags,
        ::BlockChangedEventTarget      eventTarget,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       source
    );

    MCAPI void fireBlockEntityChanged(::BlockActor& te);

    MCAPI ::Biome const& getBiome(::BlockPos const& pos) const;

    MCAPI ::BlockActor* getBlockEntity(::BlockPos const&);

    MCAPI ::BrightnessPair getBrightnessPair(::BlockPos const& pos) const;

    MCAPI float getSeenPercent(::Vec3 const& center, ::AABB const& bb);

    MCAPI void getTallestCollisionShapeFromUnloadedChunksAABBs(
        ::AABB const& intersectTestBox,
        ::AABB&       tallestCollisionShape,
        ::Vec3 const& posToMinimizeDistanceToIfMatchingHeight,
        float&        currentDistanceSqr
    ) const;

    MCAPI bool hasChunksAt(::BlockPos const& min, ::BlockPos const& max, bool ignoreClientChunk) const;

    MCAPI ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI bool hasTickInCurrentTick(::BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::Block const& block, ::TickingQueueType queueType) const;

    MCAPI bool
    hasTickInPendingTicks(::BlockPos const& pos, ::BlockLegacy const& block, ::TickingQueueType queueType) const;

    MCAPI bool hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const;

    MCAPI bool isEmptyBlock(int x, int y, int z);

    MCAPI bool isNearUnloadedChunks(::ChunkPos const& pos) const;

    MCAPI bool isTouchingMaterial(::BlockPos const& pos, ::MaterialType type) const;

    MCAPI bool isUnobstructedByEntities(::AABB const& aabb, ::Actor const* ignoreEntity);

    MCAPI bool isWithinHeightLimits(int y) const;

    MCAPI void neighborChanged(::BlockPos const& neighPos, ::BlockPos const& myPos);

    MCAPI void
    postGameEvent(::Actor* source, ::GameEvent const& gameEvent, ::Vec3 const& originPos, ::Block const* affectedBlock);

    MCAPI bool removeBlock(int x, int y, int z);

    MCAPI bool setBlock(
        ::BlockPos const&               pos,
        ::Block const&                  block,
        int                             updateFlags,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::ActorBlockSyncMessage const*  syncMsg,
        ::Actor*                        blockChangeSource
    );

    MCAPI bool setBlock(int x, int y, int z, ::Block const& block, int updateFlags, ::Actor* blockChangeSource);

    MCAPI void setBorderBlock(::BlockPos const& pos, bool val);

    MCAPI bool setExtraBlock(::BlockPos const& p, ::Block const& block, int updateFlags);

    MCAPI bool setExtraBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCAPI void updateNeighborsAt(::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool containsAnyLiquid(::IConstBlockSource const& region, ::AABB const& box);

    MCAPI static bool containsMaterial(::IConstBlockSource const& region, ::AABB const& box, ::MaterialType material);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&       level,
        ::Dimension&   dimension,
        ::ChunkSource& source,
        bool           publicSource,
        bool           allowUnpopulatedChunks,
        bool           allowClientTickingChanges
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::WeakRef<::BlockSource> $getWeakRef();

    MCFOLD ::Level& $getLevel();

    MCFOLD ::Dimension& $getDimension() const;

    MCFOLD ::Dimension& $getDimension();

    MCFOLD ::Dimension const& $getDimensionConst() const;

    MCAPI ::DimensionType $getDimensionId() const;

    MCAPI bool $isInstaticking(::BlockPos const& pos) const;

    MCAPI void $addListener(::BlockSourceListener& l);

    MCAPI void $removeListener(::BlockSourceListener& l);

    MCAPI ::LevelChunk* $getChunk(int x, int z) const;

    MCAPI ::LevelChunk* $getChunk(::ChunkPos const& pos) const;

    MCAPI ::LevelChunk* $getChunkAt(::BlockPos const& pos) const;

    MCAPI short $getAboveTopSolidBlock(
        ::BlockPos const& pos,
        bool              includeWater,
        bool              includeLeaves,
        bool              iteratePastInitialBlocking
    ) const;

    MCAPI short $getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const;

    MCAPI short $getHeight(::std::function<bool(::Block const&)> const& type, ::BlockPos const& pos) const;

    MCAPI short $getHeight(::std::function<bool(::Block const&)> const& type, int x, int z) const;

    MCAPI ::Material const& $getMaterial(::BlockPos const& pos) const;

    MCAPI ::Material const& $getMaterial(int x, int y, int z) const;

    MCAPI short $getMaxHeight() const;

    MCAPI short $getMinHeight() const;

    MCAPI bool $hasBorderBlock(::BlockPos const pos) const;

    MCAPI float $getBrightness(::BlockPos const& pos) const;

    MCAPI ::Block const& $getLiquidBlock(::BlockPos const& p) const;

    MCAPI ::Block const& $getExtraBlock(::BlockPos const& p) const;

    MCAPI bool $mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    );

    MCAPI bool $hasBlock(::BlockPos const& pos) const;

    MCAPI bool $canDoBlockDrops() const;

    MCAPI bool $canDoContainedItemDrops() const;

    MCAPI bool $hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const;

    MCAPI bool $hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const;

    MCAPI bool $hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const;

    MCAPI bool $areChunksFullyLoaded(::BlockPos const& pos, int r) const;

    MCAPI bool $containsAnyLiquid(::AABB const& box) const;

    MCAPI bool $containsMaterial(::AABB const& box, ::MaterialType material) const;

    MCFOLD ::BlockActor const* $getBlockEntity(::BlockPos const& pos) const;

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    $fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities);

    MCAPI void
    $fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const;

    MCAPI ::std::vector<::AABB>& $fetchAABBs(::AABB const& intersectTestBox, bool withUnloadedChunks);

    MCAPI ::std::vector<::AABB>& $fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    );

    MCAPI void $fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const;

    MCAPI void $fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const;

    MCAPI ::AABB $getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::HitResult $clip(
        ::Vec3 const&                                                            A,
        ::Vec3 const&                                                            B,
        bool                                                                     checkAgainstLiquid,
        ::ShapeType                                                              shapeType,
        int                                                                      maxDistance,
        bool                                                                     ignoreBorderBlocks,
        bool                                                                     fullOnly,
        ::Actor*                                                                 actor,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock
    ) const;

    MCAPI ::HitResult $clip(::ClipParameters const& parameters) const;

    MCAPI bool $isInWall(::Vec3 const& pos) const;

    MCAPI bool $isUnderWater(::Vec3 const& pos, ::Block const& block) const;

    MCAPI ::Block const& $getBlock(int x, int y, int z) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& pos, uint layer) const;

    MCAPI bool $setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       blockChangeSource
    );

    MCAPI bool $isSolidBlockingBlock(int x, int y, int z) const;

    MCAPI bool $isSolidBlockingBlock(::BlockPos const& p) const;

    MCAPI bool $removeBlock(::BlockPos const& pos);

    MCFOLD ::ILevel& $getILevel() const;

    MCAPI ::LevelSeed64 $getLevelSeed64() const;

    MCFOLD ::ChunkSource& $getChunkSource();

    MCAPI bool $checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    );

    MCFOLD float $getVisualLiquidHeight(::Vec3 const& pos) const;

    MCAPI void $postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    );

    MCAPI void $updateCheckForValidityState(bool checkForValidity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

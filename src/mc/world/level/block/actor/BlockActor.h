#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ActorTerrainInterlockData.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class IConstBlockSource;
class ILevel;
class LevelChunk;
class PistonBlockActor;
class Player;
class ProfanityContext;
class SaveContext;
// clang-format on

/**
 * @brief 方块实体类 (BlockActor)
 *
 * BlockActor，在其他地方也常被称为“Tile Entity”，是附加到特定方块上的数据和功能单元。
 * 它们允许方块拥有动态数据、执行每刻（tick）更新、拥有物品栏等，而普通的方块本身是静态的。
 * 例如，箱子、熔炉、信标等都是通过BlockActor来实现其功能的。
 */
class BlockActor {
public:
    // BlockActor 内部类型定义
    // 将字符串ID映射到方块实体类型
    using MapIdType = ::std::map<::std::string, ::BlockActorType>;
    // 将方块实体类型映射到字符串ID
    using MapTypeId = ::std::map<::BlockActorType, ::std::string>;

public:
    /**
     * @brief 刷新方块实体状态。
     * @param blockSource 可选的方块源引用，用于与世界交互。
     */
    LLAPI void refresh(optional_ref<class BlockSource> blockSource = std::nullopt);

    /**
     * @brief (LLNDAPI) 从NBT数据创建一个方块实体实例。
     * @param nbt 包含方块实体数据的CompoundTag。
     * @return 一个指向新创建的BlockActor的共享指针。
     */
    LLNDAPI static std::shared_ptr<BlockActor> create(class CompoundTag const& nbt);

    /**
     * @brief (LLNDAPI) 从NBT数据和指定位置创建一个方块实体实例。
     * @param nbt 包含方块实体数据的CompoundTag。
     * @param pos 方块实体的位置。
     * @return 一个指向新创建的BlockActor的共享指针。
     */
    LLNDAPI static std::shared_ptr<BlockActor> create(class CompoundTag const& nbt, class BlockPos const& pos);

public:
    // 成员变量
    // NOLINTBEGIN (忽略命名规范检查)
    ::ll::TypedStorage<4, 4, int>            mTickCount;    // 记录方块实体存在了多少个游戏刻（tick）
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;        // 指向该方块实体所附着的方块实例的指针
    ::ll::TypedStorage<4, 4, float>          mDestroyTimer; // 销毁计时器
    ::ll::TypedStorage<4, 12, ::Vec3>        mDestroyDirection; // 销毁时的方向
    ::ll::TypedStorage<4, 4, float>          mDestroyProgress;  // 销毁进度
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPosition;         // 方块实体在世界中的位置
    ::ll::TypedStorage<4, 24, ::AABB>        mBB;               // 方块实体的包围盒（用于渲染和碰撞）
    ::ll::TypedStorage<4, 4, ::BlockActorType const>               mType;       // 方块实体的类型
    ::ll::TypedStorage<4, 4, ::BlockActorRendererId>               mRendererId; // 方块实体的渲染器ID
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mCustomName; // 自定义名称
    ::ll::TypedStorage<8, 32, ::std::string> mFilteredCustomName; // 经过脏话过滤后的自定义名称
    ::ll::TypedStorage<4, 4, int>            mRepairCost;         // 修复成本（用于铁砧等）
    ::ll::TypedStorage<1, 1, bool>           mClientSideOnly;     // 标记是否仅存在于客户端
    ::ll::TypedStorage<1, 1, bool>           mIsMovable;          // 标记是否可以被活塞等移动
    ::ll::TypedStorage<1, 1, bool>           mSaveCustomName;     // 标记是否应保存自定义名称
    ::ll::TypedStorage<1, 1, bool> mCanRenderCustomName; // 标记是否可以渲染自定义名称（如在头顶显示）
    ::ll::TypedStorage<4, 4, float const>                  signShadowRadius;      // 告示牌阴影半径
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData> mTerrainInterlockData; // 实体与地形交互锁数据
    ::ll::TypedStorage<1, 1, bool> mChanged; // 标记方块实体数据是否已更改，需要保存
    // NOLINTEND

public:
    // 默认构造函数被禁用，防止创建无类型的方块实体
    BlockActor();

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0 - 析构函数
    virtual ~BlockActor();

    // vIndex: 1 - 从NBT数据加载方块实体
    virtual void load(::ILevel&, ::CompoundTag const& tag, ::DataLoadHelper&);

    // vIndex: 2 - 将方块实体数据保存到NBT
    virtual bool save(::CompoundTag& tag, ::SaveContext const&) const;

    // vIndex: 3 - 保存物品实例相关的数据（例如，当方块被破坏并掉落为物品时）
    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    // vIndex: 4 - 保存方块本身的数据
    virtual void saveBlockData(::CompoundTag&, ::BlockSource&) const;

    // vIndex: 5 - 加载方块本身的数据
    virtual void loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    // vIndex: 6 - 当自定义NBT标签加载完成时调用
    virtual void onCustomTagLoadDone(::BlockSource&);

    // vIndex: 7 - 检查是否应永久渲染（不受距离限制）
    virtual bool isPermanentlyRendered() const;

    // vIndex: 8 - 检查是否在渲染距离内
    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    // vIndex: 9 - 每游戏刻（tick）调用一次，用于更新逻辑
    virtual void tick(::BlockSource& region);

    // vIndex: 10 - 当方块实体发生变化时调用
    virtual void onChanged(::BlockSource&);

    // vIndex: 11 - 检查方块实体是否可以被移动（例如被活塞推动）
    virtual bool isMovable(::BlockSource&);

    // vIndex: 12 - 检查自定义名称是否需要保存
    virtual bool isCustomNameSaved();

    // vIndex: 13 - 当方块被放置时调用
    virtual void onPlace(::BlockSource&);

    // vIndex: 14 - 当方块实体被移动时调用
    virtual void onMove();

    // vIndex: 15 - 当方块实体被移除时调用
    virtual void onRemoved(::BlockSource&);

    // vIndex: 16 - 检查在区块卸载时是否应保留此方块实体
    virtual bool isPreserved(::BlockSource&) const;

    // vIndex: 17 - 决定是否应保留此方块实体
    virtual bool shouldPreserve(::BlockSource&);

    // vIndex: 18 - 触发一个事件（用于客户端动画等）
    virtual void triggerEvent(int, int);

    // vIndex: 19 - 清除缓存数据
    virtual void clearCache();

    // vIndex: 20 - 当相邻方块发生变化时调用
    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);

    // vIndex: 21 - 获取阴影的半径
    virtual float getShadowRadius(::BlockSource&) const;

    // vIndex: 22 - 检查是否有alpha（透明）渲染层
    virtual bool hasAlphaLayer() const;

    // vIndex: 23 - 获取与破坏方块相关的裂纹实体
    virtual ::BlockActor* getCrackEntity(::BlockSource&, ::BlockPos const&);

    // vIndex: 24 - 获取碰撞箱形状
    virtual ::AABB getCollisionShape(::IConstBlockSource const&) const;

    // vIndex: 25 - 获取用于调试的文本信息
    virtual void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    // vIndex: 26 - 获取自定义名称
    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const;

    // vIndex: 27 - 获取经过脏话过滤的自定义名称
    virtual ::std::string const& getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const& context
    );

    // vIndex: 28 - 获取方块实体的名称（通常是其ID）
    virtual ::std::string getName() const;

    // vIndex: 29 - 设置自定义名称
    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name);

    // vIndex: 30 - 获取用于沉浸式阅读器的文本
    virtual ::std::string getImmersiveReaderText(::BlockSource&);

    // vIndex: 31 - 获取修复成本
    virtual int getRepairCost() const;

    // vIndex: 33 - 获取拥有此方块的活塞（如果它是一个被推动的方块）
    virtual ::PistonBlockActor* getOwningPiston(::BlockSource&);

    // vIndex: 32 - 获取拥有此方块的活塞（const版本）
    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource&) const;

    // vIndex: 35 - 获取容器接口（用于访问物品栏）
    virtual ::Container* getContainer();

    // vIndex: 34 - 获取容器接口（const版本）
    virtual ::Container const* getContainer() const;

    // vIndex: 36 - 擦除战利品表
    virtual void eraseLootTable();

    // vIndex: 37 - 当所在区块被加载时调用
    virtual void onChunkLoaded(::LevelChunk&);

    // vIndex: 38 - 当所在区块被卸载时调用
    virtual void onChunkUnloaded(::LevelChunk&);

    // vIndex: 39 - 当所在子区块被加载时调用
    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);

    // vIndex: 40 - 获取用户生成内容（UGC）的字符串
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const&) const;

    // vIndex: 41 - 获取经过过滤的用户生成内容（UGC）的字符串
    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const&) const;

    // vIndex: 42 - 设置用户生成内容（UGC）的字符串
    virtual void setUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    // vIndex: 43 - 设置经过过滤的用户生成内容（UGC）的字符串
    virtual void setFilteredUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    // vIndex: 44 - 在加载时进行修正处理
    virtual void fixupOnLoad(::LevelChunk&);

    // vIndex: 45 - 获取用于同步到客户端的更新数据包
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    // vIndex: 46 - 当收到更新数据包时调用
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    // vIndex: 47 - 检查玩家是否可以更新此方块实体
    virtual bool _playerCanUpdate(::Player const&) const;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    /**
     * @brief 构造函数。
     * @param type 方块实体的类型。
     * @param pos 方块实体的位置。
     * @param name 方块实体的名称标识符。
     */
    MCAPI BlockActor(::BlockActorType type, ::BlockPos const& pos, ::std::string const&);

    /**
     * @brief 处理来自服务器的更新数据包。
     * @param data 数据包中的NBT数据。
     * @param region 方块源。
     * @param fromPlayer 发送该数据包的玩家。
     * @return 如果处理成功，返回true。
     */
    MCAPI bool onUpdatePacket(::CompoundTag const& data, ::BlockSource& region, ::Player const* fromPlayer);
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    /**
     * @brief 获取从方块实体类型到其字符串ID的映射。
     */
    MCAPI static ::std::map<::BlockActorType, ::std::string> const& _getClassIdMap();

    /**
     * @brief 从NBT数据静态加载一个方块实体。
     * @param level 关卡引用。
     * @param tag 包含方块实体数据的CompoundTag。
     * @param dataLoadHelper 数据加载辅助对象。
     * @return 一个指向加载的BlockActor的共享指针。
     */
    MCAPI static ::std::shared_ptr<::BlockActor>
    loadStatic(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockActorType type, ::BlockPos const& pos, ::std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const&) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD void $saveBlockData(::CompoundTag&, ::BlockSource&) const;

    MCFOLD void $loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    MCFOLD void $onCustomTagLoadDone(::BlockSource&);

    MCFOLD bool $isPermanentlyRendered() const;

    MCAPI bool $isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    MCAPI void $tick(::BlockSource& region);

    MCFOLD void $onChanged(::BlockSource&);

    MCAPI bool $isMovable(::BlockSource&);

    MCAPI bool $isCustomNameSaved();

    MCFOLD void $onPlace(::BlockSource&);

    MCFOLD void $onMove();

    MCFOLD void $onRemoved(::BlockSource&);

    MCFOLD bool $isPreserved(::BlockSource&) const;

    MCFOLD bool $shouldPreserve(::BlockSource&);

    MCFOLD void $triggerEvent(int, int);

    MCFOLD void $clearCache();

    MCFOLD void $onNeighborChanged(::BlockSource&, ::BlockPos const&);

    MCFOLD float $getShadowRadius(::BlockSource&) const;

    MCFOLD bool $hasAlphaLayer() const;

    MCFOLD ::BlockActor* $getCrackEntity(::BlockSource&, ::BlockPos const&);

    MCAPI ::AABB $getCollisionShape(::IConstBlockSource const&) const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCFOLD ::Bedrock::Safety::RedactableString const& $getCustomName() const;

    MCAPI ::std::string const& $getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const& context);

    MCFOLD ::std::string $getName() const;

    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& name);

    MCFOLD ::std::string $getImmersiveReaderText(::BlockSource&);

    MCAPI int $getRepairCost() const;

    MCFOLD ::PistonBlockActor* $getOwningPiston(::BlockSource&);

    MCFOLD ::PistonBlockActor const* $getOwningPiston(::BlockSource&) const;

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCFOLD void $eraseLootTable();

    MCFOLD void $onChunkLoaded(::LevelChunk&);

    MCFOLD void $onChunkUnloaded(::LevelChunk&);

    MCFOLD void $onSubChunkLoaded(::LevelChunk&, short, bool);

    MCFOLD ::std::vector<::std::string> $getUgcStrings(::CompoundTag const&) const;

    MCFOLD ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const&) const;

    MCFOLD void $setUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    MCFOLD void $setFilteredUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    MCFOLD void $fixupOnLoad(::LevelChunk&);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCFOLD bool $_playerCanUpdate(::Player const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorFillingContainer.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockActor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class Container;
class ContainerContentChangeListener;
class DataLoadHelper;
class ILevel;
class ItemStack;
class Player;
class SaveContext;
// clang-format on

/**
 * @brief 箱子方块实体（Chest Block Actor）
 *
 * 这是与箱子方块（ChestBlock）关联的方块实体（Block Entity/Block Actor）。
 * 它负责存储箱子的实际内容（物品），管理箱盖的打开/关闭动画，处理
 * 两个箱子配对形成一个大箱子的逻辑，以及追踪有多少玩家正在查看此箱子。
 * 它是箱子的“大脑”和“仓库”。
 */
class ChestBlockActor : public ::RandomizableBlockActorFillingContainer {
public:
    // 成员变量
    // NOLINTBEGIN
    float                                 mSpeed;                    // 箱盖动画的当前速度
    bool                                  mIsGlobalChest;            // 是否为全局箱子（末影箱）
    bool                                  mUsesLegacyBlockDetection; // 是否使用旧版的方块检测逻辑
    float                                 mObstructionHeight;        // 箱子上方障碍物的高度
    bool                                  mPairLead : 1; // 在大箱子中，这是否是“主导”的那一半
    float                                 mOpenness;     // 当前箱盖的打开程度（0.0 到 1.0）
    float                                 mOldOpenness;  // 上一 tick 的箱盖打开程度，用于平滑动画
    bool                                  mIsOpen;       // 箱子当前是否处于打开状态
    int                                   mTickInterval; // 更新间隔
    bool                                  mPairingChanged   : 1;     // 配对状态是否已改变
    bool                                  mAlongX           : 1;     // 大箱子是否沿 X 轴配对
    bool                                  mDeferredPairLoad : 1;     // 是否需要延迟加载配对信息
    bool                                  mConverted        : 1;     // 是否已从旧格式转换
    int                                   mDeferredPairX;            // 延迟加载的配对箱子的 X 坐标
    int                                   mDeferredPairZ;            // 延迟加载的配对箱子的 Z 坐标
    ::ChestBlockActor*                    mLargeChestPaired;         // 指向配对的另一个箱子实体的指针
    ::BlockPos                            mLargeChestPairedPosition; // 配对的另一个箱子的位置
    bool                                  mIsTrappedChest;           // 这是否是一个陷阱箱
    bool                                  mIsFindable;               // 是否能通过藏宝图或 /locate 命令找到
    ::std::unordered_set<::ActorUniqueID> mOpenedByIds; // 正在查看此箱子的所有玩家的唯一ID集合
    int                                   mUpdateFlags; // 更新标志
    // NOLINTEND

public:
    // 阻止默认构造函数
    ChestBlockActor();

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestBlockActor() /*override*/; // 析构函数

    // vIndex: 20
    /**
     * @brief 获取容器的大小。
     * @return 如果是小箱子返回27，大箱子返回54。
     */
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/; // 获取物品最大堆叠数量

    // vIndex: 28
    /**
     * @brief 获取容器的名称（用于UI显示）。
     */
    virtual ::std::string getName() const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/; // 获取指定槽位的物品

    // vIndex: 12
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/; // 设置指定槽位的物品

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds( // 服务器端初始化物品的网络ID
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 48
    /**
     * @brief 从 NBT 标签加载物品。
     */
    virtual void loadItems(::CompoundTag const& base, ::ILevel& level);

    // vIndex: 1
    /**
     * @brief 从 NBT 标签加载方块实体的所有数据（包括物品和状态）。
     */
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 49
    /**
     * @brief 将物品保存到 NBT 标签。
     */
    virtual bool saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    // vIndex: 2
    /**
     * @brief 将方块实体的所有数据保存到 NBT 标签。
     */
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 3
    /**
     * @brief 保存物品实例数据到 NBT 标签。
     */
    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 19
    virtual void clearCache() /*override*/; // 清理缓存

    // vIndex: 9
    /**
     * @brief 每 tick 执行的更新函数。
     * @details 主要处理箱盖的开合动画和更新玩家计数。
     */
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 18
    /**
     * @brief 触发一个事件（例如，陷阱箱的打开事件）。
     */
    virtual void triggerEvent(int b0, int b1) /*override*/;

    // vIndex: 22
    /**
     * @brief 当玩家开始打开此容器时调用。
     * @details 增加打开此箱子的玩家计数，并开始箱盖动画。
     */
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 15
    /**
     * @brief 当方块实体被移除时调用。
     * @details 处理与另一个箱子取消配对的逻辑。
     */
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 23
    /**
     * @brief 当玩家停止打开此容器时调用。
     * @details 减少打开此箱子的玩家计数。
     */
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 10
    virtual void onChanged(::BlockSource& region) /*override*/; // 当容器内容改变时调用

    // vIndex: 20
    /**
     * @brief 当邻近方块发生变化时调用。
     * @details 用于检测配对或取消配对。
     */
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;

    // vIndex: 23
    virtual ::BlockActor* getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/; // 获取裂缝实体

    // vIndex: 49
    virtual int clearInventory(int resizeTo) /*override*/; // 清空物品栏

    // vIndex: 35
    virtual ::Container* getContainer() /*override*/; // 获取容器指针

    // vIndex: 34
    virtual ::Container const* getContainer() const /*override*/; // 获取常量容器指针

    // vIndex: 14
    virtual void onMove() /*override*/; // 当方块被移动时调用

    // vIndex: 13
    /**
     * @brief 当方块被放置时调用。
     * @details 尝试与相邻的箱子配对。
     */
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 50
    virtual void openBy(::Player& p); // 被玩家打开

    // vIndex: 34
    virtual void setContainerChanged(int slot) /*override*/; // 标记容器已改变

    // vIndex: 32
    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/; // 检查物品是否能被推入（例如被漏斗）

    // vIndex: 33
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/; // 检查物品是否能被拉出（例如被漏斗）

    // vIndex: 25
    virtual void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const
        /*override*/; // 获取调试文本

    // vIndex: 3
    virtual void addContentChangeListener(::ContainerContentChangeListener* listener
    ) /*override*/; // 添加内容变化监听器

    // vIndex: 4
    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener
    ) /*override*/; // 移除内容变化监听器

    // vIndex: 41
    virtual void initializeContainerContents(::BlockSource& region) /*override*/; // 初始化容器内容

    // vIndex: 45
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region
    ) /*override*/; // 获取用于同步的更新数据包

    // vIndex: 46
    virtual void
    _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/; // 当收到更新数据包时调用

    // vIndex: 51
    virtual void playOpenSound(::BlockSource& region); // 播放打开音效

    // vIndex: 52
    virtual void playCloseSound(::BlockSource& region); // 播放关闭音效

    // vIndex: 53
    /**
     * @brief 检查箱子是否能被打开（例如，上方没有实体方块阻挡）。
     */
    virtual bool _canOpenThis(::BlockSource& region) const;

    // vIndex: 54
    /**
     * @brief 获取用于阻挡检测的边界框（AABB）。
     */
    virtual ::AABB getObstructionAABB() const;

    // vIndex: 55
    /**
     * @brief 检测实体阻挡（例如，猫坐在箱子上）。
     */
    virtual bool _detectEntityObstruction(::BlockSource& region) const;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    /**
     * @brief 构造函数。
     */
    MCAPI ChestBlockActor(
        ::BlockActorType       type,
        ::std::string const&   id,
        ::BlockActorRendererId renderId,
        ::BlockPos const&      pos,
        bool                   isTrapped
    );

    /**
     * @brief 关闭箱子（内部函数）。
     */
    MCAPI void _closeChest(::BlockSource& region, ::Player* player);

    /**
     * @brief 检测方块阻挡（内部函数）。
     */
    MCAPI bool _detectBlockObstruction(::BlockSource& region) const;

    /**
     * @brief 保存客户端侧的状态（内部函数）。
     */
    MCAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    /**
     * @brief 尝试与指定位置的箱子配对（内部函数）。
     */
    MCAPI void _tryToPairWith(::BlockSource& region, ::BlockPos const& position);

    /**
     * @brief 取消配对（内部函数）。
     */
    MCAPI void _unpair();

    /**
     * @brief 验证配对的箱子是否仍然有效（内部函数）。
     */
    MCAPI void _validatePairedChest(::BlockSource& region);

    /**
     * @brief 检查是否能与另一个方块实体配对。
     */
    MCAPI bool canPairWith(::BlockActor* entity, ::BlockSource& region);

    /**
     * @brief 强制关闭箱子，踢出所有正在查看的玩家。
     */
    MCAPI void forceCloseChest(::BlockSource& region);

    /**
     * @brief 与另一个箱子实体配对。
     * @param lead 是否是主导的一半。
     */
    MCAPI void pairWith(::ChestBlockActor* chest, bool lead);

    /**
     * @brief 与另一个箱子取消配对。
     */
    MCAPI void unpair(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockActorType       type,
        ::std::string const&   id,
        ::BlockActorRendererId renderId,
        ::BlockPos const&      pos,
        bool                   isTrapped
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
    MCAPI int $getContainerSize() const;

    MCFOLD int $getMaxStackSize() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI void $loadItems(::CompoundTag const& base, ::ILevel& level);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD void $clearCache();

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $triggerEvent(int b0, int b1);

    MCAPI void $startOpen(::Player& player);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void $stopOpen(::Player& player);

    MCAPI void $onChanged(::BlockSource& region);

    MCFOLD void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCAPI ::BlockActor* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    MCAPI int $clearInventory(int resizeTo);

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCFOLD void $onMove();

    MCAPI void $onPlace(::BlockSource& region);

    MCAPI void $openBy(::Player& p);

    MCAPI void $setContainerChanged(int slot);

    MCFOLD bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCFOLD bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $initializeContainerContents(::BlockSource& region);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCAPI void $playOpenSound(::BlockSource& region);

    MCAPI void $playCloseSound(::BlockSource& region);

    MCAPI bool $_canOpenThis(::BlockSource& region) const;

    MCAPI ::AABB $getObstructionAABB() const;

    MCAPI bool $_detectEntityObstruction(::BlockSource& region) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForFillingContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};

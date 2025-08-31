#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/IContainerManager.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerManagerController;
class ContainerModel;
class DynamicContainerTracker;
class IContainerRegistryAccess;
class ItemStack;
class Player;
struct FullContainerName;
struct PlayerContainerRefresher;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

/**
 * @brief 容器管理器模型（Container Manager Model）
 *
 * 这个类是MVC（Model-View-Controller）设计模式中的“模型”部分。
 * 它不直接代表一个容器，而是管理一个与玩家交互的“容器界面”所涉及的**所有**容器。
 * 例如，当玩家打开一个箱子时，这个管理器会同时管理“箱子容器模型”和“玩家物品栏容器模型”。
 *
 * 它负责处理容器之间的数据同步、状态更新，并向订阅者（通常是控制器）广播变更。
 * 它继承自 IContainerManager 接口。
 */
class ContainerManagerModel : public ::IContainerManager {
public:
    // ContainerManagerModel 内部类型定义
    // 定义一个多线程安全的发布者类型，用于通知动态容器的变更。
    using DynamicContainerPublisher =
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>;

public:
    // 成员变量
    // NOLINTBEGIN
    // 玩家容器刷新器，用于在需要时刷新玩家的物品栏。
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PlayerContainerRefresher>>> mContainerRefresher;
    // 动态容器追踪器的共享指针。
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::DynamicContainerTracker>>> mDynamicContainerTracker;
    // 对容器注册表的弱引用，用于安全地访问容器注册表。
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryAccess>> mRegistryAccess;
    // 对当前管理此容器的玩家的引用。
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // 存储上一次同步时的所有物品槽的副本，用于检测物品变化。
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mLastSlots;
    // 当前容器管理器的唯一ID。
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    // 当前容器的类型（例如：箱子、工作台等）。
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerType;
    // 容器类型变化的订阅者列表。当容器类型改变时，会通知所有订阅者。
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::ContainerType),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>>
        mContainerTypeSubscribers;
    // 一个回调函数映射，用于在本对象被销毁时通知相关的控制器（Controller）。
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerManagerController const*, ::std::function<void(::ContainerManagerModel&)>>>
        mInformControllerOfDestructionCallbacks;
    // 容器屏幕的上下文信息，如当前交互的方块位置。
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext> mScreenContext;
    // 存储此管理器管理的所有容器模型。键是容器的字符串名称（如 "player_inventory"），值是容器模型对象的共享指针。
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::ContainerModel>>> mContainers;
    // 当动态容器内容发生变化时，用于通知订阅者的发布者。
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnDynamicContainerChangePublisher;
    // NOLINTEND

public:
    // 阻止默认构造、拷贝构造和赋值操作，强制使用特定参数的构造函数来创建实例。
    ContainerManagerModel& operator=(ContainerManagerModel const&);
    ContainerManagerModel(ContainerManagerModel const&);
    ContainerManagerModel();

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0
    /**
     * @brief 析构函数。
     */
    virtual ~ContainerManagerModel() /*override*/;

    // vIndex: 14
    /**
     * @brief 每 tick 执行的更新函数。
     * @return 如果有更新则返回 true。
     */
    virtual bool tick();

    // vIndex: 1
    /**
     * @brief 获取容器ID。
     */
    virtual ::ContainerID getContainerId() const /*override*/;

    // vIndex: 2
    /**
     * @brief 设置容器ID。
     */
    virtual void setContainerId(::ContainerID id) /*override*/;

    // vIndex: 3
    /**
     * @brief 获取容器类型。
     */
    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const /*override*/;

    // vIndex: 4
    /**
     * @brief 设置容器类型。
     */
    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) /*override*/;

    // vIndex: 5
    /**
     * @brief 注册一个监听容器类型变化的监听器。
     * @param callback 当容器类型变化时要执行的回调函数。
     * @return 返回一个订阅对象，该对象在销毁时会自动取消订阅。
     */
    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const
        /*override*/;

    // vIndex: 15
    /**
     * @brief 扣除玩家的经验等级（例如用于附魔）。
     * @param levels 要扣除的等级数。
     */
    virtual void debitPlayerLevels(int levels);

    // vIndex: 16
    /**
     * @brief 检查玩家是否处于创造模式。
     */
    virtual bool isCreativeMode() const;

    // vIndex: 17
    /**
     * @brief 检查当前是否在客户端。
     */
    virtual bool isClientSide() const;

    // vIndex: 18
    /**
     * @brief 检查当前是否由服务器权威控制。
     */
    virtual bool isServerAuthoritative() const;

    // vIndex: 19
    /**
     * @brief 检查容器交互是否仍然有效（例如，玩家是否离得太远）。
     * @param pickRange 交互的最大范围。
     */
    virtual bool isValid(float pickRange);

    // vIndex: 6
    /**
     * @brief 在服务器端初始化物品栈的ID。
     */
    virtual void serverInitItemStackIds() /*override*/;

    // vIndex: 11
    /**
     * @brief 设置指定名称的容器中特定槽位的物品。
     * @param slot 槽位索引。
     * @param name 容器的完整名称。
     * @param item 要设置的物品。
     */
    virtual void
    setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool) /*override*/;

    // vIndex: 12
    /**
     * @brief 获取指定名称的容器中特定槽位的物品。
     * @param slot 槽位索引。
     * @param name 容器的完整名称。
     * @return 返回物品栈的常量引用。
     */
    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const /*override*/;


    // vIndex: 13
    /**
     * @brief 广播容器内容的变更给客户端。
     */
    virtual void broadcastChanges() /*override*/;

    // vIndex: 20
    /**
     * @brief 初始化完成后的回调函数（纯虚函数）。
     *        子类必须实现此函数，以完成特定的初始化逻辑并返回容器屏幕上下文。
     * @return 返回容器屏幕上下文。
     */
    virtual ::ContainerScreenContext _postInit() = 0;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    /**
     * @brief 构造函数。
     * @param containerId 容器ID。
     * @param player 拥有此容器管理器的玩家。
     */
    MCAPI ContainerManagerModel(::ContainerID containerId, ::Player& player);

    /**
     * @brief 添加一个容器模型到此管理器中（内部方法）。
     * @param containerModel 要添加的容器模型。
     */
    MCAPI void _addContainer(::std::shared_ptr<::ContainerModel> containerModel);

    /**
     * @brief 检查玩家是否在指定方块位置的范围内（内部方法）。
     * @param blockPos 方块位置。
     * @param pickRange 检查范围。
     */
    MCAPI bool _isPlayerInRangeOfPosition(::BlockPos const& blockPos, float pickRange) const;

    /**
     * @brief 添加一个动态容器模型。
     * @param model 要添加的动态容器模型。
     */
    MCAPI void addDynamicContainer(::std::shared_ptr<::ContainerModel> model);

    /**
     * @brief 执行初始化后的逻辑，会调用纯虚函数 _postInit()。
     */
    MCAPI void postInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $tick();

    MCFOLD ::ContainerID $getContainerId() const;

    MCFOLD void $setContainerId(::ContainerID id);

    MCFOLD ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);

    MCAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;

    MCAPI void $debitPlayerLevels(int levels);

    MCAPI bool $isCreativeMode() const;

    MCAPI bool $isClientSide() const;

    MCAPI bool $isServerAuthoritative() const;

    MCAPI bool $isValid(float pickRange);

    MCAPI void $serverInitItemStackIds();

    MCAPI void $setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getFullContainerSlot(int slot, ::FullContainerName const& name) const;

    MCAPI void $broadcastChanges();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

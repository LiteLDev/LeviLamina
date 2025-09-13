#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/IContainerManager.h"

// auto generated forward declare list
// clang-format off
class Container;
class DynamicContainerTracker;
class ItemStack;
class Player;
struct PlayerContainerRefresher;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

/**
 * @class BaseContainerMenu
 * @brief 容器菜单的抽象基类。
 *
 * 这个类是所有与容器交互的服务器端菜单UI的基石（例如箱子、工作台、熔炉菜单）。
 * 它负责管理玩家与容器之间的交互，跟踪物品栏的变化，并将这些变化同步到客户端。
 * 它同时作为容器内容的“监听者”和容器状态的“管理者”。
 * 这是一个抽象类，需要由具体的菜单类（如 FurnaceContainerMenu）来继承和实现。
 */
class BaseContainerMenu : public ::ContainerContentChangeListener, public ::IContainerManager {
public:
    // 成员变量
    // NOLINTBEGIN

    // 对正在使用此菜单的玩家的引用。
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;

    // 缓存的物品栏槽位状态，用于检测自上次同步以来的变更。
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mLastSlots;

    // 玩家容器刷新器，负责将容器的变更发送给客户端。
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerContainerRefresher>> mContainerRefresher;

    // 动态容器追踪器，可能用于处理非静态的容器（如末影箱）。
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DynamicContainerTracker>> mDynamicContainerTracker;

    // 此菜单实例的唯一容器ID。
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;

    // 此菜单管理的容器类型（如箱子、熔炉等）。
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerType;

    // 自上次清理操作以来的游戏刻数。
    ::ll::TypedStorage<4, 4, int> mTicksSinceLastCleanup;

    // 用于通知订阅者容器类型发生变化的发布者。
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::ContainerType),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>>
        mContainerTypeSubscribers;
    // NOLINTEND

public:
    // 默认禁止构造和赋值
    BaseContainerMenu& operator=(BaseContainerMenu const&);
    BaseContainerMenu(BaseContainerMenu const&);
    BaseContainerMenu();

public:
    // 虚函数
    // NOLINTBEGIN

    // vIndex: 1
    // 虚析构函数。
    virtual ~BaseContainerMenu() /*override*/;

    // vIndex: 2
    // 从菜单的逻辑中移除一个或多个槽位。这是一个纯虚函数，必须由派生类实现。
    virtual void removeSlot(int, int) = 0;

    // vIndex: 3
    // 检查指定槽位是否“脏”，即内容是否发生了变化需要同步。
    virtual bool isSlotDirty(int slot);

    // vIndex: 4
    // 检查指定槽位是否为结果槽（如熔炉的产出格或工作台的合成结果格）。
    virtual bool isResultSlot(int slot);

    // vIndex: 0
    // 当容器内容发生改变时被调用的回调函数 (继承自 ContainerContentChangeListener)。
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 6
    // 在服务器端初始化所有槽位中物品的网络ID。纯虚函数。
    virtual void serverInitItemStackIds() = 0;

    // vIndex: 7
    // 获取容器中所有物品的副本。纯虚函数。
    virtual ::std::vector<::ItemStack> getItemCopies() const = 0;

    // vIndex: 8
    // 在指定槽位设置物品。纯虚函数。
    virtual void setSlot(int, ::ItemStack const&, bool) = 0;

    // vIndex: 9
    // 获取指定槽位的物品。纯虚函数。
    virtual ::ItemStack const& getSlot(int) const = 0;

    // vIndex: 10
    // 设置与容器相关的非物品数据（例如熔炉的燃烧进度）。(继承自 IContainerManager)
    virtual void setData(int id, int value) /*override*/;

    // vIndex: 1
    // 获取容器ID。(继承自 IContainerManager)
    virtual ::ContainerID getContainerId() const /*override*/;

    // vIndex: 2
    // 设置容器ID。(继承自 IContainerManager)
    virtual void setContainerId(::ContainerID id) /*override*/;

    // vIndex: 3
    // 获取容器类型。(继承自 IContainerManager)
    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const /*override*/;

    // vIndex: 4
    // 设置容器类型。(继承自 IContainerManager)
    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) /*override*/;

    // vIndex: 5
    // 注册一个监听器，当容器类型改变时会收到通知。(继承自 IContainerManager)
    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const
        /*override*/;

    // vIndex: 13
    // 广播容器的所有变更到客户端。(继承自 IContainerManager)
    virtual void broadcastChanges() /*override*/;

    // vIndex: 5
    // 获取此菜单管理的底层容器对象的指针。纯虚函数。
    virtual ::Container* _getContainer() const = 0;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN

    // 构造函数
    MCNAPI BaseContainerMenu(::Player& player, ::SharedTypes::Legacy::ContainerType containerType);

    // 将当前容器的槽位状态保存到 mLastSlots 中，用于后续的变更检测。
    MCNAPI void _saveLastSlots(::Container* container);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player& player, ::SharedTypes::Legacy::ContainerType containerType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSlotDirty(int slot);

    MCNAPI bool $isResultSlot(int slot);

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI void $setData(int id, int value);

    MCNAPI ::ContainerID $getContainerId() const;

    MCNAPI void $setContainerId(::ContainerID id);

    MCNAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCNAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;

    MCNAPI void $broadcastChanges();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForIContainerManager();
    // NOLINTEND
};

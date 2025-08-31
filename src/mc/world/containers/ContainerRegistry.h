#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/IContainerRegistryAccess.h"
#include "mc/world/containers/IContainerRegistryTracker.h"
#include "mc/world/containers/IDynamicContainerSerialization.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerManager;
class FillingContainer;
class ItemStack;
class ListTag;
class Packet;
class SaveContext;
class StorageItemComponent;
class StorageItemContainerModel;
class StorageWeightLimitItemComponent;
struct DynamicTrackedContainer;
struct FullContainerName;
namespace Bedrock::Threading { class SharedRecursiveMutex; }
// clang-format on

/**
 * @brief 容器注册表类
 *
 * 这个类负责管理游戏世界中所有的动态容器（例如，一个带有存储组件的物品，像一个背包）。
 * 它实现了多个接口，分别用于：
 * - IDynamicContainerSerialization: 序列化（保存和加载）动态容器的内容。
 * - IContainerRegistryAccess: 提供对容器的访问（如获取其模型或底层容器）。
 * - IContainerRegistryTracker: 追踪容器的创建、加载和过期。
 *
 * 这个注册表在服务器和客户端上都有实例，通过 `mIsClientSide` 成员变量来区分。
 */
class ContainerRegistry : public ::IDynamicContainerSerialization,
                          public ::IContainerRegistryAccess,
                          public ::IContainerRegistryTracker {
public:
    // 成员变量
    // NOLINTBEGIN
    // 下一个可用的动态容器ID。每当创建新容器时，会使用并递增这个值。
    ::ll::TypedStorage<4, 4, uint> mNextDynamicId;
    // 存储所有被追踪的动态容器。键是容器的完整名称(FullContainerName)，值是容器的追踪信息(DynamicTrackedContainer)。
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, ::DynamicTrackedContainer>> mContainers;
    // 一个布尔常量，用于标识当前注册表实例是在客户端(true)还是服务器端(false)运行。
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    // 距离上次清理操作已经过去的 tick (游戏刻) 数量。用于定期执行清理任务。
    ::ll::TypedStorage<4, 4, int> mTicksSinceLastCleanup;
    // 一个共享的递归互斥锁，用于确保对容器的多线程访问是安全的。
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::SharedRecursiveMutex>> mContainerContextMutex;
    // NOLINTEND

public:
    // 阻止默认构造函数。必须通过带参数的构造函数来创建实例。
    ContainerRegistry();

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 2
    /**
     * @brief 析构函数。
     */
    virtual ~ContainerRegistry() /*override*/ = default;

    // vIndex: 0
    /**
     * @brief 序列化容器内容。
     * @param name 要序列化的容器的完整名称。
     * @param saveContext 保存操作的上下文。
     * @return 返回一个包含容器内容的 ListTag 独占指针。如果容器不存在或为空，可能返回 nullptr。
     */
    virtual ::std::unique_ptr<::ListTag>
    serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext) /*override*/;

    // vIndex: 1
    /**
     * @brief 获取动态容器的重量。
     * @param name 容器的完整名称。
     * @return 返回一个可选的整数。如果容器有重量限制组件并且存在，则返回值；否则返回 std::nullopt。
     */
    virtual ::std::optional<int> getDynamicContainerWeight(::FullContainerName const& name) /*override*/;

    // vIndex: 0
    /**
     * @brief 获取容器的模型（Model）。
     * @param name 容器的完整名称。
     * @return 返回一个指向 StorageItemContainerModel 的共享指针，用于UI交互。
     */
    virtual ::std::shared_ptr<::StorageItemContainerModel> getModel(::FullContainerName const& name) /*override*/;

    // vIndex: 1
    /**
     * @brief 获取容器的后端实际存储容器（Backing Container）。
     * @param name 容器的完整名称。
     * @return 返回一个指向 FillingContainer 的共享指针，这是实际存储物品的地方。
     */
    virtual ::std::shared_ptr<::FillingContainer> getBackingContainer(::FullContainerName const& name) /*override*/;

    // vIndex: 2
    /**
     * @brief 尝试为给定的存储物品组件创建一个新的注册表条目。
     * @param storageItemComponent 存储物品组件。
     * @param storageWeightLimitItemComponent （可选）存储重量限制组件。
     * @param name 要创建的容器的完整名称。
     */
    virtual void tryCreateEntry(
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent,
        ::FullContainerName const&         name
    ) /*override*/;

    // vIndex: 0
    /**
     * @brief 创建一个容器管理器。
     * @param id 容器的完整名称。
     * @param storageItem 包含存储组件的物品栈。
     * @param storageItemComponent 存储物品组件。
     * @param storageWeightLimitItemComponent （可选）存储重量限制组件。
     * @return 返回一个 DynamicContainerManager 的独占指针。
     */
    virtual ::std::unique_ptr<::DynamicContainerManager> createContainerManager(
        ::FullContainerName const&         id,
        ::ItemStack const&                 storageItem,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    ) /*override*/;

    // vIndex: 1
    /**
     * @brief 生成一个新的唯一动态容器ID。
     * @return 返回一个新的 uint 类型的 ID。
     */
    virtual uint generateNewID() /*override*/;

    // vIndex: 2
    /**
     * @brief 尝试从已保存的数据中加载存储物品的内容。
     * @param contentData 包含容器内容的 ListTag。
     * @param name 要加载到的容器的完整名称。
     */
    virtual void tryLoadSavedStorageItem(::ListTag const& contentData, ::FullContainerName const& name) /*override*/;

    // vIndex: 3
    /**
     * @brief 将一组容器标记为已过期。
     * @param removedContainers 一个包含所有已移除或过期容器名称的向量。
     */
    virtual void setExpired(::std::vector<::FullContainerName> const& removedContainers) /*override*/;

    // vIndex: 4
    /**
     * @brief 获取当前注册表中容器的数量。
     * @return 返回容器总数。
     */
    virtual uint64 getSize() /*override*/;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    /**
     * @brief 构造函数。
     * @param isClientSide 如果为 true，则表示这是一个客户端注册表；否则为服务器端。
     */
    MCAPI explicit ContainerRegistry(bool isClientSide);

    /**
     * @brief 获取或创建一个容器条目（内部函数）。
     * @param id 容器的完整名称。
     * @param storageItemComponent 存储物品组件。
     * @param storageWeightLimitItemComponent （可选）存储重量限制组件。
     * @return 返回对 DynamicTrackedContainer 的引用。
     */
    MCAPI ::DynamicTrackedContainer& _getOrCreate(
        ::FullContainerName const&         id,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );

    /**
     * @brief 在服务器端执行清理操作（内部函数）。
     * @param broadcastPacketFunction 一个用于广播网络数据包的函数。
     */
    MCAPI void _serverCleanUp(::std::function<void(::Packet&)> broadcastPacketFunction);

    /**
     * @brief 每 tick 执行一次的更新函数。
     * @param broadcastPacketFunction 一个用于广播网络数据包的函数（主要用于服务器端清理）。
     */
    MCAPI void tick(::std::function<void(::Packet&)> broadcastPacketFunction);
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    /**
     * @brief 发送清理数据包。
     * @param broadcastPacketFunction 用于广播网络数据包的函数。
     * @param removedContainers 已被移除的容器列表。
     */
    MCAPI static void sendCleanupPackets(
        ::std::function<void(::Packet&)> const&   broadcastPacketFunction,
        ::std::vector<::FullContainerName> const& removedContainers
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIDynamicContainerSerialization();

    MCAPI static void** $vftableForIContainerRegistryTracker();

    MCAPI static void** $vftableForIContainerRegistryAccess();
    // NOLINTEND
};

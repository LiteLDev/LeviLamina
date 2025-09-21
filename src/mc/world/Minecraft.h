#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/ecs/gamerefs_entity/IEntityRegistryOwner.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class AllowList;
class DefaultCommandsContextProvider;
class EntityContext;
class EntityRegistry;
class EntitySystems;
class Experiments;
class GameCallbacks;
class GameModuleServer;
class GameSession;
class GameTestLevelListener;
class IContentTierManager;
class IMinecraftApp;
class IMinecraftEventing;
class Level;
class MinecraftCommands;
class MinecraftGameTest;
class NetEventCallback;
class NetworkIdentifier;
class PacketSender;
class PermissionsFile;
class Player;
class PrivateKeyManager;
class ResourcePackManager;
class Scheduler;
class ServerMetrics;
class ServerNetworkHandler;
class StructureManager;
class TextFilteringProcessor;
class Timer;
struct ConnectionDefinition;
struct NetworkServerConfig;
struct PackIdVersion;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Core { class FilePathManager; }
namespace mce { class UUID; }
// clang-format on

// Minecraft 核心类，继承自 IEntityRegistryOwner
// 这个类可以说是游戏服务端的核心，整合了游戏的各个主要模块
class Minecraft : public ::IEntityRegistryOwner {
public:
    // member variables
    // 成员变量
    // NOLINTBEGIN
    // 使用 ll::TypedStorage 可能是为了内存对齐、防止意外的构造/析构或在特定内存区域上分配。
    // 它本质上是一块预留的内存，可以原地构造对象。

    ::ll::TypedStorage<8, 8, ::GameCallbacks&>      mGameCallbacks;                     // 游戏回调接口的引用
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;                          // 事件系统接口的引用
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackManager>> mResourceLoader; // 资源包管理器（独占所有权）
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StructureManager>> mStructureManager; // 结构管理器（独占所有权）
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameModuleServer>> mGameModuleServer; // 游戏模块服务端（共享所有权）
    ::ll::TypedStorage<8, 8, ::AllowList&>       mAllowList;                            // 白名单引用
    ::ll::TypedStorage<8, 8, ::PermissionsFile*> mPermissionsFile;                      // 权限文件指针
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PrivateKeyManager>> mServerKeys; // 服务器私钥管理器（独占所有权）
    ::ll::TypedStorage<8, 32, ::std::string const> mSaveGamePath;                 // 存档路径
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>>
                                               mFilePathManager; // 文件路径管理器（非空、非拥有指针）
    ::ll::TypedStorage<8, 8, ::ServerMetrics*> mServerMetrics;   // 服务器性能指标指针
    ::ll::TypedStorage<1, 1, bool>             mCorruptionDetected; // 存档是否损坏的标志
    ::ll::TypedStorage<1, 1, bool>             mFireOnLevelCorrupt; // 当关卡损坏时是否触发事件的标志
    ::ll::TypedStorage<8, 8, double>           mFrameDuration;      // 游戏每帧的持续时间
    ::ll::TypedStorage<8, 8, double>           mLastFrameStart;     // 上一帧开始的时间戳
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> mMaxPlayerIdleTime; // 玩家最大空闲时间
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DefaultCommandsContextProvider>>
        mDefaultCommandsContextProvider; // 默认命令上下文提供者（独占所有权）
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftCommands>> mCommands;    // 命令系统（独占所有权）
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameSession>>       mGameSession; // 游戏会话（独占所有权）
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameTestLevelListener>>
        mGameTestLevelListener; // GameTest关卡监听器（独占所有权）
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftGameTest>>
                                       mGameTest;  // Minecraft GameTest框架实例（独占所有权）
    ::ll::TypedStorage<8, 8, ::Timer&> mSimTimer;  // 模拟计时器（逻辑帧）的引用
    ::ll::TypedStorage<8, 8, ::Timer&> mRealTimer; // 真实时间计时器（渲染帧）的引用
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef> mNetwork;        // 网络系统的引用
    ::ll::TypedStorage<8, 8, ::PacketSender&>                   mPacketSender;   // 数据包发送器的引用
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&>                  mApp;            // 应用程序接口的引用
    ::ll::TypedStorage<1, 1, ::SubClientId>                     mClientSubId;    // 子客户端ID
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::EntityRegistry>>     mEntityRegistry; // 实体注册表（拥有所有权）
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::Publisher<void(::Level*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
        mLevelSubscribers; // 关卡事件的发布者（例如，关卡加载/卸载事件）
    // NOLINTEND

public:
    // prevent constructor by default
    // 默认禁止拷贝构造和赋值操作，确保Minecraft实例是唯一的
    Minecraft& operator=(Minecraft const&);
    Minecraft(Minecraft const&);
    Minecraft();

public:
    // virtual functions
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Minecraft() /*override*/; // 虚析构函数，允许派生类正确析构

    // vIndex: 3
    virtual void setSimTimePause(bool pause); // 设置模拟时间是否暂停

    // vIndex: 4
    virtual void setSimTimeScale(float scale); // 设置模拟时间缩放比例（例如，慢动作效果）

    // vIndex: 5
    virtual bool getSimPaused() const; // 获取当前模拟时间是否暂停

    // vIndex: 6
    virtual bool isOnlineClient() const; // 判断当前是否为在线客户端

    // vIndex: 2
    // 从 IEntityRegistryOwner 接口继承并实现
    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() /*override*/; // 获取实体注册表的可变引用

    // vIndex: 1
    // 从 IEntityRegistryOwner 接口继承并实现
    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const /*override*/; // 获取实体注册表的常量引用
    // NOLINTEND

public:
    // member functions
    // 成员函数
    // NOLINTBEGIN
    /**
     * @brief Minecraft 类的构造函数
     * @param app 应用程序接口
     * @param gameCallbacks 游戏回调
     * @param allowList 白名单
     * @param permissionsFile 权限文件
     * @param filePathManager 文件路径管理器
     * @param maxPlayerIdleTime 玩家最大空闲时间
     * @param eventing 事件系统
     * @param network 网络系统
     * @param packetSender 数据包发送器
     * @param clientSubId 子客户端ID
     * @param simTimer 模拟计时器
     * @param realTimer 真实时间计时器
     * @param contentTierManager 内容分级管理器
     * @param serverMetrics 服务器性能指标
     */
    MCAPI Minecraft(
        ::IMinecraftApp&                                                  app,
        ::GameCallbacks&                                                  gameCallbacks,
        ::AllowList&                                                      allowList,
        ::PermissionsFile*                                                permissionsFile,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager,
        ::std::chrono::seconds                                            maxPlayerIdleTime,
        ::IMinecraftEventing&                                             eventing,
        ::ClientOrServerNetworkSystemRef                                  network,
        ::PacketSender&                                                   packetSender,
        ::SubClientId                                                     clientSubId,
        ::Timer&                                                          simTimer,
        ::Timer&                                                          realTimer,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        ::ServerMetrics*                                                  serverMetrics
    );

    MCAPI void _tryCatchupMovementTicks(); // 尝试追赶因卡顿等原因掉队的移动tick

    MCAPI void activateAllowList(); // 启用白名单

    MCAPI void configureGameTest(::Level& level, ::Experiments const& experiments); // 配置GameTest框架

    /**
     * @brief 从服务器断开一个客户端的连接
     * @param id 客户端的网络标识符
     * @param discoReason 断开连接的原因枚举
     * @param reasonMessage 显示给客户端的断开连接原因信息
     */
    MCAPI void disconnectClient(
        ::NetworkIdentifier const&         id,
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               reasonMessage
    );

    MCAPI ::Level* getLevel() const; // 获取当前的关卡（世界）指针

    MCAPI ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> getServerNetworkHandler(); // 获取服务端网络处理器指针

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager(); // 获取结构管理器

    /**
     * @brief 主持一个多人游戏
     * @param serverName 服务器名称
     * @param levelEntity 包含关卡和实体上下文的对
     * @param localPlayer 本地玩家指针
     * @param localPlayerId 本地玩家的UUID
     * @param clientNetworkHandler 客户端网络处理器
     * @param maxChunkRadius 最大区块加载半径
     * @param shouldAnnounce 是否在局域网内广播服务器
     * @param connectionDefinition 连接定义
     * @param packIdToContentKey 资源包ID到内容密钥的映射
     * @param scheduler 调度器
     * @param textFilteringProcessor 文本过滤器
     * @param packetHandlerConfig 网络数据包处理器配置
     * @return 是否成功主持游戏
     */
    MCAPI bool hostMultiplayer(
        ::std::string const&                                                 serverName,
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::Player*                                                            localPlayer,
        ::mce::UUID const&                                                   localPlayerId,
        ::std::unique_ptr<::NetEventCallback>                                clientNetworkHandler,
        int                                                                  maxChunkRadius,
        bool                                                                 shouldAnnounce,
        ::ConnectionDefinition const&                                        connectionDefinition,
        ::std::unordered_map<::PackIdVersion, ::std::string> const&          packIdToContentKey,
        ::Scheduler&                                                         scheduler,
        ::TextFilteringProcessor*                                            textFilteringProcessor,
        ::NetworkServerConfig const&                                         packetHandlerConfig
    );

    MCAPI void init(); // 初始化Minecraft实例

    MCAPI void initCommands(); // 初始化命令系统

    MCAPI void setupServerCommands(
        ::std::string const& networkCommands,
        ::std::string const& networkTestCommands
    ); // 设置服务端命令

    MCAPI void startLeaveGame(bool stopNetwork); // 开始离开游戏的流程

    MCAPI void tickSimtime(int nTick, int maxTick); // 执行游戏逻辑 tick (模拟 tick)

    MCAPI bool update(); // 游戏主循环的更新函数
    // NOLINTEND

public:
    // static functions
    // 静态函数
    // NOLINTBEGIN
    // 静态版本的 _tryCatchupMovementTicks，直接操作传入的实体系统和注册表
    MCAPI static void _tryCatchupMovementTicks(::EntitySystems& entitySystems, ::EntityRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IMinecraftApp&                                                  app,
        ::GameCallbacks&                                                  gameCallbacks,
        ::AllowList&                                                      allowList,
        ::PermissionsFile*                                                permissionsFile,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager,
        ::std::chrono::seconds                                            maxPlayerIdleTime,
        ::IMinecraftEventing&                                             eventing,
        ::ClientOrServerNetworkSystemRef                                  network,
        ::PacketSender&                                                   packetSender,
        ::SubClientId                                                     clientSubId,
        ::Timer&                                                          simTimer,
        ::Timer&                                                          realTimer,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        ::ServerMetrics*                                                  serverMetrics
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
    MCAPI void $setSimTimePause(bool pause);

    MCAPI void $setSimTimeScale(float scale);

    MCAPI bool $getSimPaused() const;

    MCAPI bool $isOnlineClient() const;

    MCFOLD ::StackRefResult<::EntityRegistry> $getEntityRegistry();

    MCFOLD ::StackRefResult<::EntityRegistry const> $getEntityRegistry() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/Certificate.h"
#include "mc/entity/components/UserEntityIdentifierComponent.h"
#include "mc/network/NetworkPeer.h"
#include "mc/world/inventory/EnderChestContainer.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/ContainerID.h"
#include "mc/world/PlayerUIContainer.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/PlayerItemInUse.h"
#include "mc/world/actor/player/PlayerSpawnFallbackType.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/inventory/InventoryOptions.h"
#include "mc/world/inventory/transaction/InventoryTransactionManager.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemGroup.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class Agent;
class AnimationComponent;
class Attribute;
class Block;
class BlockActor;
class BlockSource;
class BodyControl;
class ChalkboardBlockActor;
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class ContainerManagerModel;
class DataLoadHelper;
class Dimension;
class EnderChestContainer;
class EntityContext;
class FrameUpdateContextBase;
class GameMode;
class GetCollisionShapeInterface;
class HudContainerManagerModel;
class IConstBlockSource;
class IContainerManager;
class IMinecraftEventing;
class InventoryTransaction;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class ItemStackNetManagerBase;
class LayeredAbilities;
class LegacyTelemetryEventPacket;
class Level;
class NetworkChunkPublisher;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class PlayerInventory;
class PlayerListener;
class PlayerRespawnRandomizer;
class ResolvedTextObject;
class SerializedSkin;
class ShieldItem;
class SubChunkPos;
class TextObjectRoot;
class Vec2;
struct AABBShapeComponent;
struct ActorRotationComponent;
struct INpcDialogueData;
struct MutableAttributeWithContext;
struct PlayerAuthenticationInfo;
struct PlayerDestroyProgressCacheComponent;
struct PlayerMovementSettings;
struct StateVectorComponent;
struct Tick;
struct VariantParameterList;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ConnectionRequest;

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
    struct CachedSpawnData;
    struct FixedSpawnPositionData;
    struct FixedSpawnPositionData_DEPRECATED;
    struct PlayerSpawnPoint;
    // clang-format on

    // Player inner types define
    using PlayerFlagIDType = char;  // 玩家标志位ID的类型

    struct FixedSpawnPositionData_DEPRECATED {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition;       // 固定生成位置（废弃）
        ::ll::TypedStorage<1, 1, bool>    mIsAboveLeaves;  //  是否在树叶上方 (废弃)
        // NOLINTEND
    };

    struct FixedSpawnPositionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                   mPosition;           // 固定生成位置
        ::ll::TypedStorage<4, 4, ::PlayerSpawnFallbackType> mSpawnFallbackType;  // 生成位置的备选类型 (例如： "Overworld", "Nether")
        // NOLINTEND
    };

    enum class SpawnPositionState : int {
        InitializeSpawnPositionRandomizer = 0,  // 初始化生成位置随机器
        WaitForClientAck                  = 1,  // 等待客户端确认
        DetermineDimension                = 2,  // 确定维度
        ChangeDimension                   = 3,  // 切换维度
        WaitForDimension                  = 4,  // 等待维度加载完成
        ChooseSpawnArea                   = 5,  // 选择生成区域
        CheckLoadedChunk                  = 6,  // 检查区块是否已加载
        ChooseSpawnPosition               = 7,  // 选择生成位置
        SpawnComplete                     = 8,  // 生成完成
    };

    enum class SpawnPositionSource : int {
        Randomizer = 0,  // 通过随机器确定生成位置
        Respawn    = 1,  // 复活
        Teleport   = 2,  // 传送
        Static     = 3,  // 静态位置
    };

    struct CachedSpawnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::DimensionType> mRespawnDimensionId;        // 复活维度ID
        ::ll::TypedStorage<4, 12, ::Vec3>         mActualRespawnPosition;     // 实际的复活位置
        ::ll::TypedStorage<4, 12, ::BlockPos>     mRequestedRespawnPosition;  // 请求的复活位置
        ::ll::TypedStorage<1, 1, bool>            mHasRespawnPosition;        // 是否有复活位置
        ::ll::TypedStorage<4, 12, ::BlockPos>     mSharedSpawnPosition;       // 共享的生成位置
        ::ll::TypedStorage<1, 1, bool>            mRespawnReady;              // 是否已准备好复活
        ::ll::TypedStorage<4, 12, ::Vec3>         mPlayerPos;                 // 玩家位置
        ::ll::TypedStorage<1, 1, bool>            mIsForcedRespawn;           // 是否为强制复活
        ::ll::TypedStorage<1, 1, bool>            mIsAdventure;               // 是否为冒险模式
        ::ll::TypedStorage<1, 1, bool>            mIsFlyingOrNotOverworld;   // 是否正在飞行或不在主世界
        ::ll::TypedStorage<1, 1, bool>            mPositionLoadedFromSave;    // 位置是否从存档中加载
        // NOLINTEND
    };

    using PlayerListenerList = ::std::vector<::PlayerListener*>;  // 玩家监听器列表

    struct PlayerSpawnPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>     mSpawnBlockPos;   // 生成点方块坐标
        ::ll::TypedStorage<4, 12, ::BlockPos>     mPlayerPosition;  // 玩家位置
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;       // 维度
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool
        setSpawnPoint(::BlockPos const& playerPosition, ::DimensionType dimension, ::BlockPos const& spawnBlock);
        // NOLINTEND
    };

public:
    /**
     * @brief 获取 UserEntityIdentifierComponent 的 const 引用。
     * @return UserEntityIdentifierComponent 的 const 引用。
     */
    LLNDAPI UserEntityIdentifierComponent const& getUserEntityIdentifier() const;

    /**
     * @brief 获取 UserEntityIdentifierComponent 的引用。
     * @return UserEntityIdentifierComponent 的引用。
     */
    LLNDAPI UserEntityIdentifierComponent& getUserEntityIdentifier();

    /**
     * @brief 获取连接请求（ConnectionRequest）的可选引用（optional_ref）。
     * @return ConnectionRequest 的可选引用。
     */
    LLNDAPI optional_ref<ConnectionRequest const> getConnectionRequest() const;

    /**
     * @brief 获取 NetworkIdentifier 的 const 引用。
     * @return NetworkIdentifier 的 const 引用。
     */
    LLNDAPI NetworkIdentifier const& getNetworkIdentifier() const;

    /**
     * @brief 获取证书（Certificate）的可选引用（optional_ref）。
     * @return Certificate 的可选引用。
     */
    LLNDAPI optional_ref<Certificate const> getCertificate() const;

    /**
     * @brief 获取 SubClientId 的 const 引用。
     * @return SubClientId 的 const 引用。
     */
    LLNDAPI SubClientId const& getClientSubId() const;

    /**
     * @brief 获取玩家选择的物品栏槽位。
     * @return  被选择的物品栏槽位的索引 (int)。
     */
    LLNDAPI int getSelectedItemSlot() const;

    /**
     * @brief 获取玩家的 UUID。
     * @return 玩家的 UUID。
     */
    LLNDAPI mce::UUID const& getUuid() const;

    /**
     * @brief 获取玩家的 IP 和端口信息。
     * @return 玩家的 IP 和端口信息（字符串）。
     */
    LLNDAPI std::string getIPAndPort() const;

    /**
     * @brief 获取玩家的真实游戏昵称（并非显示的名称）。
     * @return 玩家的真实游戏昵称（字符串）。
     */
    LLNDAPI std::string getRealName() const;

    /**
     * @brief 获取玩家的本地化代码。
     * @return 玩家的语言代码 (字符串)。
     */
    LLNDAPI std::string getLocaleCode() const;

    /**
     * @brief 获取网络状态（可选）。
     * @return 网络状态的optional_ref。
     */
    LLNDAPI std::optional<NetworkPeer::NetworkStatus> getNetworkStatus() const;

    /**
     * @brief 断开玩家的连接。
     * @param reason 断开连接的原因。
     */
    LLAPI void disconnect(std::string_view reason) const;

    /**
     * @brief 向玩家发送消息。
     * @param msg 要发送的消息。
     */
    LLAPI void sendMessage(std::string_view msg) const;

    /**
     * @brief 设置玩家的某个能力。
     * @param index 要设置的能力的索引（AbilitiesIndex）。
     * @param value 是否启用此能力。
     */
    LLAPI void setAbility(::AbilitiesIndex index, bool value);

    /**
     * @brief 给玩家添加物品并刷新物品栏。
     * @param item 要添加的物品。
     * @return 如果成功添加并刷新，则返回 true。
     */
    LLAPI bool addAndRefresh(class ItemStack& item);

    /**
     * @brief 获取末影箱容器的可选引用。
     * @return  EnderChestContainer 的可选引用。
     */
    LLNDAPI optional_ref<EnderChestContainer> getEnderChestContainer() const;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                      mOceanBiomes;                                 // 玩家已知的海洋生物群系
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                      mFroglights;                                 // 玩家已知的青蛙灯（一种方块）
    ::ll::TypedStorage<4, 4, float const>                                 mSneakHeight;                                 // 潜行状态时的高度
    ::ll::TypedStorage<4, 4, float const>                                 mSneakOffset;                                 // 潜行状态下的Y轴偏移
    ::ll::TypedStorage<4, 4, int>                                         mScore;                                         // 玩家分数
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                             mBuildPlatform;                               // 建筑平台（如用于平板电脑的虚拟控制器）
    ::ll::TypedStorage<8, 32, ::std::string>                              mUniqueName;                                  // 玩家的唯一名称，通常是 PlayFabID
    ::ll::TypedStorage<8, 32, ::std::string>                              mServerId;                                    // 服务器ID，用于识别玩家所在的服务器
    ::ll::TypedStorage<8, 32, ::std::string>                              mSelfSignedId;                                 // 自签名ID
    ::ll::TypedStorage<8, 32, ::std::string>                              mPlatformOfflineId;                            // 平台离线ID
    ::ll::TypedStorage<8, 8, uint64>                                      mClientRandomId;                              // 客户端随机ID
    ::ll::TypedStorage<8, 32, ::std::string>                              mPlatformId;                                  // 平台ID
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingVehicleID;                            // 待骑乘的载具ID
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingLeftShoulderPassengerID;              // 待作为左肩乘客的实体ID
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingRightShoulderPassengerID;             // 待作为右肩乘客的实体ID
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mInteractTarget;                              // 交互目标的ID
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mInteractTargetPos;                            // 交互目标的位置
    ::ll::TypedStorage<1, 1, bool>                                        mHasFakeInventory;                             // 是否拥有假物品栏
    ::ll::TypedStorage<1, 1, bool>                                        mIsRegionSuspended;                            // 区域是否被暂停（如为了节省资源）
    ::ll::TypedStorage<1, 1, bool>                                        mUpdateMobs;                                  //  是否更新Mob的状态
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>       mChunkSource;                                 //  玩家的区块源
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>       mSpawnChunkSource;                             //  生成区块源
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mCapePosO;                                    // 上一帧的披风位置
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mCapePos;                                     // 披风位置
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerManagerModel>> mContainerManager;                             // 容器管理器
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::ContainerManagerModel const*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                                             mContainerManagerSubscribers;                  // 容器管理器订阅者
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerInventory>>           mInventory;                                   // 玩家物品栏
    ::ll::TypedStorage<4, 20, ::InventoryOptions>                            mInventoryOptions;                            // 物品栏选项
    ::ll::TypedStorage<4, 4, float>                                          mDistanceSinceTransformEvent;                 // 自上次移动事件以来移动的距离
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                 mCreativeItemList;                            // 创造模式下的物品列表
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPlatformOnlineId;                             //  平台在线ID
    ::ll::TypedStorage<4, 4, ::Player::SpawnPositionState>                   mSpawnPositionState;                           // 生成位置状态
    ::ll::TypedStorage<4, 4, ::Player::SpawnPositionSource>                  mSpawnPositionSource;                          // 生成位置源
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mSpawnPositioningTestPosition;                 // 用于测试生成位置的位置
    ::ll::TypedStorage<4, 4, uint>                                           mRespawnChunkBuilderPolicyHandle;              //  重生区块生成器策略句柄
    ::ll::TypedStorage<4, 64, ::Player::CachedSpawnData>                     mCachedSpawnData;                              // 缓存的生成数据
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::BlockSource>>                     mSpawnBlockSource;                             // 生成区块源指针
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                   mRespawnStopwatch_Searching;                   // 重生时的搜索计时器
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mRespawnOriginalPosition;                      //  重生前的原始位置
    ::ll::TypedStorage<4, 4, ::DimensionType>                                mRespawnOriginalDimension;                     //  重生前的原始维度
    ::ll::TypedStorage<8, 32, ::std::string>                                 mRespawnMessage;                               //  重生信息
    ::ll::TypedStorage<1, 1, bool>                                           mRespawnReady;                                 //  是否准备好重生
    ::ll::TypedStorage<1, 1, bool>                                           mIsInitialSpawnDone;                           //  是否完成了初始生成
    ::ll::TypedStorage<1, 1, bool>                                           mRespawningFromTheEnd;                         //  是否正在从末地重生
    ::ll::TypedStorage<1, 1, bool>                                           mPositionLoadedFromSave;                       //  位置是否从存档加载
    ::ll::TypedStorage<1, 1, bool>                                           mBlockRespawnUntilClientMessage;               //  是否阻止重生直到收到客户端的消息
    ::ll::TypedStorage<1, 1, bool>                                           mHasSeenCredits;                               // 是否已观看结束动画
    ::ll::TypedStorage<4, 8, ::std::optional<::PlayerSpawnFallbackType>>     mSpawnFallbackType;                            // 生成的备选类型
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                       mSpawnFallbackPosition;                        // 生成的备选位置
    ::ll::TypedStorage<8, 168, ::PlayerItemInUse>                            mItemInUse;                                    // 玩家正在使用的物品相关信息
    ::ll::TypedStorage<4, 4, ::ActorType>                                    mLastHurtBy;                                   // 上一次伤害玩家的实体的类型
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mPreviousInteractEntity;                       // 上一个交互的实体
    ::ll::TypedStorage<4, 4, int>                                            mPreviousCarriedItem;                          // 上一次携带的物品
    ::ll::TypedStorage<4, 4, int>                                            mEmoteTicks;                                   // 播放表情的剩余时间
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::NetworkChunkPublisher>>    mChunkPublisherView;                           // 区块发布者视图
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                mPacketSender;                                 //  数据包发送器
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HudContainerManagerModel>> mHudContainerManagerModel;                     // HUD（Head-Up Display）容器管理器
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EnderChestContainer>>       mEnderChestInventory;                          // 末影箱
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                mTrackedBossIDs;                               // 追踪的 Boss 实体 ID
    ::ll::TypedStorage<8, 136, ::ItemGroup>                                  mCursorSelectedItemGroup;                      //  鼠标悬停选择的物品组
    ::ll::TypedStorage<8, 440, ::PlayerUIContainer>                          mPlayerUIContainer;                            // 玩家UI容器
    ::ll::TypedStorage<8, 48, ::InventoryTransactionManager>                 mTransactionManager;                           //  交易管理器
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameMode>>                  mGameMode;                                     //  游戏模式
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerRespawnRandomizer>>   mSpawnRandomizer;                                //  重生随机器
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SerializedSkin>>            mSkin;                                         //  皮肤
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackNetManagerBase>>   mItemStackNetManager;                          //  物品堆栈网络管理器
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mUIAnimationComponent;                         // UI 动画组件
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mMapAnimationComponent;                        // 地图动画组件
    ::ll::TypedStorage<4, 28, ::Player::PlayerSpawnPoint>                    mPlayerRespawnPoint;                           // 玩家重生点
    ::ll::TypedStorage<4, 4, float>                                          mServerBuildRatio;                             // 服务器建造比率
    ::ll::TypedStorage<1, 1, ::SubClientId>                                  mClientId;                                     // 客户端子ID
    ::ll::TypedStorage<1, 1, bool>                                           mInteractDataDirty;                            //  交互数据是否已更改
    ::ll::TypedStorage<1, 1, bool>                                           mShouldClientGenerateChunks;                    //  客户端是否应生成区块
    ::ll::TypedStorage<1, 1, bool>                                           mUseMapAnimationComponent;                     //  是否使用地图动画组件
    ::ll::TypedStorage<1, 1, bool>                                           mIsDeferredRenderingFirstPersonObjects;        //  是否延迟渲染第一人称物体
    ::ll::TypedStorage<1, 1, bool>                                           mDestroyingBlock;                              //  是否正在破坏方块
    ::ll::TypedStorage<1, 1, bool>                                           mPlayerLevelChanged;                           // 玩家等级是否发生变化
    ::ll::TypedStorage<4, 4, int>                                            mPreviousLevelRequirement;                     // 之前的等级需求
    ::ll::TypedStorage<4, 4, int>                                            mLastLevelUpTime;                              //  上次升级的时间
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mFirstPersonAnimationComponent;                //  第一人称动画组件
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerListener*>>              mListeners;                                    //  玩家监听器列表
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mRespawnPositionCandidate;                     //  重生位置候选
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mPreDimensionTransferSpawnPosition;            //  维度转换前的生成位置
    ::ll::TypedStorage<4, 4, int>                                            mEnchantmentSeed;                              //  附魔种子
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                           mOnScreenAnimationTextures;                   // 屏幕上的动画纹理
    ::ll::TypedStorage<4, 4, int>                                            mOnScreenAnimationTicks;                       // 屏幕动画tick数
    ::ll::TypedStorage<4, 4, uint>                                           mChunkRadius;                                  // 区块半径
    ::ll::TypedStorage<4, 4, int>                                            mMapIndex;                                     // 地图索引
    ::ll::TypedStorage<4, 4, float>                                          mElytraVolume;                                  // 鞘翅的音量
    ::ll::TypedStorage<8, 8, uint64>                                         mElytraLoop;                                    // 鞘翅循环音效
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>     mCooldowns;                                    //  冷却
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mVanillaCooldowns;                        // 原版冷却
    ::ll::TypedStorage<8, 8, int64>                                                 mStartedBlockingTimeStamp;                 //  开始格挡时间戳
    ::ll::TypedStorage<8, 8, int64>                                                 mBlockedUsingShieldTimeStamp;              // 使用盾牌格挡的时间戳
    ::ll::TypedStorage<8, 8, int64>                                                 mBlockedUsingDamagedShieldTimeStamp;       // 使用损坏的盾牌格挡的时间戳
    ::ll::TypedStorage<8, 32, ::std::string>                                        mName;                                         // 玩家名称
    ::ll::TypedStorage<8, 32, ::std::string>                                        mLastEmotePlayed;                              // 上次播放的表情
    ::ll::TypedStorage<8, 8, int64>                                                 mEmoteEasterEggEndTime;                      // 表情复活节彩蛋结束时间
    ::ll::TypedStorage<4, 4, uint>                                                  mEmoteMessageCount;                          // 表情消息计数
    ::ll::TypedStorage<8, 32, ::std::string>                                        mDeviceId;                                     // 设备ID
    ::ll::TypedStorage<1, 1, bool>                                                  mFlagClientForBAIReset;                      // 标记客户端需要重置BAI
    ::ll::TypedStorage<1, 1, bool>                                                  mSendInventoryOptionsToClient;               //  是否发送物品栏选项给客户端
    ::ll::TypedStorage<1, 1, bool>                                                  mIsHostingPlayer;                              //  是否为服务器的托管玩家
    ::ll::TypedStorage<1, 1, bool>                                                  mPrevBlockedUsingShield;                     // 上一帧是否使用盾牌格挡
    ::ll::TypedStorage<1, 1, bool>                                                  mPrevBlockedUsingDamagedShield;              //  上一帧是否使用损坏的盾牌格挡
    ::ll::TypedStorage<1, 1, bool>                                                  mUsedPotion;                                   // 是否使用药水
    ::ll::TypedStorage<8, 8, ::PlayerDestroyProgressCacheComponent&>                mDestroyProgressCache;                         //  破坏进度缓存组件

public:
    // prevent constructor by default
    Player& operator=(Player const&);
    Player(Player const&);
    Player();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    /**
     * @brief 玩家的析构函数，重写自 Mob。
     */
    virtual ~Player() /*override*/;

    // vIndex: 4
    /**
     * @brief 初始化组件，重写自 Mob。
     */
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 2
    /**
     * @brief 重载硬编码属性，重写自 Mob。
     */
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 177
    /**
     * @brief 为区域准备。
     * @param mainChunkSource  主区块源。
     */
    virtual void prepareRegion(::ChunkSource& mainChunkSource);

    // vIndex: 178
    /**
     * @brief 销毁区域。
     */
    virtual void destroyRegion();

    // vIndex: 179
    /**
     * @brief 暂停区域。
     */
    virtual void suspendRegion();

    // vIndex: 180
    /**
     * @brief 触发维度改变事件。
     */
    virtual void _fireDimensionChanged();

    // vIndex: 88
    /**
     * @brief 检查玩家是否可以使用传送门切换维度，重写自 Actor。
     */
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 181
    /**
     * @brief 使用游戏内学分来切换维度。
     * @param toId 目标维度ID。
     */
    virtual void changeDimensionWithCredits(::DimensionType);

    // vIndex: 182
    /**
     * @brief  世界 Tick 函数.
     * @param tick 帧更新上下文。
     */
    virtual void tickWorld(::Tick const&);

    // vIndex: 183
    /**
     * @brief  框架更新.
     * @param frameUpdateContextFrame 更新上下文基类
     */
    virtual void frameUpdate(::FrameUpdateContextBase&) = 0;

    // vIndex: 184
    /**
     * @brief 获取玩家的区块更新偏移量。
     * @return 返回区块位置的const引用。
     */
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const;

    // vIndex: 24
    /**
     * @brief 标准 tick 函数，重写自 Mob。
     */
    virtual void normalTick() /*override*/;

    // vIndex: 185
    /**
     * @brief 移动玩家视角。
     */
    virtual void moveView();

    // vIndex: 186
    /**
     * @brief 移动生成视角。
     * @param spawnPosition 生成位置。
     * @param dimensionType 维度类型。
     */
    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    // vIndex: 93
    /**
     * @brief 处理同步数据更新，重写自 Actor。
     */
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 145
    /**
     * @brief AI 步进逻辑，重写自 Mob。
     */
    virtual void aiStep() /*override*/;

    // vIndex: 18
    /**
     * @brief 检查是否免疫火焰伤害，重写自 Actor。
     */
    virtual bool isFireImmune() const /*override*/;

    // vIndex: 187
    /**
     * @brief 检查移动统计数据。
     * @param Vec3 const& 移动向量。
     */
    virtual void checkMovementStats(::Vec3 const&);

    // vIndex: 188
    /**
     * @brief 获取当前结构特征。
     * @return  结构特征的哈希字符串。
     */
    virtual ::HashedString getCurrentStructureFeature() const;

    // vIndex: 189
    /**
     * @brief 是否启用了自动跳跃功能。
     * @return 如果启用了自动跳跃，则返回 true。
     */
    virtual bool isAutoJumpEnabled() const;

    // vIndex: 17
    /**
     * @brief 获取插值的骑乘偏移量，重写自 Actor。
     */
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;

    // vIndex: 26
    /**
     * @brief  乘客 Tick 函数.
     */
    virtual void passengerTick() /*override*/;

    // vIndex: 123
    /**
     * @brief 玩家死亡，重写自 Mob。
     */
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 11
    /**
     * @brief 移除，重写自 Actor。
     */
    virtual void remove() /*override*/;

    // vIndex: 190
    /**
     * @brief 复活玩家。
     */
    virtual void respawn();

    // vIndex: 124
    /**
     * @brief 检查是否应该掉落死亡战利品，重写自 Mob。
     */
    virtual bool shouldDropDeathLoot() const /*override*/;

    // vIndex: 163
    /**
     * @brief 死亡时掉落装备，重写自 Mob。
     */
    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source) /*override*/;

    // vIndex: 162
    /**
     * @brief 死亡时掉落装备，重写自 Mob。
     */
    virtual void dropEquipmentOnDeath() /*override*/;

    // vIndex: 164
    /**
     * @brief 死亡时清理带有消失诅咒的物品，重写自 Mob。
     */
    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    // vIndex: 117
    /**
     * @brief 丢弃物品，重写自 Actor。
     */
    virtual bool drop(::ItemStack const& item, bool const randomly) /*override*/;

    // vIndex: 191
    /**
     * @brief 重置旋转。
     */
    virtual void resetRot();

    // vIndex: 9
    /**
     * @brief 重置用户位置，重写自 Actor。
     */
    virtual void resetUserPos(::ActorResetRule resetRule) /*override*/;

    // vIndex: 192
    /**
     * @brief  是否处于试玩模式.
     * @return  如果玩家当前处于试玩模式，返回 true。
     */
    virtual bool isInTrialMode();

    // vIndex: 143
    /**
     * @brief 设置速度，重写自 Mob。
     */
    virtual void setSpeed(float _speed) /*override*/;

    // vIndex: 149
    /**
     * @brief 获取物品使用持续时间，重写自 Mob。
     */
    virtual int getItemUseDuration() const /*override*/;

    // vIndex: 150
    /**
     * @brief 获取物品使用开始进度，重写自 Mob。
     */
    virtual float getItemUseStartupProgress() const /*override*/;

    // vIndex: 151
    /**
     * @brief 获取物品使用间隔进度，重写自 Mob。
     */
    virtual float getItemUseIntervalProgress() const /*override*/;

    // vIndex: 45
    /**
     * @brief 检查是否正在格挡，重写自 Actor。
     */
    virtual bool isBlocking() const /*override*/;

    // vIndex: 46
    /**
     * @brief 检查是否被伤害阻挡，重写自 Actor。
     */
    virtual bool isDamageBlocked(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 69
    /**
     * @brief 处理实体事件，重写自 Mob。
     */
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    // vIndex: 160
    /**
     * @brief 获取所有手持物品，重写自 Mob。
     */
    virtual ::std::vector<::ItemStack const*> getAllHand() const /*override*/;

    // vIndex: 161
    /**
     * @brief 获取所有装备物品，重写自 Mob。
     */
    virtual ::std::vector<::ItemStack const*> getAllEquipment() const /*override*/;

    // vIndex: 116
    /**
     * @brief 添加物品，重写自 Actor。
     */
    virtual bool add(::ItemStack& item) /*override*/;

    // vIndex: 103
    /**
     * @brief 获取命令权限级别，重写自 Actor。
     */
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const /*override*/;

    // vIndex: 53
    /**
     * @brief 攻击另一个 Actor，重写自 Mob。
     */
    virtual bool attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&) /*override*/;

    // vIndex: 78
    /**
     * @brief 获取当前携带物品，重写自 Actor。
     */
    virtual ::ItemStack const& getCarriedItem() const /*override*/;

    // vIndex: 77
    /**
     * @brief 设置当前携带物品，重写自 Actor。
     */
    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    // vIndex: 193
    /**
     * @brief 打开作品集。
     */
    virtual void openPortfolio();

    // vIndex: 194
    /**
     * @brief 打开书本。
     * @param page 页面数量。
     * @param signed  是否签名。
     * @param slot 物品栏槽位。
     * @param blockActor  方块演员。
     */
    virtual void openBook(int, bool, int, ::BlockActor*);

    // vIndex: 195
    /**
     * @brief 与另一个实体开始交易。
     * @param traderId 交易对象的唯一ID。
     * @param forceOpen 是否强制打开交易界面。
     */
    virtual void openTrading(::ActorUniqueID const&, bool);

    // vIndex: 196
    /**
     * @brief 打开黑板。
     * @param chalkboard 黑板方块实体。
     * @param isLocked 黑板是否锁定。
     */
    virtual void openChalkboard(::ChalkboardBlockActor&, bool);

    // vIndex: 197
    /**
     * @brief 打开NPC交互界面。
     * @param npc 包含对话数据的NPC。
     */
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    // vIndex: 198
    /**
     * @brief 打开玩家自己的物品栏。
     */
    virtual void openInventory();

    // vIndex: 199
    /**
     * @brief 显示一条聊天消息。
     * @param author 消息发送者。
     * @param message 消息内容。
     * @param filteredMessage 经过滤的消息内容（可选）。
     */
    virtual void displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );

    // vIndex: 200
    /**
     * @brief 显示一条客户端消息（通常是系统消息）。
     * @param message 消息内容。
     * @param filteredMessage 经过滤的消息内容（可选）。
     */
    virtual void
    displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    // vIndex: 201
    /**
     * @brief 显示一条文本对象消息（用于支持复杂格式和翻译）。
     * @param textObject 文本对象根节点。
     * @param fromXuid 发送者的Xbox Live用户ID。
     * @param fromPlatformId 发送者的平台ID。
     */
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    // vIndex: 203
    /**
     * @brief 显示一条文本对象的私聊消息。
     * @param resolvedTextObject 已解析的文本对象。
     * @param xuid 发送者的XUID。
     * @param platformId 发送者的平台ID。
     */
    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    // vIndex: 202
    /**
     * @brief 显示一条文本对象的私聊消息（重载版本）。
     * @param message 消息内容字符串。
     * @param xuid 发送者的XUID。
     * @param platformId 发送者的平台ID。
     */
    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    // vIndex: 204
    /**
     * @brief 显示一条私聊消息。
     * @param author 发送者。
     * @param message 消息内容。
     * @param filteredMessage 过滤后的消息。
     * @param xuid 发送者的XUID。
     * @param platformId 发送者的平台ID。
     */
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    // vIndex: 35
    /**
     * @brief 获取阴影半径，重写自 Actor。
     */
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 42
    /**
     * @brief 检查是否正在睡觉，重写自 Mob。
     */
    virtual bool isSleeping() const /*override*/;

    // vIndex: 43
    /**
     * @brief 设置睡眠状态，重写自 Mob。
     */
    virtual void setSleeping(bool val) /*override*/;

    // vIndex: 205
    /**
     * @brief 开始在床上睡觉。
     * @param bedBlockPos 床的方块位置。
     * @return 返回睡觉结果（如：成功、太远、有怪物等）。
     */
    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos);

    // vIndex: 206
    /**
     * @brief 停止在床上睡觉。
     * @param forcefulWakeUp 是否是强制唤醒（如床被破坏）。
     * @param updateLevelList 是否更新世界的睡眠玩家列表。
     */
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    // vIndex: 207
    /**
     * @brief 检查玩家当前是否可以开始睡觉。
     * @return 如果可以，返回true。
     */
    virtual bool canStartSleepInBed();

    // vIndex: 165
    /**
     * @brief 发送物品栏信息，重写自 Mob。
     */
    virtual void sendInventory(bool) /*override*/;

    // vIndex: 208
    /**
     * @brief 打开告示牌编辑界面。
     * @param signPos 告示牌位置。
     * @param isFrontSide 是否是正面。
     */
    virtual void openSign(::BlockPos const&, bool);

    // vIndex: 209
    /**
     * @brief 播放一个表情。
     * @param emoteName 表情名称。
     * @param const_bool 未知布尔值。
     */
    virtual void playEmote(::std::string const&, bool const);

    // vIndex: 41
    /**
     * @brief 检查是否是“沉默的观察者”，重写自 Actor。
     */
    virtual bool isSilentObserver() const /*override*/;

    // vIndex: 112
    /**
     * @brief 使用物品，重写自 Actor。
     */
    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem) /*override*/;

    // vIndex: 210
    /**
     * @brief 检查玩家是否正在加载世界。
     * @return 如果正在加载，返回true。
     */
    virtual bool isLoading() const;

    // vIndex: 211
    /**
     * @brief 检查玩家是否已完成初始化。
     * @return 如果已初始化，返回true。
     */
    virtual bool isPlayerInitialized() const;

    // vIndex: 212
    /**
     * @brief 停止加载。
     */
    virtual void stopLoading();

    // vIndex: 142
    /**
     * @brief 获取速度，重写自 Mob。
     */
    virtual float getSpeed() const /*override*/;

    // vIndex: 213
    /**
     * @brief 设置玩家的游戏模式。
     * @param gameType 新的游戏模式。
     */
    virtual void setPlayerGameType(::GameType);

    // vIndex: 214
    /**
     * @brief 初始化HUD容器管理器。
     */
    virtual void initHUDContainerManager();

    // vIndex: 215
    /**
     * @brief 对另一个Actor造成暴击。
     * @param actor 目标Actor。
     */
    virtual void _crit(::Actor& actor);

    // vIndex: 40
    /**
     * @brief 检查是否不可移动，重写自 Mob。
     */
    virtual bool isImmobile() const /*override*/;

    // vIndex: 98
    /**
     * @brief 如果需要，发送移动数据包，重写自 Actor。
     */
    virtual void sendMotionPacketIfNeeded() /*override*/;

    // vIndex: 216
    /**
     * @brief 获取事件系统接口。
     * @return 返回 IMinecraftEventing 指针。
     */
    virtual ::IMinecraftEventing* getEventing() const;

    // vIndex: 217
    /**
     * @brief 获取用户ID。
     * @return 返回用户ID。
     */
    virtual uint getUserId() const;

    // vIndex: 218
    /**
     * @brief 增加经验值。
     * @param xp 增加的经验值数量。
     */
    virtual void addExperience(int xp);

    // vIndex: 219
    /**
     * @brief 增加等级。
     * @param levels 增加的等级数。
     */
    virtual void addLevels(int levels);

    // vIndex: 72
    /**
     * @brief 设置盔甲，重写自 Actor。
     */
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 79
    /**
     * @brief 设置副手物品，重写自 Actor。
     */
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 23
    /**
     * @brief 尝试创建“添加Actor”数据包，重写自 Actor。
     */
    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket() /*override*/;

    // vIndex: 64
    /**
     * @brief 检查是否对某个伤害来源免疫，重写自 Actor。
     */
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 220
    /**
     * @brief 设置容器数据（纯虚函数）。
     */
    virtual void setContainerData(::IContainerManager&, int, int) = 0;

    // vIndex: 221
    /**
     * @brief 当容器内槽位变化时调用（纯虚函数）。
     */
    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) = 0;

    // vIndex: 222
    /**
     * @brief 刷新容器（纯虚函数）。
     */
    virtual void refreshContainer(::IContainerManager&) = 0;

    // vIndex: 223
    /**
     * @brief 删除容器管理器。
     */
    virtual void deleteContainerManager();

    // vIndex: 80
    /**
     * @brief 获取装备的图腾，重写自 Actor。
     */
    virtual ::ItemStack const& getEquippedTotem() const /*override*/;

    // vIndex: 81
    /**
     * @brief 消耗图腾，重写自 Actor。
     */
    virtual bool consumeTotem() /*override*/;

    // vIndex: 224
    /**
     * @brief 检查另一个Actor是否与此玩家相关（是否在加载范围内）。
     * @param actor 要检查的Actor。
     * @return 如果相关，返回true。
     */
    virtual bool isActorRelevant(::Actor const&);

    // vIndex: 114
    /**
     * @brief 获取在地图上的装饰物旋转角度，重写自 Actor。
     */
    virtual float getMapDecorationRotation() const /*override*/;

    // vIndex: 21
    /**
     * @brief 传送到指定位置，重写自 Mob。
     */
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 27
    /**
     * @brief 开始骑乘，重写自 Mob。
     */
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 100
    /**
     * @brief 开始游泳，重写自 Actor。
     */
    virtual void startSwimming() /*override*/;

    // vIndex: 101
    /**
     * @brief 停止游泳，重写自 Actor。
     */
    virtual void stopSwimming() /*override*/;

    // vIndex: 225
    /**
     * @brief 检查是否是教师（教育版功能），纯虚函数。
     */
    virtual bool isTeacher() const = 0;

    // vIndex: 226
    /**
     * @brief 当区域被暂停时调用。
     */
    virtual void onSuspension();

    // vIndex: 227
    /**
     * @brief 当链接的槽位（如配方书）改变时调用。
     */
    virtual void onLinkedSlotsChanged();

    // vIndex: 96
    /**
     * @brief 检查是否能被拉入载具，重写自 Mob。
     */
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 68
    /**
     * @brief 喂食，重写自 Actor。
     */
    virtual void feed(int itemId) /*override*/;

    // vIndex: 228
    /**
     * @brief 发送物品栏交易信息（纯虚函数）。
     */
    virtual void sendInventoryTransaction(::InventoryTransaction const&) const = 0;

    // vIndex: 229
    /**
     * @brief 发送复杂的物品栏交易信息（纯虚函数）。
     */
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const = 0;

    // vIndex: 230
    /**
     * @brief 发送网络数据包。
     */
    virtual void sendNetworkPacket(::Packet& packet) const;

    // vIndex: 172
    /**
     * @brief 检查在禁止生物生成时是否可以存在，重写自 Mob。
     */
    virtual bool canExistWhenDisallowMob() const /*override*/;

    // vIndex: 34
    /**
     * @brief 获取名称标签文本颜色，重写自 Actor。
     */
    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    // vIndex: 94
    /**
     * @brief 检查是否可以添加乘客，重写自 Actor。
     */
    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;

    // vIndex: 231
    /**
     * @brief 获取玩家事件协调器（纯虚函数）。
     */
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    // vIndex: 232
    /**
     * @brief 检查是否是模拟玩家。
     * @return 如果是，返回true。
     */
    virtual bool isSimulated() const;

    // vIndex: 233
    /**
     * @brief 获取玩家的XUID。
     * @return 返回XUID字符串。
     */
    virtual ::std::string getXuid() const;

    // vIndex: 234
    /**
     * @brief 获取玩家的移动设置。
     * @return 返回 PlayerMovementSettings 的const引用。
     */
    virtual ::PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 85
    /**
     * @brief 检查是否能被冰冻，重写自 Mob。
     */
    virtual bool canFreeze() const /*override*/;

    // vIndex: 37
    /**
     * @brief 检查是否能与其他实体交互，重写自 Actor。
     */
    virtual bool canInteractWithOtherEntitiesInGame() const /*override*/;

    // vIndex: 108
    /**
     * @brief 检查是否会阻碍生成和方块放置，重写自 Actor。
     */
    virtual bool canObstructSpawningAndBlockPlacement() const /*override*/;

    // vIndex: 127
    /**
     * @brief 获取上次死亡位置，重写自 Actor。
     */
    virtual ::std::optional<::BlockPos> getLastDeathPos() const /*override*/;

    // vIndex: 128
    /**
     * @brief 获取上次死亡维度，重写自 Actor。
     */
    virtual ::std::optional<::DimensionType> getLastDeathDimension() const /*override*/;

    // vIndex: 129
    /**
     * @brief 检查之前是否死过，重写自 Actor。
     */
    virtual bool hasDiedBefore() const /*override*/;

    // vIndex: 130
    /**
     * @brief 执行进入水中的水花效果，重写自 Actor。
     */
    virtual void doEnterWaterSplashEffect() /*override*/;

    // vIndex: 131
    /**
     * @brief 执行离开水中的水花效果，重写自 Actor。
     */
    virtual void doExitWaterSplashEffect() /*override*/;

    // vIndex: 235
    /**
     * @brief 请求加载缺失的子区块。
     * @param pos 子区块位置。
     */
    virtual void requestMissingSubChunk(::SubChunkPos const&);

    // vIndex: 236
    /**
     * @brief 获取最大区块构建半径。
     * @return 返回半径值。
     */
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 92
    /**
     * @brief 对Actor造成摔落伤害，重写自 Mob。
     */
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 135
    /**
     * @brief 核心受伤处理逻辑，重写自 Mob。
     */
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 136
    /**
     * @brief 读取额外的存档数据，重写自 Mob。
     */
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 137
    /**
     * @brief 添加额外的存档数据，重写自 Mob。
     */
    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    // vIndex: 237
    /**
     * @brief 处理普通的玩家移动数据包。
     * @param pos 新位置。
     * @param rot 新旋转。
     * @param yHeadRot 新的头部Y轴旋转。
     */
    virtual void onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    // vIndex: 133
    /**
     * @brief 检查手部物品设置时是否提供反馈，重写自 Actor。
     */
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const
        /*override*/;

    // vIndex: 134
    /**
     * @brief 检查盔甲设置时是否提供反馈，重写自 Actor。
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const
        /*override*/;

    // vIndex: 238
    /**
     * @brief 创建一个区块源。
     * @param mainChunkSource 主区块源。
     * @return 返回一个 ChunkViewSource 的共享指针。
     */
    virtual ::std::shared_ptr<::ChunkViewSource> _createChunkSource(::ChunkSource& mainChunkSource);

    // vIndex: 239
    /**
     * @brief 设置玩家的能力。
     * @param newAbilities 新的分层能力对象。
     */
    virtual void setAbilities(::LayeredAbilities const& newAbilities);

    // vIndex: 109
    /**
     * @brief 获取动画组件，重写自 Actor。
     */
    virtual ::AnimationComponent& getAnimationComponent() /*override*/;

    // vIndex: 70
    /**
     * @brief 获取Actor渲染器ID，重写自 Actor。
     */
    virtual ::HashedString const& getActorRendererId() const /*override*/;

    // vIndex: 240
    /**
     * @brief 获取编辑器玩家接口（纯虚函数，教育版或编辑器相关）。
     */
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const = 0;

    // vIndex: 241
    /**
     * @brief 销毁编辑器玩家（纯虚函数）。
     */
    virtual void destroyEditorPlayer() = 0;

    // vIndex: 6
    /**
     * @brief 服务端初始化物品堆栈ID，重写自 Actor。
     */
    virtual void _serverInitItemStackIds() /*override*/;

    // vIndex: 174
    /**
     * @brief 初始化身体控制器，重写自 Mob。
     */
    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    /**
     * @brief Player 类的构造函数。
     * @param level 玩家所在的 Level（世界）。
     * @param packetSender 用于向客户端发送数据包的发送器。
     * @param playerGameType 玩家的游戏模式。
     * @param isHostingPlayer 是否为托管玩家（房主）。
     * @param owner 玩家的网络标识符。
     * @param subid 客户端子ID。
     * @param uuid 玩家的通用唯一标识符。
     * @param playFabId 玩家的 PlayFab ID。
     * @param deviceId 玩家的设备ID。
     * @param authType 玩家的认证类型。
     * @param authInfo 玩家的认证信息。
     * @param entityContext 玩家的实体上下文。
     * @param platformId 玩家的平台ID。
     * @param platformOnlineId 玩家的平台在线ID。
     */
    MCAPI Player(
        ::Level&                          level,
        ::PacketSender&                   packetSender,
        ::GameType                        playerGameType,
        bool                              isHostingPlayer,
        ::NetworkIdentifier const&        owner,
        ::SubClientId                     subid,
        ::mce::UUID                       uuid,
        ::std::string const&              playFabId,
        ::std::string const&              deviceId,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& authInfo,
        ::EntityContext&                  entityContext,
        ::std::string const&              platformId,
        ::std::string const&              platformOnlineId
    );

    /**
     * @brief 【内部函数】增加玩家等级。
     * @param levels 增加的等级数。
     */
    MCAPI void _addLevels(int levels);

    /**
     * @brief 【内部函数】攻击另一个Actor。
     * @param actor 目标Actor。
     * @param cause 伤害原因。
     * @param doPredictiveSound 是否播放预测性的声音。
     * @return 如果攻击成功，返回true。
     */
    MCAPI bool _attack(::Actor& actor, ::SharedTypes::Legacy::ActorDamageCause const& cause, bool doPredictiveSound);

    /**
     * @brief 【内部函数】使用盾牌格挡伤害。
     * @param source 伤害来源。
     * @param damage 伤害值。
     * @return 如果格挡成功，返回true。
     */
    MCAPI bool _blockUsingShield(::ActorDamageSource const& source, float damage);

    /**
     * @brief 【内部函数】检查并修正生成位置。
     * @param spawnPosition 要检查和修正的生成位置。
     * @param regions 用于检查的区块源列表。
     * @param adjustYToSolidGround 是否将Y坐标调整到坚实的地面上。
     * @param searchUp 是否向上搜索安全位置。
     * @param positionFromSave 位置是否来自存档。
     * @return 如果找到并修正了安全位置，返回true。
     */
    MCAPI bool _checkAndFixSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        bool                                           adjustYToSolidGround,
        bool                                           searchUp,
        bool                                           positionFromSave
    );

    /**
     * @brief 【内部函数】选择一个生成区域。
     */
    MCAPI void _chooseSpawnArea();

    /**
     * @brief 【内部函数】在选定的区域内选择一个具体的生成位置。
     * @return 如果成功选择，返回true。
     */
    MCAPI bool _chooseSpawnPositionWithinArea();

    /**
     * @brief 【内部函数】确保生成位置是安全的（例如，不在方块内或岩浆中）。
     * @param pos 要检查的位置。
     */
    MCAPI void _ensureSafeSpawnPosition(::Vec3& pos);

    /**
     * @brief 【内部函数】寻找一个备用的安全生成位置。
     * @param spawnPosition 用于存储找到的位置。
     * @param regions 用于检查的区块源列表。
     * @param maxDistance 最大搜索距离。
     * @param checkStoredFallback 是否检查已存储的备用位置。
     * @return 如果找到，返回true。
     */
    MCAPI bool _findFallbackSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        uint                                           maxDistance,
        bool                                           checkStoredFallback
    );

    /**
     * @brief 【内部函数】寻找一个具有足够垂直空间的有效位置。
     * @param spawnPosition 起始搜索位置。
     * @return 返回找到的方块位置的可选值。
     */
    MCAPI ::std::optional<::BlockPos> _findValidPosWithVerticalSpace(::BlockPos spawnPosition);

    /**
     * @brief 【内部函数】处理手持物品时的交互文本。
     */
    MCAPI void _handleCarriedItemInteractText();

    /**
     * @brief 【内部函数】检查区块源是否已加载指定位置。
     */
    MCAPI bool _isChunkSourceLoaded(::Vec3 const& spawnPosition, ::BlockSource const& region) const;

    /**
     * @brief 【内部函数】从NBT加载物品栏选项。
     */
    MCAPI void _loadInventoryOptions(::CompoundTag const& tag);

    /**
     * @brief 【内部函数】在生成前构建生成数据缓存。
     */
    MCAPI void _preSpawnBuildSpawnDataCache();

    /**
     * @brief 【内部函数】注册鞘翅飞行的循环音效。
     */
    MCAPI void _registerElytraLoopSound();

    /**
     * @brief 【内部函数】注册玩家特有的属性（如饥饿度、饱和度、经验等）。
     */
    MCAPI void _registerPlayerAttributes();

    /**
     * @brief 【内部函数】重置客户端动画。
     */
    MCAPI void _resetClientAnimations();


    /**
     * @brief 【内部函数】将物品栏选项保存到NBT。
     */
    MCAPI void _saveInventoryOptions(::CompoundTag& tag) const;

    /**
     * @brief 【内部函数】发送盾牌更新数据包。
     */
    MCAPI void _sendShieldUpdatePacket(
        ::ShieldItem const& shieldItem,
        ::ItemStack const&  before,
        ::ItemStack const&  after,
        ::ContainerID       container,
        int                 slot
    );

    /**
     * @brief 【内部函数】设置玩家的游戏模式。
     */
    MCAPI void _setPlayerGameType(::GameType gameType);

    /**
     * @brief 【内部函数】检查对目标的攻击是否应该是暴击。
     */
    MCAPI bool _shouldCrit(::Actor const& target) const;

    /**
     * @brief 【内部函数】更新交互状态。
     */
    MCAPI void _updateInteraction();

    /**
     * @brief 【内部函数】验证生成位置的可用性。
     */
    MCAPI bool _validateSpawnPositionAvailability(
        ::Vec3 const&       pos,
        ::BlockSource*      blockSourceChunkCheck,
        ::Vec3 const* const AABBoffset
    ) const;

    /**
     * @brief 检查玩家是否能在地图上显示。
     * @return 如果能，返回true。
     */
    MCAPI bool canBeSeenOnMap() const;

    /**
     * @brief 检查玩家当前是否可以跳跃。
     * @return 如果可以，返回true。
     */
    MCAPI bool canJump();

    /**
     * @brief 检查玩家是否可以打开容器界面。
     * @return 如果可以，返回true。
     */
    MCAPI bool canOpenContainerScreen();

    /**
     * @brief 检查玩家是否可以睡觉。
     * @return 如果可以，返回true。
     */
    MCAPI bool canSleep() const;

    /**
     * @brief 检查指定物品是否可以在副手堆叠。
     * @param item 要检查的物品。
     * @return 如果可以，返回true。
     */
    MCAPI bool canStackInOffhand(::ItemStack const& item) const;

    /**
     * @brief 检查玩家是否能使用某个能力。
     * @param abilityIndex 能力索引。
     * @return 如果能使用，返回true。
     */
    MCAPI bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    /**
     * @brief 检查玩家是否能使用管理员方块（如命令方块）。
     * @return 如果能，返回true。
     */
    MCAPI bool canUseOperatorBlocks() const;

    /**
     * @brief 消耗玩家的饱食度。
     * @param exhaustionAmount 消耗量。
     */
    MCAPI void causeFoodExhaustion(float exhaustionAmount);

    /**
     * @brief 检查一个位置是否是有效的床。
     * @param spawnBlockSource 用于检查的区块源。
     * @param positionToCheck 要检查的位置。
     * @return 如果是有效床，返回true。
     */
    MCAPI bool checkBed(::BlockSource* spawnBlockSource, ::Vec3 const* const positionToCheck);

    /**
     * @brief 检查是否需要自动跳跃。
     * @param inputMoveX X轴移动输入。
     * @param inputMoveZ Z轴移动输入。
     * @return 如果需要，返回true。
     */
    MCAPI bool checkNeedAutoJump(float inputMoveX, float inputMoveZ);

    /**
     * @brief 检查生成点方块是否仍然有效。
     * @param region 用于检查的区块源。
     * @return 如果有效，返回true。
     */
    MCAPI bool checkSpawnBlock(::BlockSource const& region) const;

    /**
     * @brief 完成使用物品（例如，吃完食物）。
     */
    MCAPI void completeUsingItem();

    /**
     * @brief 吃下一个物品。
     * @param instance 要吃的物品实例。
     */
    MCAPI void eat(::ItemStack const& instance);

    /**
     * @brief 吃东西（直接增加饥饿度和饱和度）。
     * @param hungerValue 增加的饥饿值。
     * @param saturationModifier 饱和度修正值。
     */
    MCAPI void eat(int hungerValue, float saturationModifier);

    /**
     * @brief 检查已装备的盔甲是否可以被移动。
     * @param item 盔甲物品。
     * @return 如果可以移动，返回true。
     */
    MCAPI bool equippedArmorItemCanBeMoved(::ItemStack const& item) const;

    /**
     * @brief 触发维度改变事件。
     * @param fromDimension 起始维度。
     * @param toDimension 目标维度。
     */
    MCAPI void fireDimensionChangedEvent(::DimensionType fromDimension, ::DimensionType toDimension);

    /**
     * @brief 获取玩家的能力（const版本）。
     * @return 返回对LayeredAbilities的const引用。
     */
    MCAPI ::LayeredAbilities const& getAbilities() const;

    /**
     * @brief 获取玩家的能力。
     */
    MCFOLD ::LayeredAbilities& getAbilities();

    /**
     * @brief 获取玩家的代理（Agent，教育版功能）。
     * @return 返回Agent指针。
     */
    MCAPI ::Agent* getAgent() const;

    /**
     * @brief 获取当前正在使用的盾牌。
     * @return 返回盾牌物品的const引用。
     */
    MCAPI ::ItemStack const& getCurrentActiveShield() const;

    /**
     * @brief 获取对某个方块的破坏进度。
     * @param block 目标方块。
     * @return 返回进度值（0.0到1.0）。
     */
    MCAPI float getDestroyProgress(::Block const& block);

    /**
     * @brief 获取预期的生成维度ID。
     * @return 返回DimensionType。
     */
    MCAPI ::DimensionType getExpectedSpawnDimensionId() const;

    /**
     * @brief 获取预期的生成位置。
     * @return 返回BlockPos的const引用。
     */
    MCAPI ::BlockPos const& getExpectedSpawnPosition() const;



    /**
     * @brief 获取交互文本（例如“打开箱子”）。
     * @return 返回交互文本字符串。
     */
    MCAPI ::std::string getInteractText() const;

    /**
     * @brief 获取某个物品类型的剩余冷却时间。
     * @param type 物品类型（哈希字符串）。
     * @return 返回剩余的tick数。
     */
    MCAPI int getItemCooldownLeft(::HashedString const& type) const;

    /**
     * @brief 获取与某个物品交互的文本。
     * @param item 目标物品。
     * @return 返回交互文本。
     */
    MCAPI ::std::string getItemInteractText(::Item const& item) const;

    /**
     * @brief 获取玩家的拾取范围。
     * @return 返回一个AABB（包围盒）。
     */
    MCAPI ::AABB getPickupArea() const;

    /**
     * @brief 获取玩家的游戏模式。
     * @return 返回GameType。
     */
    MCAPI ::GameType getPlayerGameType() const;

    /**
     * @brief 获取当前选中的物品。
     */
    MCFOLD ::ItemStack const& getSelectedItem() const;

    /**
     * @brief 获取睡觉时的旋转角度。
     * @return 返回角度值。
     */
    MCAPI float getSleepRotation() const;

    /**
     * @brief 获取升到下一级所需的经验值。
     * @return 返回经验值。
     */
    MCAPI int getXpNeededForNextLevel() const;

    /**
     * @brief 检查玩家是否拥有自己的区块源。
     */
    MCFOLD bool hasOwnedChunkSource() const;

    /**
     * @brief 检查玩家物品栏中是否有某种资源。
     * @param resource 物品描述符。
     * @return 如果有，返回true。
     */
    MCAPI bool hasResource(::ItemDescriptor const& resource);

    /**
     * @brief 检查玩家是否有设置好的重生点。
     * @return 如果有，返回true。
     */
    MCAPI bool hasRespawnPosition() const;

    /**
     * @brief 与另一个Actor交互。
     * @param actor 目标Actor。
     * @param location 交互的精确位置。
     * @return 如果交互成功，返回true。
     */
    MCAPI bool interact(::Actor& actor, ::Vec3 const& location);

    /**
     * @brief 当物品栏变化时调用。
     * @param container 发生变化的容器。
     * @param slot 变化的槽位。
     * @param oldItem 旧物品。
     * @param newItem 新物品。
     * @param forceBalanced 是否强制平衡。
     */
    MCAPI void inventoryChanged(
        ::Container&,
        int                slot,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool               forceBalanced
    );

    /**
     * @brief 检查一个2D位置是否与玩家相关（在加载范围内）。
     * @param dimension 维度。
     * @param position 位置。
     * @return 如果相关，返回true。
     */
    MCAPI bool is2DPositionRelevant(::DimensionType dimension, ::BlockPos const& position);

    /**
     * @brief 检查玩家是否在飞行。
     * @return 如果在飞行，返回true。
     */
    MCAPI bool isFlying() const;

    /**
     * @brief 检查是否是强制重生。
     * @return 如果是，返回true。
     */
    MCAPI bool isForcedRespawn() const;

    /**
     * @brief 检查此玩家是否对某个生物隐藏（如旁观模式）。
     * @param target 目标生物。
     * @return 如果隐藏，返回true。
     */
    MCAPI bool isHiddenFrom(::Mob& target) const;

    /**
     * @brief 检查玩家是否在袭击中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInRaid() const;

    /**
     * @brief 检查某个物品类型是否在冷却中。
     * @param type 物品类型。
     * @return 如果在冷却，返回true。
     */
    MCAPI bool isItemOnCooldown(::HashedString const& type) const;

    /**
     * @brief 从NBT加载上次死亡的位置。
     */
    MCAPI void loadLastDeathLocation(::CompoundTag const& tag);

    /**
     * @brief 播放摔落或着陆的声音。
     * @param expectedDamage 预期的摔落伤害。
     * @param onBlock 脚下的方块。
     * @param blockAbove 头顶的方块。
     */
    MCAPI void playFallOrLandSound(int expectedDamage, ::Block const& onBlock, ::Block const& blockAbove);

    /**
     * @brief 播放一个可预测的同步声音。
     * @param type 声音事件类型。
     * @param pos 位置。
     * @param data 附加数据。
     * @param isGlobal 是否是全局声音。
     */
    MCAPI void playPredictiveSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal
    );

    /**
     * @brief 重新检查生成位置。
     */
    MCAPI void recheckSpawnPosition();

    /**
     * @brief 释放正在使用的物品（如停止拉弓）。
     */
    MCAPI void releaseUsingItem();

    /**
     * @brief 重置玩家等级和经验。
     */
    MCAPI void resetPlayerLevel();

    /**
     * @brief 将上次死亡的位置保存到NBT。
     */
    MCAPI void saveLastDeathLocation(::CompoundTag& tag) const;

    /**
     * @brief 发送一个遥测事件数据包。
     */
    MCAPI void sendEventPacket(::LegacyTelemetryEventPacket& packet) const;

    /**
     * @brief 设置床为重生点。
     * @param bedPosition 床的位置。
     */
    MCAPI void setBedRespawnPosition(::BlockPos const& bedPosition);

    /**
     * @brief 设置容器管理器模型。
     * @param manager 模型指针。
     */
    MCAPI void setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> manager);

    /**
     * @brief 设置玩家是否已死亡的标志。
     * @param hasDied 是否死亡。
     */
    MCAPI void setHasDied(bool hasDied);

    /**
     * @brief 设置上次死亡的维度。
     * @param dimension 维度ID。
     */
    MCAPI void setLastDeathDimension(::DimensionType dimension);

    /**
     * @brief 设置上次死亡的位置。
     * @param pos 位置。
     */
    MCAPI void setLastDeathPos(::BlockPos pos);

    /**
     * @brief 设置玩家的名字。
     * @param newName 新名字。
     */
    MCAPI void setName(::std::string const& newName);

    /**
     * @brief 设置平台在线ID。
     * @param platformOnlineId ID字符串。
     */
    MCAPI void setPlatformOnlineId(::std::string const& platformOnlineId);

    /**
     * @brief 设置玩家UI容器中的物品。
     * @param slot UI槽位。
     * @param item 物品。
     * @param forceBalance 是否强制平衡。
     */
    MCAPI void setPlayerUIItem(::PlayerUISlot slot, ::ItemStack const& item, bool forceBalance);

    /**
     * @brief 设置重生点。
     * @param inRespawnPosition 重生位置。
     * @param dimension 维度。
     */
    MCAPI void setRespawnPosition(::BlockPos const& inRespawnPosition, ::DimensionType dimension);



    /**
     * @brief 设置候选重生点。
     */
    MCAPI void setRespawnPositionCandidate();

    /**
     * @brief 设置选中的物品。
     * @param item 物品。
     */
    MCAPI void setSelectedItem(::ItemStack const& item);

    /**
     * @brief 设置选中的槽位。
     * @param slot 槽位索引。
     * @return 返回新选中槽位中的物品。
     */
    MCAPI ::ItemStack const& setSelectedSlot(int slot);

    /**
     * @brief 设置重生方块为重生点（如重生锚）。
     * @param spawnBlockPosition 方块位置。
     * @param dimension 维度。
     * @return 如果设置成功，返回true。
     */
    MCAPI bool setSpawnBlockRespawnPosition(::BlockPos const& spawnBlockPosition, ::DimensionType dimension);

    /**
     * @brief 开始一个物品的冷却。
     * @param item 物品指针。
     * @param updateClient 是否通知客户端。
     */
    MCAPI void startCooldown(::Item const* item, bool updateClient);

    /**
     * @brief 开始一个物品类型的冷却。
     * @param type 物品类型。
     * @param tickDuration 冷却持续时间（ticks）。
     * @param updateClient 是否通知客户端。
     */
    MCAPI void startCooldown(::HashedString const& type, int tickDuration, bool updateClient);

    /**
     * @brief 开始滑翔。
     */
    MCAPI void startGliding();

    /**
     * @brief 开始在方块上使用物品。
     * @param face 方块的面。
     * @param blockPos 方块位置。
     * @param buildBlockPos 建造位置。
     * @param item 使用的物品。
     */
    MCAPI void
    startItemUseOn(uchar face, ::BlockPos const& blockPos, ::BlockPos const& buildBlockPos, ::ItemStack const& item);

    /**
     * @brief 开始使用物品（如吃东西、拉弓）。
     * @param instance 物品实例。
     * @param duration 使用持续时间。
     */
    MCAPI void startUsingItem(::ItemStack const& instance, int duration);

    /**
     * @brief 停止滑翔。
     */
    MCAPI void stopGliding();

    /**
     * @brief 停止在方块上使用物品。
     * @param blockPos 方块位置。
     * @param item 使用的物品。
     */
    MCAPI void stopItemUseOn(::BlockPos const& blockPos, ::ItemStack const& item);

    /**
     * @brief 停止使用物品。
     */
    MCAPI void stopUsingItem();

    /**
     * @brief 从另一个Actor处拿取物品。
     * @param actor 目标Actor。
     * @param count 数量。
     * @param favoredSlot 偏好的槽位。
     * @return 如果成功，返回true。
     */
    MCAPI bool take(::Actor& actor, int, int favoredSlot);

    /**
     * @brief 更新盔甲的tick逻辑（如耐久消耗）。
     */
    MCAPI void tickArmor();

    /**
     * @brief 尝试开始滑翔。
     * @return 如果成功，返回true。
     */
    MCAPI bool tryStartGliding();

    /**
     * @brief 取消追踪一个Boss。
     * @param mob Boss的ID。
     */
    MCAPI void unRegisterTrackedBoss(::ActorUniqueID mob);

    /**
     * @brief 更新物品栏交易。
     */
    MCAPI void updateInventoryTransactions();

    /**
     * @brief 更新皮肤。
     * @param skin 序列化后的皮肤数据。
     * @param clientSubID 客户端子ID。
     */
    MCAPI void updateSkin(::SerializedSkin const& skin, int clientSubID);

    /**
     * @brief 更新被追踪的Boss（如Boss血条）。
     */
    MCAPI void updateTrackedBosses();

    /**
     * @brief 使用选中的物品。
     * @param itemUseMethod 使用方法。
     * @param consumeItem 是否消耗物品。
     */
    MCAPI void useSelectedItem(::ItemUseMethod itemUseMethod, bool consumeItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    /**
     * @brief [静态] 消耗食物饱食度。这是一个内部辅助函数。
     * @param attribute 饥饿度属性的可变引用。
     * @param exhaustionAmount 消耗量。
     */
    MCAPI static void _causeFoodExhaustion(::MutableAttributeWithContext& attribute, float exhaustionAmount);

    /**
     * @brief [静态][废弃] 检查并修正生成位置。这是一个旧版本的实现。
     * @param spawnPosition 初始生成位置。
     * @param regions 用于检查的区块源列表。
     * @param aabb 玩家的包围盒。
     * @param adjustYToSolidGround 是否调整Y坐标到坚实地面。
     * @param bool 未知布尔值。
     * @param searchUp 是否向上搜索。
     * @param positionFromSave 位置是否来自存档。
     * @param spawningAtForcedSpawn 是否在强制生成点生成。
     * @param dimensionHeight 维度高度。
     * @return 返回一个包含修正后位置的可选值。
     */
    MCAPI static ::std::optional<::Player::FixedSpawnPositionData_DEPRECATED> checkAndFixSpawnPosition_DEPRECATED(
        ::Vec3 const&                                  spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        ::AABB                                         aabb,
        bool                                           adjustYToSolidGround,
        bool,
        bool  searchUp,
        bool  positionFromSave,
        bool  spawningAtForcedSpawn,
        short dimensionHeight
    );

    /**
     * @brief [静态] 检查是否需要自动跳跃。
     * @param region 提供方块数据的const区块源。
     * @param aabbShape 玩家的包围盒形状组件。
     * @param actorRotation 玩家的旋转组件。
     * @param movementSpeed 玩家的移动速度。
     * @param stateVector 玩家的状态向量组件（位置、速度等）。
     * @param collisionShapeInterface 碰撞形状接口。
     * @param inputMoveX X轴移动输入。
     * @param inputMoveZ Z轴移动输入。
     * @return 如果需要自动跳跃，返回true。
     */
    MCAPI static bool checkNeedAutoJump(
        ::IConstBlockSource const&                         region,
        ::AABBShapeComponent const&                        aabbShape,
        ::ActorRotationComponent const&                    actorRotation,
        float                                              movementSpeed,
        ::StateVectorComponent const&                      stateVector,
        ::optional_ref<::GetCollisionShapeInterface const> collisionShapeInterface,
        float                                              inputMoveX,
        float                                              inputMoveZ
    );

    /**
     * @brief [静态] 获取自定义的受伤音效。
     * @param mob 目标生物。
     * @param cause 伤害原因。
     * @return 返回一个包含声音事件的可选值。
     */
    MCAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob& mob, ::SharedTypes::Legacy::ActorDamageCause cause);

    /**
     * @brief [静态] 检查一个区域对于生成是否危险（如充满岩浆）。
     * @param region 区块源。
     * @param centeredAABB 中心对齐的包围盒。
     * @return 如果危险，返回true。
     */
    MCAPI static bool isDangerousVolumeForSpawn(::BlockSource& region, ::AABB const& centeredAABB);

    /**
     * @brief [静态][废弃] 检查一个区域是否危险。这是一个旧版本的实现。
     * @param region 区块源。
     * @param centeredAABB 中心对齐的包围盒。
     * @param checkForLava 是否检查岩浆。
     * @return 如果危险，返回true。
     */
    MCAPI static bool
    isDangerousVolume_DEPRECATED(::BlockSource& region, ::AABB const& centeredAABB, bool checkForLava);

    /**
     * @brief [静态] 尝试从实体上下文获取Player指针。
     * @param entity 实体上下文。
     * @param includeRemoved 是否包含已移除的实体。
     * @return 如果实体是玩家，返回Player指针；否则返回nullptr。
     */
    MCAPI static ::Player* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

    /**
     * @brief [静态] 尝试从实体上下文的栈引用结果中获取Player指针。
     * @param entity 实体上下文的栈引用结果。
     * @param includeRemoved 是否包含已移除的实体。
     * @return 如果实体是玩家，返回Player指针；否则返回nullptr。
     */
    MCAPI static ::Player* tryGetFromEntity(::StackRefResult<::EntityContext> entity, bool includeRemoved);

    /**
     * @brief [静态] 更新实体数据中的玩家游戏模式。
     * @param entity 目标实体上下文。
     * @param gameType 要设置的游戏模式。
     * @param defaultGameType 默认游戏模式。
     */
    MCAPI static void
    updatePlayerGameTypeEntityData(::EntityContext& entity, ::GameType gameType, ::GameType defaultGameType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    /**
     * @brief [静态常量] 玩家默认的包围盒高度。
     */
    MCAPI static float const& DEFAULT_BB_HEIGHT();

    /**
     * @brief [静态常量] 玩家默认的包围盒宽度。
     */
    MCAPI static float const& DEFAULT_BB_WIDTH();

    /**
     * @brief [静态常量] 玩家默认的眼睛高度偏移。
     */
    MCAPI static float const& DEFAULT_PLAYER_EYE_OFFSET();

    /**
     * @brief [静态常量] 玩家默认的高度偏移。
     */
    MCAPI static float const& DEFAULT_PLAYER_HEIGHT_OFFSET();

    /**
     * @brief [静态常量] 触发变形事件所需的移动距离。
     */
    MCAPI static float const& DISTANCE_TO_TRANSFORM_EVENT();


    /**
     * @brief [静态属性] 疲劳度（Exhaustion）属性。
     */
    MCAPI static ::Attribute const& EXHAUSTION();

    /**
     * @brief [静态属性] 经验值（Experience）属性。
     */
    MCAPI static ::Attribute const& EXPERIENCE();

    /**
     * @brief [静态常量] 停止滑翔的延迟时间。
     */
    MCAPI static int const& GLIDE_STOP_DELAY();

    /**
     * @brief [静态属性] 饥饿度（Hunger）属性。
     */
    MCAPI static ::Attribute const& HUNGER();

    /**
     * @brief [静态属性] 等级（Level）属性。
     */
    MCAPI static ::Attribute const& LEVEL();

    /**
     * @brief [静态常量] 玩家睡觉时的高度。
     */
    MCAPI static float const& PLAYER_SLEEPING_HEIGHT();

    /**
     * @brief [静态属性] 饱和度（Saturation）属性。
     */
    MCAPI static ::Attribute const& SATURATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&                          level,
        ::PacketSender&                   packetSender,
        ::GameType                        playerGameType,
        bool                              isHostingPlayer,
        ::NetworkIdentifier const&        owner,
        ::SubClientId                     subid,
        ::mce::UUID                       uuid,
        ::std::string const&              playFabId,
        ::std::string const&              deviceId,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& authInfo,
        ::EntityContext&                  entityContext,
        ::std::string const&              platformId,
        ::std::string const&              platformOnlineId
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
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCAPI void $destroyRegion();

    MCAPI void $suspendRegion();

    MCAPI void $_fireDimensionChanged();

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCFOLD void $changeDimensionWithCredits(::DimensionType);

    MCAPI void $tickWorld(::Tick const&);

    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCAPI void $normalTick();

    MCAPI void $moveView();

    MCAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    MCFOLD void $onSynchedDataUpdate(int dataId);

    MCAPI void $aiStep();

    MCAPI bool $isFireImmune() const;

    MCFOLD void $checkMovementStats(::Vec3 const&);

    MCFOLD ::HashedString $getCurrentStructureFeature() const;

    MCFOLD bool $isAutoJumpEnabled() const;

    MCAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCAPI void $passengerTick();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $remove();

    MCAPI void $respawn();

    MCAPI bool $shouldDropDeathLoot() const;

    MCAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);

    MCAPI void $dropEquipmentOnDeath();

    MCFOLD void $clearVanishEnchantedItemsOnDeath();

    MCAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCFOLD void $resetRot();

    MCAPI void $resetUserPos(::ActorResetRule resetRule);

    MCFOLD bool $isInTrialMode();

    MCAPI void $setSpeed(float _speed);

    MCAPI int $getItemUseDuration() const;

    MCAPI float $getItemUseStartupProgress() const;

    MCAPI float $getItemUseIntervalProgress() const;

    MCAPI bool $isBlocking() const;

    MCAPI bool $isDamageBlocked(::ActorDamageSource const& source) const;

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCAPI ::std::vector<::ItemStack const*> $getAllHand() const;

    MCAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;

    MCAPI bool $add(::ItemStack& item);

    MCFOLD ::ItemStack const& $getCarriedItem() const;

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCFOLD void $openPortfolio();

    MCFOLD void $openBook(int, bool, int, ::BlockActor*);

    MCFOLD void $openTrading(::ActorUniqueID const&, bool);

    MCFOLD void $openChalkboard(::ChalkboardBlockActor&, bool);

    MCFOLD void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    MCFOLD void $openInventory();

    MCFOLD void $displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );

    MCAPI void
    $displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    MCFOLD void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    MCFOLD void $displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    MCFOLD void $displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCFOLD void $displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    MCAPI float $getShadowRadius() const;

    MCAPI bool $isSleeping() const;

    MCAPI void $setSleeping(bool val);

    MCAPI ::BedSleepingResult $startSleepInBed(::BlockPos const& bedBlockPos);

    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    MCAPI bool $canStartSleepInBed();

    MCFOLD void $sendInventory(bool);

    MCFOLD void $openSign(::BlockPos const&, bool);

    MCFOLD void $playEmote(::std::string const&, bool const);

    MCAPI bool $isSilentObserver() const;

    MCAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCFOLD bool $isLoading() const;

    MCFOLD bool $isPlayerInitialized() const;

    MCFOLD void $stopLoading();

    MCAPI float $getSpeed() const;

    MCAPI void $initHUDContainerManager();

    MCAPI void $_crit(::Actor& actor);

    MCAPI bool $isImmobile() const;

    MCFOLD void $sendMotionPacketIfNeeded();

    MCAPI ::IMinecraftEventing* $getEventing() const;

    MCFOLD uint $getUserId() const;

    MCAPI void $addExperience(int xp);

    MCAPI void $addLevels(int levels);

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI void $deleteContainerManager();

    MCAPI ::ItemStack const& $getEquippedTotem() const;

    MCAPI bool $consumeTotem();

    MCFOLD bool $isActorRelevant(::Actor const&);

    MCAPI float $getMapDecorationRotation() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $startSwimming();

    MCAPI void $stopSwimming();

    MCFOLD void $onSuspension();

    MCFOLD void $onLinkedSlotsChanged();

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCAPI void $feed(int itemId);

    MCFOLD void $sendNetworkPacket(::Packet& packet) const;

    MCFOLD bool $canExistWhenDisallowMob() const;

    MCAPI ::mce::Color $getNameTagTextColor() const;

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCFOLD bool $isSimulated() const;

    MCAPI ::std::string $getXuid() const;

    MCAPI ::PlayerMovementSettings const& $getMovementSettings() const;

    MCAPI bool $canFreeze() const;

    MCAPI bool $canInteractWithOtherEntitiesInGame() const;

    MCAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCAPI ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCAPI ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCAPI bool $hasDiedBefore() const;

    MCAPI void $doEnterWaterSplashEffect();

    MCAPI void $doExitWaterSplashEffect();

    MCFOLD void $requestMissingSubChunk(::SubChunkPos const&);

    MCFOLD uchar $getMaxChunkBuildRadius() const;

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI void $onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI ::std::shared_ptr<::ChunkViewSource> $_createChunkSource(::ChunkSource& mainChunkSource);

    MCAPI void $setAbilities(::LayeredAbilities const& newAbilities);

    MCAPI ::AnimationComponent& $getAnimationComponent();

    MCAPI ::HashedString const& $getActorRendererId() const;

    MCFOLD void $_serverInitItemStackIds();

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/diagnostics/CrashDumpLogStringID.h"
#include "mc/util/CallbackToken.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/inventory/InventoryMenu.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockActor;
class BlockPos;
class ChunkSource;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class ContainerManagerModel;
class DataLoadHelper;
class Dimension;
class EntityContext;
class FrameUpdateContextBase;
class IContainerManager;
class InventoryTransaction;
class ItemStack;
class Level;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class ResolvedTextObject;
class ServerNetworkSystem;
class TextObjectRoot;
class Vec3;
struct INpcDialogueData;
struct PlayerAuthenticationInfo;
struct PlayerMovementSettings;
struct SyncedClientOptionsComponent;
struct VariantParameterList;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace mce { class UUID; }
// clang-format on

class ServerPlayer : public ::Player {
public:
    // ServerPlayer inner types declare
    // clang-format off
    struct NearbyActor;
    // clang-format on

    // ServerPlayer inner types define
    using OnPlayerLoadedCallback = ::std::function<void(::ServerPlayer&)>;

        struct NearbyActor {
    public:
        // NearbyActor inner types define
        enum class State : int {
            Unknown  = 0, // 初始状态，未知
            New      = 1, // 新发现的Actor，下一帧需要发送AddActorPacket给客户端
            Exist    = 2, // 已存在的Actor，客户端已经知道这个Actor
            DidExist = 3, // 曾经存在但现在不在附近的Actor，可能需要发送RemoveActorPacket
        };

    public:
        // member variables
        // NOLINTBEGIN
        /**
         * @brief 标记这个附近的Actor是否是“自主的”（autonomous）。
         *        自主的Actor（如其他玩家）会自己发送位置更新，服务器不需要频繁地为它们发送移动数据包。
         *        非自主的Actor（如大部分怪物）的移动完全由服务器控制和同步。
         */
        ::ll::TypedStorage<1, 1, bool>                               isAutonomous;
        
        /**
         * @brief 此Actor相对于当前玩家的同步状态。
         *        服务器使用这个状态来决定是发送创建、更新还是移除此Actor的数据包给玩家。
         *        @see State
         */
        ::ll::TypedStorage<4, 4, ::ServerPlayer::NearbyActor::State> state;

        /**
         * @brief 临时存储的Actor指针。
         *        在更新附近实体列表的过程中，这个字段用于临时引用Actor对象，
         *        以便在处理完所有实体后进行最终的状态更新和清理。
         */
        ::ll::TypedStorage<8, 8, ::Actor*>                           tempActor;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlatformType>                          mPlatformType;                      // 玩家客户端的平台类型 (如 Windows, Android, iOS)
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&>                  mNetwork;                           // 服务器网络系统的引用，用于与客户端通信
    ::ll::TypedStorage<8, 64, ::std::function<void(::ServerPlayer&)>> mOnPlayerLoadedCallback;            // 当玩家数据加载完成时调用的回调函数
    ::ll::TypedStorage<8, 112, ::InventoryMenu>                       mInventoryMenu;                     // 玩家的物品栏菜单
    ::ll::TypedStorage<1, 1, ::ContainerID>                           mContainerCounter;                  // 用于生成容器ID的计数器
    ::ll::TypedStorage<4, 4, uint>                                    mMaxChunkRadius;                    // 服务器允许的最大区块加载半径
    ::ll::TypedStorage<1, 1, bool>                                    mIsInitialPlayerLoadHappening;      // 是否正在进行玩家的初始加载
    ::ll::TypedStorage<1, 1, bool>                                    mIsTeacher;                         // 是否为教师 (教育版功能)
    ::ll::TypedStorage<1, 1, bool>                                    mLocalPlayerInitialized;            // 本地玩家（服务器上的实体）是否已初始化
    ::ll::TypedStorage<1, 1, bool>                                    mWaitingForTickingAreasPreload;     // 是否正在等待常加载区域的预加载完成
    ::ll::TypedStorage<8, 8, ::Tick>                                  mPrevShieldBlockingTick;            // 上一次使用盾牌格挡的游戏刻
    ::ll::TypedStorage<4, 4, uint>                                    mClientViewRadius;                  // 客户端当前的视野半径
    ::ll::TypedStorage<4, 4, uint>                                    mClientRequestedRadius;             // 客户端请求的视野半径
    ::ll::TypedStorage<1, 1, bool>                                    mIsCompatibleWithClientSideChunkGen; // 客户端是否与服务器端的区块生成兼容
    ::ll::TypedStorage<4, 4, int>                                     mRemainingStructureRefreshTicks;    // 剩余的结构特征刷新tick数
    ::ll::TypedStorage<8, 48, ::HashedString>                         mCurrentStructureFeature;           // 玩家当前所在的结构特征（如村庄、要塞）
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ServerPlayer::NearbyActor>> mNearbyActors; // 附近Actor的映射表，用于同步
    ::ll::TypedStorage<8, 16, ::CallbackToken>                                                    mCloseContainerToken;               // 关闭容器时的回调令牌
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorPlayer>>                          mEditorServerPlayer;                // 编辑器模式下的服务器玩家接口
    ::ll::TypedStorage<1, 1, bool>                                                                mHasQueuedViewMove;                 // 是否有已排队的视角移动请求
    ::ll::TypedStorage<1, 1, bool>                                                                mIsPendingDisconnect;               // 是否正等待断开连接
    ::ll::TypedStorage<4, 52, ::std::array<::HudVisibility, 13>>                                  mHudElementsVisibilityState;        // HUD（抬头显示）元素的可见性状态数组
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    /**
     * @brief ServerPlayer 的析构函数，重写自 Player。
     */
    virtual ~ServerPlayer() /*override*/;

    // vIndex: 4
    /**
     * @brief 初始化组件，重写自 Player。
     */
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 145
    /**
     * @brief AI 步进逻辑，重写自 Player。
     */
    virtual void aiStep() /*override*/;

    // vIndex: 24
    /**
     * @brief 标准 tick 函数，重写自 Player。处理服务器端玩家的每刻更新。
     */
    virtual void normalTick() /*override*/;

    // vIndex: 138
    /**
     * @brief 使玩家被击退，重写自 Mob。
     */
    virtual void knockback(
        ::Actor* source,
        int      dmg,
        float    xd,
        float    zd,
        float    horizontalPower,
        float    verticalPower,
        float    heightCap
    ) /*override*/;

    // vIndex: 123
    /**
     * @brief 玩家死亡，重写自 Player。
     */
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 185
    /**
     * @brief 移动玩家视角，重写自 Player。
     */
    virtual void moveView() /*override*/;

    // vIndex: 186
    /**
     * @brief 移动生成视角，重写自 Player。
     */
    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType) /*override*/;

    // vIndex: 183
    /**
     * @brief 框架更新，重写自 Player。
     */
    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    // vIndex: 52
    /**
     * @brief 检查一个Actor是否是有效目标，重写自 Mob。
     */
    virtual bool isValidTarget(::Actor* attacker) const /*override*/;

    // vIndex: 156
    /**
     * @brief 对盔甲槽位造成伤害，重写自 Mob。
     */
    virtual void
    hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots) /*override*/;

    // vIndex: 158
    /**
     * @brief 发送盔甲损坏信息，重写自 Mob。
     */
    virtual void sendArmorDamage(::std::bitset<5> const damagedSlots) /*override*/;

    // vIndex: 159
    /**
     * @brief 发送盔甲信息，重写自 Mob。
     */
    virtual void sendArmor(::std::bitset<5> const armorSlots) /*override*/;

    // vIndex: 157
    /**
     * @brief 设置损坏的盔甲，重写自 Mob。
     */
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) /*override*/;

    // vIndex: 165
    /**
     * @brief 发送物品栏信息，重写自 Player。
     */
    virtual void sendInventory(bool shouldSelectSlot) /*override*/;

    // vIndex: 228
    /**
     * @brief 发送物品栏交易信息，重写自 Player。
     */
    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const /*override*/;

    // vIndex: 229
    /**
     * @brief 发送复杂的物品栏交易信息，重写自 Player。
     */
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const
        /*override*/;

    // vIndex: 230
    /**
     * @brief 发送网络数据包，重写自 Player。
     */
    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    // vIndex: 201
    /**
     * @brief 显示文本对象消息，重写自 Player。
     */
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;

    // vIndex: 203
    /**
     * @brief 显示文本对象的私聊消息，重写自 Player。
     */
    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& textObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    ) /*override*/;

    // vIndex: 202
    /**
     * @brief 显示文本对象的私聊消息（重载版本），重写自 Player。
     */
    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    ) /*override*/;

    // vIndex: 204
    /**
     * @brief 显示私聊消息，重写自 Player。
     */
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;

    // vIndex: 195
    /**
     * @brief 打开交易界面，重写自 Player。
     */
    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen) /*override*/;

    // vIndex: 193
    /**
     * @brief 打开作品集，重写自 Player。
     */
    virtual void openPortfolio() /*override*/;

    // vIndex: 197
    /**
     * @brief 打开NPC交互界面，重写自 Player。
     */
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;

    // vIndex: 198
    /**
     * @brief 打开物品栏，重写自 Player。
     */
    virtual void openInventory() /*override*/;

    // vIndex: 194
    /**
     * @brief 打开书本，重写自 Player。
     */
    virtual void openBook(int, bool, int, ::BlockActor* lectern) /*override*/;

    // vIndex: 208
    /**
     * @brief 打开告示牌，重写自 Player。
     */
    virtual void openSign(::BlockPos const& position, bool isFrontSide) /*override*/;

    // vIndex: 187
    /**
     * @brief 检查移动统计数据，重写自 Player。
     */
    virtual void checkMovementStats(::Vec3 const& d) /*override*/;

    // vIndex: 188
    /**
     * @brief 获取当前结构特征，重写自 Player。
     */
    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    // vIndex: 69
    /**
     * @brief 处理实体事件，重写自 Player。
     */
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 220
    /**
     * @brief 设置容器数据，重写自 Player。
     */
    virtual void setContainerData(::IContainerManager& menu, int id, int value) /*override*/;

    // vIndex: 221
    /**
     * @brief 槽位变化时调用，重写自 Player。
     */
    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    ) /*override*/;

    // vIndex: 222
    /**
     * @brief 刷新容器，重写自 Player。
     */
    virtual void refreshContainer(::IContainerManager& menu) /*override*/;

    // vIndex: 206
    /**
     * @brief 停止在床上睡觉，重写自 Player。
     */
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    // vIndex: 72
    /**
     * @brief 设置盔甲，重写自 Player。
     */
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot const slot, ::ItemStack const& item) /*override*/;

    // vIndex: 79
    /**
     * @brief 设置副手物品，重写自 Player。
     */
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 164
    /**
     * @brief 死亡时清除带有消失诅咒的物品，重写自 Player。
     */
    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    // vIndex: 88
    /**
     * @brief 检查是否能用传送门切换维度，重写自 Player。
     */
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 90
    /**
     * @brief 切换维度，重写自 Player。
     */
    virtual void changeDimension(::DimensionType toId) /*override*/;

    // vIndex: 181
    /**
     * @brief 使用游戏内学分切换维度，重写自 Player。
     */
    virtual void changeDimensionWithCredits(::DimensionType dimension) /*override*/;

    // vIndex: 213
    /**
     * @brief 设置玩家的游戏模式，重写自 Player。
     */
    virtual void setPlayerGameType(::GameType gameType) /*override*/;

    // vIndex: 177
    /**
     * @brief 准备区域，重写自 Player。
     */
    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    // vIndex: 224
    /**
     * @brief 检查一个Actor是否与此玩家相关，重写自 Player。
     */
    virtual bool isActorRelevant(::Actor const& actor) /*override*/;

    // vIndex: 91
    /**
     * @brief 获取正在控制此玩家的玩家ID（通常是自己），重写自 Actor。
     */
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 178
    /**
     * @brief 销毁区域，重写自 Player。
     */
    virtual void destroyRegion() /*override*/;

    // vIndex: 226
    /**
     * @brief 当区域被暂停时调用，重写自 Player。
     */
    virtual void onSuspension() /*override*/;

    // vIndex: 227
    /**
     * @brief 当链接的槽位改变时调用，重写自 Player。
     */
    virtual void onLinkedSlotsChanged() /*override*/;

    // vIndex: 225
    /**
     * @brief 检查是否是教师，重写自 Player。
     */
    virtual bool isTeacher() const /*override*/;

    // vIndex: 210
    /**
     * @brief 检查是否正在加载，重写自 Player。
     */
    virtual bool isLoading() const /*override*/;

    // vIndex: 82
    /**
     * @brief 从NBT加载数据，重写自 Mob。
     */
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 211
    /**
     * @brief 检查玩家是否已初始化，重写自 Player。
     */
    virtual bool isPlayerInitialized() const /*override*/;

    // vIndex: 190
    /**
     * @brief 重生，重写自 Player。
     */
    virtual void respawn() /*override*/;

    // vIndex: 231
    /**
     * @brief 获取玩家事件协调器，重写自 Player。
     */
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    // vIndex: 241
    /**
     * @brief 销毁编辑器玩家，重写自 Player。
     */
    virtual void destroyEditorPlayer() /*override*/;

    // vIndex: 240
    /**
     * @brief 获取编辑器玩家接口，重写自 Player。
     */
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    // vIndex: 236
    /**
     * @brief 获取最大区块构建半径，重写自 Player。
     */
    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    // vIndex: 242
    /**
     * @brief 获取生成区块的限制。
     * @return 返回限制数量。
     */
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 243
    /**
     * @brief 更新区块发布者视图。
     * @param position 玩家位置。
     * @param minDistance 最小距离。
     */
    virtual void _updateChunkPublisherView(::Vec3 const& position, float minDistance);

    // vIndex: 6
    /**
     * @brief 服务端初始化物品堆栈ID，重写自 Player。
     */
    virtual void _serverInitItemStackIds() /*override*/;
    // NOLINTEND

      
public:
    // member functions
    // NOLINTBEGIN
    /**
     * @brief ServerPlayer 的构造函数。
     */
    MCAPI ServerPlayer(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        bool                                               isHostingPlayer,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             onPlayerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               playFabId,
        ::std::string const&                               deviceId,
        ::PlayerAuthenticationType                         authType,
        ::PlayerAuthenticationInfo const&                  authInfo,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext,
        ::PlatformType                                     platformType,
        ::InputMode                                        inputMode,
        ::SyncedClientOptionsComponent                     clientOptions
    );

    /**
     * @brief 【内部函数】检查常加载区域是否已加载完成。
     * @return 如果已加载，返回true。
     */
    MCAPI bool _checkForLoadedTickingAreas() const;

    /**
     * @brief 【内部函数】记录一个崩溃转储日志事件。
     */
    MCAPI void _logCDEvent(
        ::CrashDumpLogStringID option1,
        ::CrashDumpLogStringID option2,
        ::CrashDumpLogStringID option3,
        ::CrashDumpLogStringID option4
    );

    /**
     * @brief 【内部函数】移除附近的实体（从同步列表中）。
     */
    MCAPI void _removeNearbyEntities();

    /**
     * @brief 【内部函数】设置容器管理器模型。
     */
    MCAPI void _setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> menu);

    /**
     * @brief 【内部函数】更新附近的Actor列表，用于同步。
     */
    MCAPI void _updateNearbyActors();

    /**
     * @brief 将一个Actor添加到复制列表中，以便同步给客户端。
     * @param actor 要添加的Actor。
     * @param autonomous 是否是自主的。
     */
    MCAPI void addActorToReplicationList(::gsl::not_null<::Actor*> actor, bool autonomous);

    /**
     * @brief 创建编辑器玩家。
     * @param editorManager 编辑器管理器。
     */
    MCAPI void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);

    /**
     * @brief 断开此玩家的连接。
     */
    MCAPI void disconnect();

    /**
     * @brief 执行删除容器管理器的操作。
     * @param forceDisconnect 是否强制断开连接。
     */
    MCAPI void doDeleteContainerManager(bool forceDisconnect);

    /**
     * @brief 执行玩家的初始生成过程。
     */
    MCAPI void doInitialSpawn();

    /**
     * @brief 在服务器端处理Actor拾取请求（类似鼠标中键）。
     * @param target 目标Actor。
     * @param withData 是否附带数据。
     * @param isActorAgentAndEduMode 目标Actor是否是Agent且在教育模式下。
     */
    MCAPI void handleActorPickRequestOnServer(::Actor& target, bool withData, bool isActorAgentAndEduMode);

    /**
     * @brief 在服务器端处理方块拾取请求。
     * @param position 方块位置。
     * @param withData 是否附带数据。
     */
    MCAPI void handleBlockPickRequestOnServer(::BlockPos const& position, bool withData);

    /**
     * @brief 隐藏所有HUD元素，除了指定的那些。
     * @param hudElements 要保留显示的HUD元素列表。
     */
    MCAPI void hideAllExcept(::std::optional<::std::vector<::HudElement>> const& hudElements);

    /**
     * @brief 检查一个方块位置是否在玩家的拾取范围内。
     * @param pos 方块位置。
     * @return 如果在范围内，返回true。
     */
    MCAPI bool isInPickRangeOf(::BlockPos const& pos) const;

    /**
     * @brief 打开一个非托管的容器（通常用于插件）。
     * @return 返回新容器的ID。
     */
    MCAPI ::ContainerID openUnmanagedContainer();

    /**
     * @brief 在实体复制（同步）之后执行的tick。
     * @param currentTick 当前的游戏刻。
     */
    MCAPI void postReplicationTick(::Tick const& currentTick);

    /**
     * @brief 在实体复制（同步）之前执行的tick。
     * @param currentTick 当前的游戏刻。
     */
    MCAPI void preReplicationTick(::Tick const& currentTick);

    /**
     * @brief 选中一个物品（通常是通过创造模式的物品栏）。
     * @param item 要选中的物品。
     * @return 如果成功，返回true。
     */
    MCAPI bool selectItem(::ItemStack const& item);

    /**
     * @brief 设置客户端的区块加载半径。
     * @param requestedRadius 客户端请求的半径。
     * @param clientMaxChunkRadius 客户端支持的最大半径。
     */
    MCAPI void setClientChunkRadius(uint requestedRadius, uchar clientMaxChunkRadius);

    /**
     * @brief 设置HUD元素的可见性状态。
     * @param hudVisibility 可见性设置。
     * @param hudElements 受影响的HUD元素列表。
     */
    MCAPI void setHudVisibilityState(
        ::HudVisibility                                     hudVisibility,
        ::std::optional<::std::vector<::HudElement>> const& hudElements
    );
    // NOLINTEND

    

public:
    // static functions
    // NOLINTBEGIN
    /**
     * @brief [静态] 初始化玩家tick相关的组件。
     * @param entity 实体上下文。
     * @param settings 玩家移动设置。
     */
    MCAPI static void initializePlayerTickComponents(::EntityContext& entity, ::PlayerMovementSettings const& settings);

    /**
     * @brief [静态] 尝试从实体上下文获取ServerPlayer指针。
     * @param entity 实体上下文。
     * @param includeRemoved 是否包含已移除的实体。
     * @return 如果实体是服务器玩家，返回ServerPlayer指针；否则返回nullptr。
     */
    MCAPI static ::ServerPlayer* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        bool                                               isHostingPlayer,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             onPlayerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               playFabId,
        ::std::string const&                               deviceId,
        ::PlayerAuthenticationType                         authType,
        ::PlayerAuthenticationInfo const&                  authInfo,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext,
        ::PlatformType                                     platformType,
        ::InputMode                                        inputMode,
        ::SyncedClientOptionsComponent                     clientOptions
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

    MCAPI void $aiStep();

    MCAPI void $normalTick();

    MCAPI void $knockback(
        ::Actor* source,
        int      dmg,
        float    xd,
        float    zd,
        float    horizontalPower,
        float    verticalPower,
        float    heightCap
    );

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $moveView();

    MCAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    MCFOLD void $frameUpdate(::FrameUpdateContextBase&);

    MCAPI bool $isValidTarget(::Actor* attacker) const;

    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots);

    MCAPI void $sendArmorDamage(::std::bitset<5> const damagedSlots);

    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);

    MCAPI void $sendInventory(bool shouldSelectSlot);

    MCAPI void $sendInventoryTransaction(::InventoryTransaction const& transaction) const;

    MCAPI void $sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const;

    MCAPI void $sendNetworkPacket(::Packet& packet) const;

    MCAPI void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    MCAPI void $displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& textObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    MCAPI void $displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCAPI void $displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    MCAPI void $openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);

    MCFOLD void $openPortfolio();

    MCFOLD void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    MCAPI void $openInventory();

    MCAPI void $openBook(int, bool, int, ::BlockActor* lectern);

    MCAPI void $openSign(::BlockPos const& position, bool isFrontSide);

    MCAPI void $checkMovementStats(::Vec3 const& d);

    MCAPI ::HashedString $getCurrentStructureFeature() const;

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI void $setContainerData(::IContainerManager& menu, int id, int value);

    MCAPI void $slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    );

    MCAPI void $refreshContainer(::IContainerManager& menu);

    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI void $clearVanishEnchantedItemsOnDeath();

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void $changeDimension(::DimensionType toId);

    MCAPI void $changeDimensionWithCredits(::DimensionType dimension);

    MCAPI void $setPlayerGameType(::GameType gameType);

    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCAPI bool $isActorRelevant(::Actor const& actor);

    MCAPI ::ActorUniqueID $getControllingPlayer() const;

    MCAPI void $destroyRegion();

    MCAPI void $onSuspension();

    MCAPI void $onLinkedSlotsChanged();

    MCAPI bool $isTeacher() const;

    MCAPI bool $isLoading() const;

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $isPlayerInitialized() const;

    MCAPI void $respawn();

    MCAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();

    MCAPI void $destroyEditorPlayer();

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getEditorPlayer() const;

    MCAPI uchar $getMaxChunkBuildRadius() const;

    MCAPI int $_getSpawnChunkLimit() const;

    MCAPI void $_updateChunkPublisherView(::Vec3 const& position, float minDistance);

    MCAPI void $_serverInitItemStackIds();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

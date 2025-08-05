#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/util/VariantParameterList.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionPtr.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorTerrainInterlockData.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/BuiltInActorComponents.h"
#include "mc/world/actor/SpawnRuleEnum.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActionEvent;
class ActionQueue;
class ActorDamageSource;
class ActorDefinitionDescriptor;
class ActorDefinitionDiffList;
class ActorDefinitionGroup;
class ActorInteraction;
class ActorRuntimeID;
class AnimationComponent;
class Attribute;
class AttributeInstance;
class BaseAttributeMap;
class Block;
class BlockPos;
class BlockSource;
class ChangeDimensionPacket;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class DynamicProperties;
class EntityRegistry;
class GameEvent;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ILevel;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class ListTag;
class LootTable;
class MerchantRecipeList;
class Mob;
class MobEffect;
class MobEffectInstance;
class Options;
class Packet;
class Player;
class Random;
class RenderParams;
class RideableComponent;
class RopeSystem;
class SpatialActorNetworkData;
class StrictEntityContext;
class UpdateEquipPacket;
class Vec2;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct DistanceSortedActor;
struct EquipmentTable;
struct MutableAttributeWithContext;
namespace Bedrock::Safety { class RedactableString; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

class Level;

class Actor {
public:
    // Actor inner types define
    using EntityBlockCollisionCallback =
        ::std::function<void(::BlockSource&, ::Block const&, ::BlockPos const&, ::Actor&)>;

public:
    /**
     * @brief 获取此Actor的实体上下文（EntityContext）。
     * @return 返回对实体上下文的引用。
     */
    LLNDAPI class EntityContext&       getEntityContext();
    /**
     * @brief 获取此Actor的实体上下文（EntityContext）（const版本）。
     * @return 返回对const实体上下文的引用。
     */
    LLNDAPI class EntityContext const& getEntityContext() const;

    /**
     * @brief 刷新Actor。这通常会重新加载组件和属性。
     */
    LLAPI void refresh();

    /**
     * @brief 克隆此Actor。
     * @param pos 新Actor的生成位置。
     * @param dimId 新Actor生成的维度ID。如果为std::nullopt，则在当前维度生成。
     * @return 返回一个指向新创建Actor的可选引用（optional_ref）。如果克隆失败，则为空。
     */
    LLAPI optional_ref<Actor> clone(Vec3 const& pos, std::optional<DimensionType> dimId = std::nullopt) const;

    /**
     * @brief 获取Actor的类型名称。
     * @return 返回Actor的类型名称字符串，例如 "minecraft:creeper"。
     */
    LLNDAPI std::string const& getTypeName() const;

    /**
     * @brief 获取Actor脚部中心的位置。
     * @return 返回一个Vec3，表示Actor脚部中心的世界坐标。
     */
    LLNDAPI class Vec3 getFeetPos() const;

    /**
     * @brief 获取Actor头部中心的位置。
     * @return 返回一个Vec3，表示Actor头部中心的世界坐标。
     */
    LLNDAPI class Vec3 getHeadPos() const;

    /**
     * @brief 获取Actor脚部所在的方块坐标。
     * @return 返回一个BlockPos，表示Actor脚踩的方块坐标。
     */
    LLNDAPI class BlockPos getFeetBlockPos() const;



    /**
     * @brief 检查此Actor是否为模拟玩家（Simulated Player）。
     * @return 如果是模拟玩家，返回true；否则返回false。
     */
    LLNDAPI bool isSimulatedPlayer() const;

    /**
     * @brief 检查Actor当前是否在地面上。
     * @return 如果在地面上，返回true；否则返回false。
     */
    LLNDAPI bool isOnGround() const;

    /**
     * @brief 设置Actor着火。
     * @param time 着火的持续时间（以秒为单位）。
     * @param isEffect 是否由效果（如火焰附加附魔）引起。默认为true。
     */
    LLAPI void setOnFire(int time, bool isEffect = true);
    /**
     * @brief 熄灭Actor身上的火。
     */
    LLAPI void stopFire();

    /**
     * @brief 获取Actor的当前速度向量。
     * @return 返回一个Vec3，表示Actor在X, Y, Z轴上的速度。
     */
    LLNDAPI Vec3  getVelocity() const;
    /**
     * @brief 获取Actor每秒移动的距离（速度大小）。
     * @return 返回一个浮点数，表示速度向量的长度。
     */
    LLNDAPI float getPosDeltaPerSecLength() const;

    /**
     * @brief 通过指定原因对Actor造成伤害。
     * @param damage 要造成的伤害值。
     * @param cause 伤害的原因。默认为 ActorDamageCause::Override。
     * @param attacker 造成伤害的攻击者。默认为空。
     * @return 如果伤害成功应用，返回true；否则返回false。
     */
    LLAPI bool hurtByCause(
        float                                   damage,
        ::SharedTypes::Legacy::ActorDamageCause cause    = ::SharedTypes::Legacy::ActorDamageCause::Override,
        optional_ref<Actor>                     attacker = std::nullopt
    );

    /**
     * @brief 从Actor的视角发射一条射线，检测碰撞。
     * @param tMax 射线的最大检测距离。默认为5.5格。
     * @param includeActor 是否检测与其他Actor的碰撞。默认为true。
     * @param includeBlock 是否检测与方块的碰撞。默认为true。
     * @param blockCheckFunction 一个自定义函数，用于过滤哪些方块可以被碰撞。
     * @return 返回HitResult对象，包含碰撞的详细信息。
     */
    LLNDAPI class HitResult traceRay(
        float                                                                          tMax         = 5.5f,
        bool                                                                           includeActor = true,
        bool                                                                           includeBlock = true,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& blockCheckFunction =
            [](auto&&...) -> bool { return true; }
    ) const;

    /**
     * @brief 将Actor传送到指定位置、维度和朝向。
     * @param pos 目标位置的世界坐标。
     * @param dimId 目标维度的ID。
     * @param rotation 目标朝向（俯仰角和偏航角）。
     */
    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId, class Vec2 const& rotation);
    /**
     * @brief 将Actor传送到指定位置和维度，保持当前朝向。
     * @param pos 目标位置的世界坐标。
     * @param dimId 目标维度的ID。
     */
    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId);

    /**
     * @brief 设置Actor的名称标签。
     * @param name 新的名称。
     */
    LLAPI void setName(std::string const& name);

    /**
     * @brief 解析并计算一个Molang表达式的值。
     * @param expression 要计算的Molang字符串。
     * @return 返回表达式的计算结果（浮点数）。
     */
    LLNDAPI float evalMolang(std::string const& expression);

    /**
     * @brief 获取Actor的碰撞箱（AABB - Axis-Aligned Bounding Box）。
     * @return 返回对AABB对象的const引用。
     */
    LLNDAPI const AABB& getAABB() const;

    /**
     * @brief 尝试从一个实体上下文（EntityContext）获取Actor指针。
     * @param entity 实体上下文。
     * @param includeRemoved 是否包含已标记为移除的Actor。
     * @return 如果成功找到，返回Actor指针；否则返回nullptr。
     */
    LLAPI static ::Actor* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

    /**
     * @brief 获取Actor所在的Level（世界）对象。
     * @return 返回对Level对象的引用。
     */
    [[nodiscard]] Level& getLevel() const { return *reinterpret_cast<Level*>(mLevel); }

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::EntityContext>                               mEntityContext; // 实体上下文，管理实体在ECS中的状态
    ::ll::TypedStorage<8, 72, ::VariantParameterList>                        mInitParams; // 初始化时使用的参数列表
    ::ll::TypedStorage<8, 32, ::std::string>                                 mCustomInitEventName; // 自定义初始化事件的名称
    ::ll::TypedStorage<1, 1, ::ActorInitializationMethod>                    mInitMethod; // Actor的初始化方法
    ::ll::TypedStorage<1, 1, bool>                                           mForceInitMethodToSpawnOnReload; // 重载时是否强制使用“生成”的初始化方法
    ::ll::TypedStorage<1, 1, bool>                                           mAdded; // 标记此Actor是否已添加到世界中
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup*>                        mDefinitions; // 指向Actor定义组的指针，包含行为、组件等信息
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDescriptor>> mCurrentDescription; // 当前Actor的描述符
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RopeSystem>>               mLeashRopeSystem; // 拴绳系统，当Actor被拴住时非空
    ::ll::TypedStorage<8, 32, ::std::string>                                 mAlias; // Actor的别名
    ::ll::TypedStorage<4, 68, ::std::optional<::glm::mat4x4>>                mPreviousRenderTransform; // 上一帧的渲染变换矩阵，用于插值
    ::ll::TypedStorage<4, 4, int>                                            mLastHurtByPlayerTime; // 最后一次被玩家伤害的时间
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::std::vector<::std::vector<::glm::mat4x4>>>>
                                                                           mPreviousBoneMatrices; // 上一帧的骨骼矩阵，用于动画平滑
    ::ll::TypedStorage<8, 48, ::SynchedActorDataEntityWrapper>             mEntityData; // 同步的Actor数据，用于在客户端和服务器之间同步
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpatialActorNetworkData>> mNetworkData; // 空间化的Actor网络数据
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mSentDelta; // 已发送给客户端的位置增量
    ::ll::TypedStorage<4, 4, float>                                        mScale; // Actor的当前缩放比例
    ::ll::TypedStorage<4, 4, float>                                        mScalePrev; // Actor上一帧的缩放比例
    ::ll::TypedStorage<1, 1, bool>                                         mIgnoreLighting; // 是否忽略光照计算
    ::ll::TypedStorage<1, 1, bool>                                         mFilterLighting; // 是否过滤光照（影响渲染）
    ::ll::TypedStorage<4, 4, float>                                        mStepSoundVolume; // 脚步声音量
    ::ll::TypedStorage<4, 4, float>                                        mStepSoundPitch; // 脚步声音调
    ::ll::TypedStorage<8, 8, ::AABB*>                                      mLastHitBB; // 最后一次被击中的包围盒
    ::ll::TypedStorage<8, 8, uint64>                                       mNameTagHash; // 名称标签的哈希值
    ::ll::TypedStorage<4, 4, float>                                        mShadowOffset; // 阴影的偏移量
    ::ll::TypedStorage<4, 4, float>                                        mPushthrough; // 实体间的推动力穿透值
    ::ll::TypedStorage<4, 4, int>                                          mTickCount; // Actor存活的游戏刻数
    ::ll::TypedStorage<4, 4, int>                                          mInvulnerableTime; // 无敌时间的剩余刻数
    ::ll::TypedStorage<4, 4, int>                                          mLastHealth; // 上一次记录的生命值
    ::ll::TypedStorage<1, 1, bool>                                         mHurtMarked; // 是否标记为已受伤
    ::ll::TypedStorage<1, 1, bool>                                         mWasHurtLastFrame; // 上一帧是否受到了伤害
    ::ll::TypedStorage<1, 1, bool>                                         mInvulnerable; // 当前是否处于无敌状态
    ::ll::TypedStorage<4, 4, int>                                          mFlameTexFrameIndex; // 着火时火焰纹理的帧索引
    ::ll::TypedStorage<4, 4, float>                                        mFlameFrameIncrementTime; // 火焰动画帧的增量时间
    ::ll::TypedStorage<1, 1, bool>                                         mAlwaysFireImmune; // 是否永久免疫火焰伤害
    ::ll::TypedStorage<1, 1, bool>                                         mInheritRotationWhenRiding; // 骑乘时是否继承载具的旋转
    ::ll::TypedStorage<1, 1, bool>                                         mForcedLoading; // 是否被强制加载（即使区块卸载也不移除）
    ::ll::TypedStorage<1, 1, bool>                                         mForceSendMotionPacket; // 是否强制发送移动数据包
    ::ll::TypedStorage<1, 1, bool>                                         mHighlightedThisFrame; // 在当前帧是否被高亮显示
    ::ll::TypedStorage<1, 1, bool>                                         mInitialized; // Actor是否已完成初始化
    ::ll::TypedStorage<1, 1, bool>                                         mProcessedOnChunkDiscard; // 在区块被丢弃时是否已被处理
    ::ll::TypedStorage<4, 4, float>                                        mSoundVolume; // Actor发出的声音音量
    ::ll::TypedStorage<4, 4, int>                                          mShakeTime; // 晃动时间（例如受击时）
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLegacyUniqueID; // 旧版的Actor唯一ID
    ::ll::TypedStorage<8, 16, ::WeakRef<::Dimension>>                      mDimension; // Actor所在的维度
    ::ll::TypedStorage<8, 8, ::ILevel*>                                    mLevel; // Actor所在的Level（世界）
    ::ll::TypedStorage<8, 48, ::HashedString>                              mActorRendererId; // Actor渲染器的ID
    ::ll::TypedStorage<4, 4, ::ActorCategory>                              mCategories; // Actor所属的类别（位掩码）
    ::ll::TypedStorage<8, 32, ::BuiltInActorComponents>                    mBuiltInComponents; // 内置的Actor组件
    ::ll::TypedStorage<8, 48, ::HashedString> mActorRendererIdThatAnimationComponentWasInitializedWith; // 初始化动画组件时使用的渲染器ID
    ::ll::TypedStorage<1, 1, bool>            mChanged; // 标记Actor状态是否已改变
    ::ll::TypedStorage<1, 1, bool>            mRemoved; // 标记Actor是否已被移除
    ::ll::TypedStorage<1, 1, bool>            mMovedToLimbo; // 标记Actor是否已移动到“Limbo”状态（待处理）
    ::ll::TypedStorage<1, 1, bool>            mMovedToUnloadedChunk; // 标记Actor是否已移动到未加载的区块
    ::ll::TypedStorage<1, 1, bool>            mBlocksBuilding; // Actor是否阻挡玩家建造
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>     mAnimationComponent; // 主要的动画组件
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>     mUIAnimationComponent; // 用于UI显示的动画组件
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mTargetId; // 当前攻击目标的唯一ID
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mInLovePartner; // 恋爱（繁殖）对象的唯一ID
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>             mPersistingTradeOffers; // 持久的交易配方（用于村民）
    ::ll::TypedStorage<4, 4, int>                                          mPersistingTradeRiches; // 持久的交易财富值
    ::ll::TypedStorage<1, 1, bool>                                         mPersistingTrade; // 是否在进行持久交易
    ::ll::TypedStorage<1, 1, bool>                                         mEffectsDirty; // 效果列表是否需要同步或更新
    ::ll::TypedStorage<1, 1, bool>                                         mLootDropped; // 死亡战利品是否已掉落
    ::ll::TypedStorage<1, 1, bool>                                         mLoadedFromNBTThisFrame; // 在当前帧是否从NBT数据加载
    ::ll::TypedStorage<4, 16, ::mce::Color>                                mHurtColor; // 受伤时叠加的颜色
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDiffList>> mDefinitionList; // Actor定义差异列表，用于热重载
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>             mLoadedActorPropertyTag; // 从NBT加载的Actor属性标签
    ::ll::TypedStorage<8, 16, ::ActorDefinitionPtr>                        mActorDefinitionPtr; // 指向Actor定义的智能指针
    ::ll::TypedStorage<8, 32, ::std::string>                               mFilteredNameTag; // 经过过滤（如敏感词）的名称标签
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>                 mTerrainInterlockData; // Actor与地形的交互数据
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtMobId; // 最后一次伤害此Actor的生物的ID
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtByMobId; // 最后一次被哪个生物伤害的ID
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtByPlayerId; // 最后一次被哪个玩家伤害的ID
    ::ll::TypedStorage<8, 8, uint64>                                       mLastHurtTimestamp; // 最后一次受伤的时间戳
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>      mLastHurtCause; // 最后一次受伤的原因
    ::ll::TypedStorage<4, 4, float>                                        mLastHurt; // 最后一次受到的伤害值
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtMobTimestamp; // 最后一次伤害生物的时间戳
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtByMobTime; // 最后一次被生物伤害的时间
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtByMobTimestamp; // 最后一次被生物伤害的时间戳
    ::ll::TypedStorage<1, 1, bool>                                         mIsPredictableProjectile; // 是否是可预测的投掷物
    ::ll::TypedStorage<1, 1, bool>                                         mIsRenderingInUI; // 是否正在UI中渲染（如物品栏中的模型）
    ::ll::TypedStorage<1, 1, bool>                                         mUpdateEffects; // 是否需要更新药水效果
    ::ll::TypedStorage<1, 1, bool>                                         mCanPickupItems; // 是否可以拾取地上的物品
    ::ll::TypedStorage<1, 1, bool>                                         mHasSetCanPickupItems; // 是否已经设置过`mCanPickupItems`
    ::ll::TypedStorage<1, 1, bool>                                         mChainedDamageEffects; // 是否具有连锁伤害效果（如穿透箭）
    ::ll::TypedStorage<4, 4, int>                                          mAffectedByWaterBottleTicksToEffect; // 被水瓶影响到生效的剩余刻数
    ::ll::TypedStorage<4, 4, ::SpawnRuleEnum>                              mSpawnRulesEnum; // 生成规则的枚举
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActionQueue>>             mActionQueue; // 动作队列，用于存储和执行Actor的动作
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>                         mMolangVariables; // Molang变量表，用于动画和行为
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mFishingHookID; // 鱼钩的唯一ID（如果此Actor是鱼钩）
    // NOLINTEND

public:
    // prevent constructor by default
    Actor();

public:
    // virtual functions
    // NOLINTBEGIN
    /**
     * @brief 检查Actor是否拥有指定名称的组件。
     * @param name 组件的哈希字符串名称。
     * @return 如果拥有该组件，返回true；否则返回false。
     */
    // vIndex: 0
    virtual bool hasComponent(::HashedString const& name) const;

    /**
     * @brief 当Actor掉出世界（例如掉入虚空）时调用。
     */
    // vIndex: 1
    virtual void outOfWorld();

    /**
     * @brief 从硬编码（代码中定义）的属性重新加载Actor。
     * @param method 初始化的方法。
     * @param params 包含初始化数据的变体参数列表。
     */
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    /**
     * @brief 在客户端上从硬编码的属性重新加载Actor。
     * @param method 初始化的方法。
     */
    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    /**
     * @brief 初始化Actor的组件。
     * @param method 初始化的方法。
     * @param params 包含初始化数据的变体参数列表。
     */
    // vIndex: 4
    virtual void initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const&);

    /**
     * @brief 重新加载Actor的组件（通常是从JSON定义文件）。
     * @param method 初始化的方法。
     * @param params 包含初始化数据的变体参数列表。
     */
    // vIndex: 5
    virtual void reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    /**
     * @brief [服务端] 初始化物品堆栈的ID。
     */
    // vIndex: 6
    virtual void _serverInitItemStackIds();

    /**
     * @brief 执行Actor生成后的初始移动。
     */
    // vIndex: 7
    virtual void _doInitialMove();

    /**
     * @brief Actor的析构函数。
     */
    // vIndex: 8
    virtual ~Actor();

    /**
     * @brief 根据重置规则重置用户（玩家）的位置。
     * @param rule 重置规则，例如死亡后。
     */
    // vIndex: 9
    virtual void resetUserPos(::ActorResetRule);

    /**
     * @brief 获取此Actor的所有者的实体类型。
     * @return 返回所有者的ActorType。
     */
    // vIndex: 10
    virtual ::ActorType getOwnerEntityType();

    /**
     * @brief 将此Actor从世界中移除。
     */
    // vIndex: 11
    virtual void remove();

    /**
     * @brief 获取Actor发射投掷物的位置。
     * @return 返回一个Vec3，表示发射点坐标。
     */
    // vIndex: 12
    virtual ::Vec3 getFiringPos() const;

    /**
     * @brief 获取插值计算后的身体旋转角度，用于平滑渲染。
     * @param a 插值系数（通常是部分tick）。
     * @return 返回插值后的身体旋转角度。
     */
    // vIndex: 13
    virtual float getInterpolatedBodyRot(float a = 0.0f) const;

    /**
     * @brief 获取插值计算后的头部旋转角度，用于平滑渲染。
     * @param a 插值系数。
     * @return 返回插值后的头部旋转角度。
     */
    // vIndex: 14
    virtual float getInterpolatedHeadRot(float = 0.0f) const;

    /**
     * @brief 获取插值计算后的身体偏航角，用于平滑渲染。
     * @param a 插值系数。
     * @return 返回插值后的身体偏航角。
     */
    // vIndex: 15
    virtual float getInterpolatedBodyYaw(float = 0.0f) const;

    /**
     * @brief 获取Actor的偏航角转动速度（度/秒）。
     * @return 返回每秒转动的度数。
     */
    // vIndex: 16
    virtual float getYawSpeedInDegreesPerSecond() const;

    /**
     * @brief 获取骑乘时插值计算后的偏移量，用于平滑渲染。
     * @param a 插值系数。
     * @param int const 未知参数。
     * @return 返回插值后的骑乘偏移位置。
     */
    // vIndex: 17
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    /**
     * @brief 检查Actor是否免疫火焰伤害。
     * @return 如果免疫，返回true。
     */
    // vIndex: 18
    virtual bool isFireImmune() const;

    /**
     * @brief 当此Actor的攻击被盾牌格挡时调用。
     * @param source 伤害来源。
     * @param blocker 使用盾牌格挡的Actor。
     */
    // vIndex: 19
    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    /**
     * @brief 检查此Actor的攻击是否能使盾牌失效。
     * @return 如果能，返回true。
     */
    // vIndex: 20
    virtual bool canDisableShield();

    /**
     * @brief 将Actor传送到指定位置。
     * @param pos 目标位置。
     * @param shouldStopRiding 是否应停止骑乘。
     * @param int 未知参数。
     * @param int 未知参数。
     * @param keepVelocity 是否保持传送前的速度。
     */
    // vIndex: 21
    virtual void teleportTo(::Vec3 const& pos, bool shouldStopRiding, int, int, bool keepVelocity);

    /**
     * @brief 对Actor的运动进行线性插值，用于平滑移动。
     * @param delta 运动增量。
     */
    // vIndex: 22
    virtual void lerpMotion(::Vec3 const& delta);

    /**
     * @brief 尝试创建一个用于将此Actor添加到客户端的"AddActor"网络数据包。
     * @return 如果成功，返回一个包含数据包的unique_ptr；否则返回nullptr。
     */
    // vIndex: 23
    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket();

    /**
     * @brief Actor的常规tick函数，每游戏刻调用一次。
     */
    // vIndex: 24
    virtual void normalTick();

    /**
     * @brief Actor的基础tick函数，在`normalTick`之前调用。
     */
    // vIndex: 25
    virtual void baseTick();

    /**
     * @brief 作为乘客时的tick函数。
     */
    // vIndex: 26
    virtual void passengerTick();

    /**
     * @brief 使此Actor开始骑乘另一个Actor。
     * @param vehicle 要骑乘的载具Actor。
     * @param forceRiding 是否强制骑乘。
     * @return 如果成功开始骑乘，返回true。
     */
    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding);

    /**
     * @brief 将另一个Actor添加为自己的乘客。
     * @param passenger 要添加的乘客Actor。
     */
    // vIndex: 28
    virtual void addPassenger(::Actor& passenger);

    /**
     * @brief 获取离开载具的提示文本（例如“按下潜行键离开”）。
     * @param str 未知字符串参数。
     * @param mode 输入模式。
     * @param interactionModel 新的交互模型。
     * @return 返回提示文本。
     */
    // vIndex: 29
    virtual ::std::string getExitTip(::std::string const&, ::InputMode, ::NewInteractionModel) const;

    /**
     * @brief 获取实体的本地化名称字符串键（例如 "entity.creeper.name"）。
     * @return 返回本地化键。
     */
    // vIndex: 30
    virtual ::std::string getEntityLocNameString() const;

    /**
     * @brief 检查Actor是否隐身。
     * @return 如果隐身，返回true。
     */
    // vIndex: 31
    virtual bool isInvisible() const;

    /**
     * @brief 检查Actor是否可以显示名称标签。
     * @return 如果可以，返回true。
     */
    // vIndex: 32
    virtual bool canShowNameTag() const;

    /**
     * @brief 获取格式化后的名称标签（可能包含颜色代码等）。
     * @return 返回格式化后的名称标签字符串。
     */
    // vIndex: 33
    virtual ::std::string getFormattedNameTag() const;

    /**
     * @brief 获取名称标签的文本颜色。
     * @return 返回mce::Color对象。
     */
    // vIndex: 34
    virtual ::mce::Color getNameTagTextColor() const;

    /**
     * @brief 获取Actor下方阴影的半径。
     * @return 返回阴影半径。
     */
    // vIndex: 35
    virtual float getShadowRadius() const;

    /**
     * @brief 获取Actor头部朝向的向量。
     * @param a 插值系数。
     * @return 返回一个单位向量，表示头部朝向。
     */
    // vIndex: 36
    virtual ::Vec3 getHeadLookVector(float a = 0.0f) const;

    /**
     * @brief 检查Actor在当前游戏状态下是否能与其他实体交互。
     * @return 如果可以，返回true。
     */
    // vIndex: 37
    virtual bool canInteractWithOtherEntitiesInGame() const;

    /**
     * @brief 获取Actor所在位置的光照亮度。
     * @param a 插值系数。
     * @param region 提供方块数据的区块源。
     * @return 返回亮度值。
     */
    // vIndex: 38
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const;

    /**
     * @brief 当玩家接触到此Actor时调用。
     * @param player 接触的玩家。
     */
    // vIndex: 39
    virtual void playerTouch(::Player&);

    /**
     * @brief 检查Actor是否不能移动。
     * @return 如果不能移动，返回true。
     */
    // vIndex: 40
    virtual bool isImmobile() const;

    /**
     * @brief 检查Actor是否为“沉默的观察者”（如命令方块矿车）。
     * @return 如果是，返回true。
     */
    // vIndex: 41
    virtual bool isSilentObserver() const;

    /**
     * @brief 检查Actor是否正在睡觉。
     * @return 如果正在睡觉，返回true。
     */
    // vIndex: 42
    virtual bool isSleeping() const;

    /**
     * @brief 设置Actor的睡眠状态。
     * @param value true为睡觉，false为醒来。
     */
    // vIndex: 43
    virtual void setSleeping(bool);

    /**
     * @brief 设置Actor的潜行状态。
     * @param value true为潜行，false为不潜行。
     */
    // vIndex: 44
    virtual void setSneaking(bool value);

    /**
     * @brief 检查Actor是否正在格挡（如使用盾牌）。
     * @return 如果正在格挡，返回true。
     */
    // vIndex: 45
    virtual bool isBlocking() const;

    /**
     * @brief 检查Actor是否能格挡某个特定的伤害来源。
     * @param source 伤害来源。
     * @return 如果能格挡，返回true。
     */
    // vIndex: 46
    virtual bool isDamageBlocked(::ActorDamageSource const&) const;

    /**
     * @brief 检查Actor是否存活。
     * @return 如果存活，返回true。
     */
    // vIndex: 47
    virtual bool isAlive() const;

    /**
     * @brief 检查Actor是否着火。
     * @return 如果着火，返回true。
     */
    // vIndex: 48
    virtual bool isOnFire() const;

    /**
     * @brief 检查Actor是否为地表生物。
     * @return 如果是，返回true。
     */
    // vIndex: 49
    virtual bool isSurfaceMob() const;

    /**
     * @brief 检查Actor是否可以被作为目标。
     * @return 如果可以，返回true。
     */
    // vIndex: 50
    virtual bool isTargetable() const;

    /**
     * @brief 设置此Actor的攻击目标。
     * @param entity 目标Actor。
     */
    // vIndex: 51
    virtual void setTarget(::Actor* entity);

    /**
     * @brief 检查另一个Actor是否是此Actor的有效目标。
     * @param entity 要检查的Actor。
     * @return 如果是有效目标，返回true。
     */
    // vIndex: 52
    virtual bool isValidTarget(::Actor*) const;

    /**
     * @brief 对另一个Actor发起攻击。
     * @param target 攻击目标。
     * @param cause 攻击造成的伤害类型。
     * @return 总是返回true（返回值可能已弃用）。
     */
    // vIndex: 53
    virtual bool attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);

    /**
     * @brief 对另一个Actor执行远程攻击。
     * @param target 攻击目标。
     * @param distanceFactor 距离因子，影响攻击效果。
     */
    // vIndex: 54
    virtual void performRangedAttack(::Actor& target, float);

    /**
     * @brief 设置此Actor的所有者。
     * @param ownerId 所有者的唯一ID。
     */
    // vIndex: 55
    virtual void setOwner(::ActorUniqueID const ownerId);

    /**
     * @brief 设置Actor的坐下状态。
     * @param value true为坐下，false为站立。
     */
    // vIndex: 56
    virtual void setSitting(bool value);

    /**
     * @brief 当Actor被驯服时调用。
     */
    // vIndex: 57
    virtual void onTame();

    /**
     * @brief 当驯服Actor失败时调用。
     */
    // vIndex: 58
    virtual void onFailedTame();

    /**
     * @brief 设置Actor的站立状态。
     * @param value true为站立。
     */
    // vIndex: 59
    virtual void setStanding(bool value);

    /**
     * @brief 检查Actor是否可以进行力量跳跃（如马）。
     * @return 如果可以，返回true。
     */
    // vIndex: 60
    virtual bool canPowerJump() const;

    /**
     * @brief 检查Actor是否带有附魔光效。
     * @return 如果有，返回true。
     */
    // vIndex: 61
    virtual bool isEnchanted() const;

    /**
     * @brief 播放Actor的环境音效。
     */
    // vIndex: 62
    virtual void playAmbientSound();

    /**
     * @brief 获取Actor的环境音效事件类型。
     * @return 返回LevelSoundEvent枚举值。
     */
    // vIndex: 63
    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;



    /**
     * @brief 检查Actor是否对某个特定的伤害来源免疫。
     * @param source 伤害来源。
     * @return 如果免疫，返回true。
     */
    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const;

    /**
     * @brief 获取由特定方块造成的伤害类型。
     * @param block 造成伤害的方块。
     * @return 返回ActorDamageCause。
     */
    // vIndex: 65
    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const&) const;

    /**
     * @brief 对Actor造成火焰伤害。
     * @param amount 伤害值。
     * @return 如果成功造成伤害，返回true。
     */
    // vIndex: 66
    virtual bool doFireHurt(int amount);

    /**
     * @brief 当Actor被闪电击中时调用。
     */
    // vIndex: 67
    virtual void onLightningHit();

    /**
     * @brief 当Actor被喂食时调用。
     * @param itemId 喂食的物品ID。
     */
    // vIndex: 68
    virtual void feed(int itemId);

    /**
     * @brief 处理来自服务端的实体事件（如动画、粒子效果等）。
     * @param eventId 事件ID。
     * @param data 事件相关的数据。
     */
    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    /**
     * @brief 获取Actor渲染器的ID。
     * @return 返回渲染器ID的哈希字符串。
     */
    // vIndex: 70
    virtual ::HashedString const& getActorRendererId() const;

    /**
     * @brief 使Actor消失（通常是自然消失，非死亡）。
     */
    // vIndex: 71
    virtual void despawn();

    /**
     * @brief 为Actor穿上指定槽位的盔甲。
     * @param slot 盔甲槽位。
     * @param item 要穿上的盔甲物品。
     */
    // vIndex: 72
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    /**
     * @brief 获取指定盔甲槽位中盔甲的材质类型。
     * @param slot 盔甲槽位。
     * @return 返回ArmorMaterialType。
     */
    // vIndex: 73
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    /**
     * @brief 获取指定盔甲槽位中盔甲的纹理索引。
     * @param slot 盔甲槽位。
     * @return 返回纹理索引。
     */
    // vIndex: 74
    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    /**
     * @brief 获取指定盔甲槽位中盔甲的颜色（用于皮革甲）。
     * @param slot 盔甲槽位。
     * @param layer 颜色层。
     * @return 返回颜色值的浮点数表示。
     */
    // vIndex: 75
    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;

    /**
     * @brief 设置指定装备槽位的物品。
     * @param slot 装备槽位。
     * @param item 要设置的物品。
     */
    // vIndex: 76
    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    /**
     * @brief 设置主手持有的物品。
     * @param item 要设置的物品。
     */
    // vIndex: 77
    virtual void setCarriedItem(::ItemStack const& item);

    /**
     * @brief 获取主手持有的物品。
     * @return 返回主手物品的const引用。
     */
    // vIndex: 78
    virtual ::ItemStack const& getCarriedItem() const;

    /**
     * @brief 设置副手持有的物品。
     * @param item 要设置的物品。
     */
    // vIndex: 79
    virtual void setOffhandSlot(::ItemStack const& item);

    /**
     * @brief 获取装备的图腾。
     * @return 如果装备了图腾，返回图腾物品的const引用。
     */
    // vIndex: 80
    virtual ::ItemStack const& getEquippedTotem() const;

    /**
     * @brief 消耗一个图腾来免除死亡。
     * @return 如果成功消耗图腾，返回true。
     */
    // vIndex: 81
    virtual bool consumeTotem();

    /**
     * @brief 从NBT数据（CompoundTag）中加载Actor。
     * @param tag 包含Actor数据的NBT标签。
     * @param dataLoadHelper 数据加载辅助工具。
     * @return 如果加载成功，返回true。
     */
    // vIndex: 82
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    /**
     * @brief 查询实体的渲染器ID。
     * @return 返回渲染器ID的哈希字符串。
     */
    // vIndex: 83
    virtual ::HashedString const& queryEntityRenderer() const;

    /**
     * @brief 获取源实体的唯一ID（例如，投掷药水的玩家）。
     * @return 返回源实体的ActorUniqueID。
     */
    // vIndex: 84
    virtual ::ActorUniqueID getSourceUniqueID() const;

    /**
     * @brief 检查Actor是否可以被冰冻（例如被细雪）。
     * @return 如果可以，返回true。
     */
    // vIndex: 85
    virtual bool canFreeze() const;

    /**
     * @brief 获取Actor在指定液体中的碰撞箱。
     * @param liquidType 液体材质类型。
     * @return 返回在液体中的AABB。
     */
    // vIndex: 86
    virtual ::AABB getLiquidAABB(::MaterialType const) const;

    /**
     * @brief 处理Actor在传送门方块内部的逻辑。
     * @param portalPos 传送门方块的位置。
     */
    // vIndex: 87
    virtual void handleInsidePortal(::BlockPos const& portalPos);

    /**
     * @brief 检查Actor是否可以使用传送门切换维度。
     * @return 如果可以，返回true。
     */
    // vIndex: 88
    virtual bool canChangeDimensionsUsingPortal() const;

    /**
     * @brief 将Actor切换到指定维度。
     * @param toId 目标维度的ID。
     */
    // vIndex: 90
    virtual void changeDimension(::DimensionType toId);

    /**
     * @brief 根据网络数据包切换Actor的维度。
     * @param packet 包含维度切换信息的包。
     */
    // vIndex: 89
    virtual void changeDimension(::ChangeDimensionPacket const&);

    /**
     * @brief 获取正在控制此Actor的玩家的唯一ID。
     * @return 返回玩家的ActorUniqueID。
     */
    // vIndex: 91
    virtual ::ActorUniqueID getControllingPlayer() const;

    /**
     * @brief 对Actor造成摔落伤害。
     * @param fallDistance 摔落的距离。
     * @param multiplier 伤害倍率。
     * @param source 伤害来源。
     * @return 造成的实际伤害值。
     */
    // vIndex: 92
    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    /**
     * @brief 当同步数据（SynchedData）更新时调用。
     * @param dataId 更新的数据项ID。
     */
    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId);

    /**
     * @brief 检查是否可以添加一个乘客。
     * @param passenger 待添加的乘客。
     * @return 如果可以添加，返回true。
     */
    // vIndex: 94
    virtual bool canAddPassenger(::Actor& passenger) const;

    /**
     * @brief 检查Actor是否可以拾取指定的物品。
     * @param item 待拾取的物品。
     * @return 如果可以拾取，返回true。
     */
    // vIndex: 95
    virtual bool canPickupItem(::ItemStack const&) const;

    /**
     * @brief 检查Actor是否可以被拉入载具（如船）。
     * @return 如果可以，返回true。
     */
    // vIndex: 96
    virtual bool canBePulledIntoVehicle() const;

    /**
     * @brief 检查Actor是否在商队中（如羊驼）。
     * @return 如果在商队中，返回true。
     */
    // vIndex: 97
    virtual bool inCaravan() const;

    /**
     * @brief 如果需要，发送移动数据包。
     */
    // vIndex: 98
    virtual void sendMotionPacketIfNeeded();

    /**
     * @brief 检查此实体是否可以被同步给新的客户端。
     * @return 如果可以，返回true。
     */
    // vIndex: 99
    virtual bool canSynchronizeNewEntity() const;

    /**
     * @brief 开始游泳状态。
     */
    // vIndex: 100
    virtual void startSwimming();

    /**
     * @brief 停止游泳状态。
     */
    // vIndex: 101
    virtual void stopSwimming();

    /**
     * @brief 构建调试信息字符串。
     * @param str 用于追加调试信息的字符串。
     */
    // vIndex: 102
    virtual void buildDebugInfo(::std::string&) const;

    /**
     * @brief 获取Actor的命令权限等级。
     * @return 返回CommandPermissionLevel。
     */
    // vIndex: 103
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    /**
     * @brief 获取Actor的死亡时间（死亡动画的持续时间）。
     * @return 返回死亡时间（ticks）。
     */
    // vIndex: 104
    virtual int getDeathTime() const;

    /**
     * @brief 检查Actor是否能被指定的药水效果影响。
     * @param id 药水效果的ID。
     * @return 如果能被影响，返回true。
     */
    // vIndex: 105
    virtual bool canBeAffected(uint id) const;

    /**
     * @brief 检查Actor是否能被带有特定效果的箭影响。
     * @param effect 效果实例。
     * @return 如果能被影响，返回true。
     */
    // vIndex: 106
    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    /**
     * @brief 当一个药水效果从此Actor上移除时调用。
     * @param effect 被移除的效果实例。
     */
    // vIndex: 107
    virtual void onEffectRemoved(::MobEffectInstance& effect);

    /**
     * @brief 检查Actor是否会阻碍生物生成和方块放置。
     * @return 如果会阻碍，返回true。
     */
    // vIndex: 108
    virtual bool canObstructSpawningAndBlockPlacement() const;

    /**
     * @brief 获取Actor的动画组件。
     * @return 返回对动画组件的引用。
     */
    // vIndex: 109
    virtual ::AnimationComponent& getAnimationComponent();

    /**
     * @brief 为玩家打开此Actor的容器组件（如果有）。
     * @param player 打开容器的玩家。
     */
    // vIndex: 110
    virtual void openContainerComponent(::Player& player);

    /**
     * @brief 使Actor执行挥臂动作。
     */
    // vIndex: 111
    virtual void swing();

    /**
     * @brief 使用一个物品。
     * @param item 要使用的物品。
     * @param itemUseMethod 使用物品的方式（例如，点击、长按）。
     * @param consumeItem 是否消耗该物品。
     */
    // vIndex: 112
    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    /**
     * @brief 获取用于调试显示的文本行。
     * @param outputInfo 用于存储调试文本的字符串向量。
     */
    // vIndex: 113
    virtual void getDebugText(::std::vector<::std::string>& outputInfo);

    /**
     * @brief 获取Actor在地图上作为标记时的旋转角度。
     * @return 返回旋转角度。
     */
    // vIndex: 114
    virtual float getMapDecorationRotation() const;

    /**
     * @brief 获取乘客相对于此载具的Y轴旋转角度。
     * @param passenger 乘客Actor。
     * @return 返回乘客的Y轴旋转。
     */
    // vIndex: 115
    virtual float getPassengerYRotation(::Actor const& passenger) const;

    /**
     * @brief 向Actor的物品栏添加一个物品。
     * @param item 要添加的物品。
     * @return 如果成功添加，返回true。
     */
    // vIndex: 116
    virtual bool add(::ItemStack& item);

    /**
     * @brief 从Actor的物品栏中丢弃一个物品。
     * @param item 要丢弃的物品。
     * @param randomly 是否随机方向丢弃。
     * @return 如果成功丢弃，返回true。
     */
    // vIndex: 117
    virtual bool drop(::ItemStack const& item, bool const randomly);

    /**
     * @brief 处理玩家与此Actor的交互。
     * @param player 交互的玩家。
     * @param interaction 交互的详细信息。
     * @param pos 交互发生的位置。
     * @return 如果交互被处理，返回true。
     */
    // vIndex: 118
    virtual bool getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const&);

    /**
     * @brief 检查Actor是否能破坏指定的方块。
     * @param block 要检查的方块。
     * @return 如果能破坏，返回true。
     */
    // vIndex: 119
    virtual bool canDestroyBlock(::Block const&) const;

    /**
     * @brief 设置一个辅助值（通常用于数据同步）。
     * @param value 辅助值。
     */
    // vIndex: 120
    virtual void setAuxValue(int);

    /**
     * @brief 在服务端渲染调试状态。
     * @param options 游戏选项。
     */
    // vIndex: 121
    virtual void renderDebugServerState(::Options const&);

    /**
     * @brief 杀死Actor（通常会绕过一些死亡逻辑，直接移除）。
     */
    // vIndex: 122
    virtual void kill();

    /**
     * @brief 使Actor死亡。
     * @param source 导致死亡的伤害来源。
     */
    // vIndex: 123
    virtual void die(::ActorDamageSource const& source);

    /**
     * @brief 检查Actor死亡时是否应该掉落战利品。
     * @return 如果应该掉落，返回true。
     */
    // vIndex: 124
    virtual bool shouldDropDeathLoot() const;

    /**
     * @brief 应用一个实体快照，用于客户端预测和服务器校正。
     * @param snapshotEntity 快照中的实体上下文。
     * @param originalSnapshotEntity 原始快照的访问器。
     */
    // vIndex: 125
    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    /**
     * @brief 当被另一个Actor推动时调用。
     * @param pusher 推动者。
     */
    // vIndex: 126
    virtual void onPush(::Actor&);

    /**
     * @brief 获取上一次死亡的位置。
     * @return 返回一个包含BlockPos的可选值，如果未记录则为空。
     */
    // vIndex: 127
    virtual ::std::optional<::BlockPos> getLastDeathPos() const;

    /**
     * @brief 获取上一次死亡所在的维度。
     * @return 返回一个包含DimensionType的可选值，如果未记录则为空。
     */
    // vIndex: 128
    virtual ::std::optional<::DimensionType> getLastDeathDimension() const;

    /**
     * @brief 检查Actor之前是否死过。
     * @return 如果死过，返回true。
     */
    // vIndex: 129
    virtual bool hasDiedBefore() const;

    /**
     * @brief 执行进入水中的水花效果。
     */
    // vIndex: 130
    virtual void doEnterWaterSplashEffect();

    /**
     * @brief 执行离开水中的水花效果。
     */
    // vIndex: 131
    virtual void doExitWaterSplashEffect();

    /**
     * @brief 执行水花效果。
     */
    // vIndex: 132
    virtual void doWaterSplashEffect();

    /**
     * @brief 检查当手部物品被设置时是否应该提供反馈（如声音）。
     * @param handSlot 手部槽位（主手/副手）。
     * @param item 被设置的物品。
     * @return 如果应该提供反馈，返回true。
     */
    // vIndex: 133
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    /**
     * @brief 检查当盔甲被穿上时是否应该提供反馈（如声音）。
     * @param slot 盔甲槽位。
     * @param item 被穿上的盔甲。
     * @return 如果应该提供反馈，返回true。
     */
    // vIndex: 134
    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    /**
     * @brief 核心的受伤处理逻辑。
     * @param source 伤害来源。
     * @param damage 伤害值。
     * @param bool 未知布尔值。
     * @param bool 未知布尔值。
     * @return 如果成功受伤，返回true。
     */
    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool, bool);

    /**
     * @brief 从NBT数据中读取额外的存档数据（供子类重写）。
     * @param tag NBT数据。
     * @param dataLoadHelper 数据加载辅助工具。
     */
    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    /**
     * @brief 将额外的存档数据写入NBT数据（供子类重写）。
     * @param tag 用于写入的NBT标签。
     */
    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    /**
     * @brief Actor的构造函数。
     * @param level Actor所在的Level（世界）。
     * @param entityContext Actor的实体上下文。
     */
    MCAPI Actor(::ILevel& level, ::EntityContext& entityContext);

    /**
     * @brief Actor的构造函数，通过定义文件创建。
     * @param definitions Actor的定义组。
     * @param definitionName Actor的定义标识符（例如 "minecraft:creeper"）。
     * @param entityContext Actor的实体上下文。
     */
    MCAPI Actor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    /**
     * @brief 【内部函数】添加Actor的内置组件。
     * @return 返回添加的内置组件。
     */
    MCAPI ::BuiltInActorComponents _addActorBuiltInComponents();

    /**
     * @brief 【内部函数】添加Actor的非内置组件（通常来自JSON定义）。
     */
    MCAPI void _addActorNonBuiltInComponents();

    /**
     * @brief 【内部函数】在世界中丢下一个物品。
     * @param item 要丢弃的物品堆栈。
     * @param randomly 是否随机方向丢弃。
     * @return 返回创建的掉落物实体（ItemActor）的指针。
     */
    MCAPI ::ItemActor const* _drop(::ItemStack const& item, bool randomly);

    /**
     * @brief 【内部函数】获取一个可修改的药水效果列表。
     * @return 返回对效果列表的引用。
     */
    MCAPI ::std::vector<::MobEffectInstance>& _getAllEffectsNonConst();

    /**
     * @brief 【内部函数】获取指定类型的动画组件。
     * @param animationComponent 用于存储结果的共享指针。
     * @param group 动画组件的类型（例如，普通动画或UI动画）。
     * @return 返回对动画组件的引用。
     */
    MCAPI ::AnimationComponent& _getAnimationComponent(
        ::std::shared_ptr<::AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType            group
    );

    /**
     * @brief 【内部函数】初始化别名属性。
     */
    MCAPI void _initAliasProperties();

    /**
     * @brief 【内部函数】初始化拴绳系统。
     * @param holder 拴住此Actor的实体。
     */
    MCAPI void _initializeLeashRopeSystem(::Actor* holder);

    /**
     * @brief 【内部函数】检查Actor的头部是否在水中。
     * @return 如果头部在水中，返回true。
     */
    MCAPI bool _isHeadInWater() const;

    /**
     * @brief 【内部函数】检查物品堆栈网络管理器是否已启用。
     * @return 如果已启用，返回true。
     */
    MCAPI bool _isItemStackNetManagerEnabled() const;

    /**
     * @brief 【内部函数】发送已变脏（dirty）的Actor数据给客户端。
     */
    MCAPI void _sendDirtyActorData();

    /**
     * @brief 【内部函数】将组件数据序列化到NBT标签中。
     * @param tag 用于存储序列化数据的CompoundTag。
     */
    MCAPI void _serializeComponents(::CompoundTag& tag) const;

    /**
     * @brief 【内部函数】设置Actor的类型ID。
     * @param type Actor类型。
     */
    MCAPI void _setActorTypeId(::ActorType type);

    /**
     * @brief 【内部函数】设置维度切换组件。
     * @param fromId 起始维度ID。
     * @param toId 目标维度ID。
     * @param portalCooldown 传送门冷却时间。
     */
    MCAPI void _setDimensionTransitionComponent(::DimensionType fromId, ::DimensionType toId, int portalCooldown);

    /**
     * @brief 【内部函数】设置手部容器中的物品（主手/副手）。
     * @param item 要设置的物品。
     * @param handSlot 手部槽位。
     */
    MCAPI void _setHandContainerItem(::ItemStack const& item, ::HandSlot handSlot);

    /**
     * @brief 【内部函数】设置Actor的高度偏移。
     * @param heightOffset 高度偏移值。
     */
    MCAPI void _setHeightOffset(float heightOffset);

    /**
     * @brief 【内部函数】设置上一帧的位置。
     * @param posPrev 上一帧的位置向量。
     */
    MCAPI void _setPosPrev(::Vec3 const& posPrev);

    /**
     * @brief 【内部函数】设置服务端的动画组件。
     */
    MCAPI void _setupServerAnimationComponent();

    /**
     * @brief 【内部函数】如果动画组件是共享的，则同步tick计数。
     */
    MCAPI void _syncTickCountIfAnimationComponentShared();

    /**
     * @brief 【内部函数】尝试用染料与Actor交互。
     * @param player 交互的玩家。
     * @param dyeItem 染料物品。
     * @param interaction 交互详情。
     * @return 如果成功染色，返回true。
     */
    MCAPI bool _tryApplyDye(::Player& player, ::ItemStack const& dyeItem, ::ActorInteraction& interaction);

    /**
     * @brief 【内部函数】尝试在Actor死亡位置种植凋零玫瑰。
     */
    MCAPI void _tryPlantWitherRose();

    /**
     * @brief 【内部函数】更新Actor的组合（组件构成）。
     * @param reload 是否是重载。
     */
    MCAPI void _updateComposition(bool reload);

    /**
     * @brief 向Actor添加一个药水效果实例。
     * @param effect 要添加的效果实例。
     */
    MCAPI void addEffect(::MobEffectInstance const& effect);

    /**
     * @brief 为Actor添加一个标签（tag）。
     * @param tag 要添加的标签字符串。
     * @return 如果成功添加（之前没有此标签），返回true。
     */
    MCAPI bool addTag(::std::string const& tag);

    /**
     * @brief 构建用于调试的组信息字符串。
     * @param out 用于存储输出信息的字符串。
     */
    MCAPI void buildDebugGroupInfo(::std::string& out) const;

    /**
     * @brief 根据Actor的旋转计算其正前方的单位向量。
     * @return 返回表示朝向的Vec3。
     */
    MCAPI ::Vec3 buildForward() const;

    /**
     * @brief 使Actor燃烧并受到伤害。
     * @param dmg 燃烧伤害值。
     * @param bInFire 是否因为站在火中而燃烧。
     */
    MCAPI void burn(int dmg, bool bInFire);

    /**
     * @brief 计算对另一个Actor造成的攻击伤害。
     * @param entity 攻击目标。
     * @return 返回计算出的伤害值。
     */
    MCAPI float calculateAttackDamage(::Actor& entity);

    /**
     * @brief 检查是否可以攻击另一个Actor。
     * @param entity 目标Actor。
     * @return 如果可以攻击，返回true。
     */
    MCAPI bool canAttack(::Actor const& entity) const;

    /**
     * @brief 检查Actor是否可以开始或继续爬梯子。
     * @return 如果可以，返回true。
     */
    MCAPI bool canBeginOrContinueClimbingLadder() const;

    /**
     * @brief 检查Actor当前是否可以游泳。
     * @return 如果可以，返回true。
     */
    MCAPI bool canCurrentlySwim() const;

    /**
     * @brief 检查Actor是否可以飞行。
     * @return 如果可以，返回true。
     */
    MCAPI bool canFly() const;

    /**
     * @brief 检查Actor是否可以与另一个Actor交配。
     * @param partner 交配对象。
     * @return 如果可以，返回true。
     */
    MCAPI bool canMate(::Actor const& partner) const;

    /**
     * @brief 检查Actor是否能从正常游戏行为中获得药水效果。
     * @return 如果可以，返回true。
     */
    MCAPI bool canReceiveMobEffectsFromGameplay() const;

    /**
     * @brief 检查Actor是否能看到另一个Actor（无视障碍物）。
     * @param target 目标Actor。
     * @param obstructionType 障碍物形状类型。
     * @return 如果能看到，返回true。
     */
    MCAPI bool canSee(::Actor const& target, ::ShapeType obstructionType) const;

    /**
     * @brief 检查Actor是否能看到某个位置（无视障碍物）。
     * @param targetPos 目标位置。
     * @param obstructionType 障碍物形状类型。
     * @return 如果能看到，返回true。
     */
    MCAPI bool canSee(::Vec3 const& targetPos, ::ShapeType obstructionType) const;

    /**
     * @brief 检查Actor是否能看到日光。
     * @return 如果能，返回true。
     */
    MCAPI bool canSeeDaylight() const;

    /**
     * @brief 检查并处理摔落伤害。
     * @param ya Y轴速度。
     * @param onGround 是否在地面上。
     * @param recheckLiquid 是否重新检查液体。
     */
    MCAPI void checkFallDamage(float ya, bool onGround, bool recheckLiquid);

    /**
     * @brief 使用紫颂果进行传送。
     * @param range 传送范围。
     */
    MCAPI void chorusFruitTeleport(::Vec3 const& range);

    /**
     * @brief 检查与另一个实体的距离是否小于给定值。
     * @param e 另一个实体。
     * @param distance 距离。
     * @return 如果小于，返回true。
     */
    MCAPI bool closerThan(::Actor const& e, float distance) const;

    /**
     * @brief 检查与另一个实体的距离是否在指定范围内（XZ平面和Y轴分开计算）。
     * @param e 另一个实体。
     * @param distanceXZ XZ平面上的距离。
     * @param distanceY Y轴上的距离。
     * @return 如果在范围内，返回true。
     */
    MCAPI bool closerThan(::Actor const& e, float distanceXZ, float distanceY) const;

    /**
     * @brief 消耗一个掉落物实体。
     * @param itemActor 要消耗的掉落物实体。
     * @param count 消耗的数量。
     */
    MCAPI void consumeItem(::ItemActor& itemActor, int count);

    /**
     * @brief 创建一个更新装备的网络数据包。
     * @param containerID 容器ID。
     * @return 返回UpdateEquipPacket。
     */
    MCAPI ::UpdateEquipPacket createUpdateEquipPacket(int containerID);

    /**
     * @brief 从Level的缓存中注销此Actor的标签。
     */
    MCAPI void deregisterTagsFromLevelCache();

    /**
     * @brief 计算到另一个实体的距离。
     * @param e 另一个实体。
     * @return 返回距离值。
     */
    MCAPI float distanceTo(::Actor const& e) const;

    /**
     * @brief 计算到某个位置的距离。
     * @param pos 目标位置。
     * @return 返回距离值。
     */
    MCAPI float distanceTo(::Vec3 const& pos) const;

    /**
     * @brief 计算到另一个实体的距离的平方（性能更高）。
     * @param e 另一个实体。
     * @return 返回距离的平方。
     */
    MCAPI float distanceToSqr(::Actor const& e) const;

    /**
     * @brief 计算到某个位置的距离的平方。
     * @param pos 目标位置。
     * @return 返回距离的平方。
     */
    MCAPI float distanceToSqr(::Vec3 const& pos) const;

    /**
     * @brief 朝一个方向丢弃物品。
     * @param item 要丢弃的物品。
     * @param towards 目标方向向量。
     */
    MCAPI void dropTowards(::ItemStack const& item, ::Vec3 towards);

    /**
     * @brief 根据装备表为Actor装备物品。
     * @param equipmentTable 装备表。
     */
    MCAPI void equip(::EquipmentTable const& equipmentTable);

    /**
     * @brief 根据战利品表文件路径为Actor装备物品。
     * @param lootTableFilePath 战利品表文件路径。
     */
    MCAPI void equip(::std::string const& lootTableFilePath);

    /**
     * @brief 根据Actor的定义文件中的装备定义来装备物品。
     */
    MCAPI void equipFromEquipmentDefinition();

    /**
     * @brief 计算座位旋转。
     * @param rideable 骑乘组件。
     * @param useVehicleRenderParams 是否使用载具的渲染参数。
     * @return 返回计算出的座位旋转角度。
     */
    MCAPI float evaluateSeatRotation(::RideableComponent const& rideable, bool useVehicleRenderParams);

    /**
     * @brief 离开载具。
     * @param exitFromPassenger 是否由乘客主动离开。
     * @param actorIsBeingDestroyed Actor是否正在被销毁。
     * @param wasEjectedByActivatorRail 是否被动力铁轨弹出。
     */
    MCAPI void exitVehicle(bool exitFromPassenger, bool actorIsBeingDestroyed, bool wasEjectedByActivatorRail);

    /**
     * @brief 获取附近按距离排序的Actor。
     * @param distance 搜索范围。
     * @param actorTypeId 要搜索的Actor类型ID。
     * @return 返回一个包含排序后Actor的向量。
     */
    MCAPI ::std::vector<::DistanceSortedActor> fetchNearbyActorsSorted(::Vec3 const& distance, ::ActorType actorTypeId);

    /**
     * @brief 获取Actor碰撞箱的尺寸。
     * @return 返回一个Vec2，表示宽度和高度。
     */
    MCAPI ::Vec2 const& getAABBDim() const;

    /**
     * @brief 获取Actor的定义标识符。
     * @return 返回ActorDefinitionIdentifier的const引用。
     */
    MCAPI ::ActorDefinitionIdentifier const& getActorIdentifier() const;

    /**
     * @brief 获取指定槽位的盔甲。
     * @param slot 盔甲槽位。
     * @return 返回该槽位盔甲物品的const引用。
     */
    MCAPI ::ItemStack const& getArmor(::SharedTypes::Legacy::ArmorSlot slot) const;

    /**
     * @brief 获取Actor的附加点位置。
     * @param location 附加点位置枚举。
     * @return 返回附加点的世界坐标。
     */
    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location) const;

    /**
     * @brief 获取Actor插值计算后的附加点位置。
     * @param location 附加点位置枚举。
     * @param alpha 插值系数。
     * @return 返回插值后的附加点世界坐标。
     */
    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location, float alpha) const;

    /**
     * @brief 获取一个属性的实例。
     * @param attribute 要获取的属性。
     * @return 返回对属性实例的const引用。
     */
    MCAPI ::AttributeInstance const& getAttribute(::Attribute const& attribute) const;

    /**
     * @brief 获取Actor的属性表（const版本）。
     * @return 返回指向属性表的非空指针。
     */
    MCAPI ::gsl::not_null<::BaseAttributeMap const*> getAttributes() const;

    /**
     * @brief 获取Actor的属性表。
     * @return 返回指向属性表的非空指针。
     */
    MCAPI ::gsl::not_null<::BaseAttributeMap*> getAttributes();

    /**
     * @brief 获取Actor当前站立的方块的位置。
     * @param actor 目标Actor。
     * @return 返回脚下方块的BlockPos。
     */
    MCAPI ::BlockPos getBlockPosCurrentlyStandingOn(::Actor const* actor) const;

    /**
     * @brief 获取Actor所在位置的光照亮度。
     * @param a 插值系数。
     * @return 返回亮度值。
     */
    MCAPI float getBrightness(float a = 0.0f) const;

    /**
     * @brief 获取最适合携带指定物品的物品栏槽位中的物品。
     * @param item 参考物品。
     * @return 返回最适合槽位中的物品。
     */
    MCAPI ::ItemStack const& getCarriedItemInSlotPreferredBy(::ItemStack const& item) const;

    /**
     * @brief 获取箱子槽位的数量（如果Actor有箱子）。
     * @return 返回槽位数。
     */
    MCAPI int getChestSlots() const;

    /**
     * @brief 获取当前的游泳程度（用于动画）。
     * @return 返回游泳程度值。
     */
    MCAPI float getCurrentSwimAmount() const;

    /**
     * @brief 检查Actor是否会对附近的生物造成伤害。
     * @return 如果是，返回true。
     */
    MCAPI bool getDamageNearbyMobs() const;

    /**
     * @brief 获取Actor所在的维度。
     */
    MCFOLD ::Dimension& getDimension() const;

    /**
     * @brief 获取Actor所在维度的方块源。
     */
    MCFOLD ::BlockSource& getDimensionBlockSource() const;

    /**
     * @brief 获取Actor所在维度的方块源（const版本）。
     */
    MCFOLD ::BlockSource const& getDimensionBlockSourceConst() const;

    /**
     * @brief 获取Actor所在的维度（const版本）。
     */
    MCFOLD ::Dimension const& getDimensionConst() const;

    /**
     * @brief 获取Actor所在维度的ID。
     * @return 返回DimensionType枚举值。
     */
    MCAPI ::DimensionType getDimensionId() const;

    /**
     * @brief 获取Actor身上的指定药水效果。
     * @param effect 要查找的药水效果。
     * @return 如果有该效果，返回效果实例的指针；否则返回nullptr。
     */
    MCAPI ::MobEffectInstance const* getEffect(::MobEffect const& effect) const;

    /**
     * @brief 获取实体注册表。
     * @return 返回一个包含EntityRegistry的StackRefResult。
     */
    MCAPI ::StackRefResult<::EntityRegistry> getEntityRegistry();

    /**
     * @brief 获取Actor的实体类型ID。
     * @return 返回ActorType。
     */
    MCAPI ::ActorType getEntityTypeId() const;

    /**
     * @brief 获取装备槽位的总数。
     * @return 返回槽位数。
     */
    MCAPI int getEquipSlots() const;

    /**
     * @brief 获取最适合装备指定物品的槽位。
     * @param item 物品。
     * @return 返回EquipmentSlot。
     */
    MCAPI ::SharedTypes::Legacy::EquipmentSlot getEquipmentSlotForItem(::ItemStack const& item) const;

    /**
     * @brief 获取指定装备槽位中的物品。
     * @param slot 装备槽位。
     * @return 返回该槽位物品的const引用。
     */
    MCAPI ::ItemStack const& getEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

    /**
     * @brief 获取Actor眼睛的位置。
     * @return 返回眼睛位置的Vec3。
     */
    MCAPI ::Vec3 getEyePos() const;

    /**
     * @brief 获取Actor的摔落距离。
     * @return 返回摔落距离。
     */
    MCAPI float getFallDistance() const;

    /**
     * @brief 获取第一个乘客。
     * @return 如果有乘客，返回第一个乘客的指针；否则返回nullptr。
     */
    MCAPI ::Actor* getFirstPassenger() const;

    /**
     * @brief 获取插值计算后的位置，用于平滑渲染。
     * @param a 插值系数（0.0-1.0）。
     * @return 返回插值后的位置。
     */
    MCAPI ::Vec3 getInterpolatedPosition(float a = 0.0f) const;

    /**
     * @brief 获取插值计算后的骑乘位置。
     * @param a 插值系数。
     * @return 返回插值后的骑乘位置。
     */
    MCAPI ::Vec3 getInterpolatedRidingPosition(float a = 0.0f) const;

    /**
     * @brief 获取插值计算后的旋转角度。
     * @param a 插值系数。
     * @return 返回插值后的旋转（俯仰角、偏航角）。
     */
    MCAPI ::Vec2 getInterpolatedRotation(float a = 0.0f) const;

    /**
     * @brief 获取最后一次伤害此Actor的生物。
     * @return 返回该生物的Mob指针。
     */
    MCAPI ::Mob* getLastHurtByMob();

    /**
     * @brief 获取最后一次伤害此Actor的玩家。
     * @return 返回该玩家的Player指针。
     */
    MCAPI ::Player* getLastHurtByPlayer();

    /**
     * @brief 获取拴住此Actor的实体的ID。
     * @return 返回拴绳持有者的ActorUniqueID。
     */
    MCAPI ::ActorUniqueID getLeashHolder() const;

    /**
     * @brief 获取此Actor的所有链接（如骑乘、拴绳等）。
     * @return 返回一个ActorLink向量。
     */
    MCAPI ::std::vector<::ActorLink> getLinks() const;

    /**
     * @brief 获取此Actor的战利品表。
     * @return 返回LootTable指针。
     */
    MCAPI ::LootTable* getLootTable();

    /**
     * @brief 获取标记变种（例如猫的颜色）。
     * @return 返回变种值。
     */
    MCAPI int getMarkVariant() const;

    /**
     * @brief 获取最大生命值。
     * @return 返回最大生命值。
     */
    MCAPI int getMaxHealth() const;

    /**
     * @brief 获取一个可修改的属性。
     * @param attribute 要获取的属性。
     * @return 返回MutableAttributeWithContext。
     */
    MCAPI ::MutableAttributeWithContext getMutableAttribute(::Attribute const& attribute);

    /**
     * @brief 获取Actor的名称标签。
     * @return 返回名称标签字符串的const引用。
     */
    MCAPI ::std::string const& getNameTag() const;

    /**
     * @brief 获取副手槽位中的物品。
     * @return 返回副手物品的const引用。
     */
    MCAPI ::ItemStack const& getOffhandSlot() const;

    /**
     * @brief 获取死亡时掉落的经验值。
     * @return 返回经验值。
     */
    MCAPI int getOnDeathExperience();

    /**
     * @brief 获取或创建动态属性。
     * @return 返回对DynamicProperties的引用。
     */
    MCAPI ::DynamicProperties& getOrAddDynamicProperties();

    /**
     * @brief 获取或创建Actor的唯一ID。
     * @return 返回ActorUniqueID的const引用。
     */
    MCAPI ::ActorUniqueID const& getOrCreateUniqueID() const;

    /**
     * @brief 获取此Actor的所有者。
     * @return 返回所有者的Mob指针。
     */
    MCAPI ::Mob* getOwner() const;

    /**
     * @brief 获取所有者的ID。
     */
    MCFOLD ::ActorUniqueID const getOwnerId() const;

    /**
     * @brief 获取指定乘客的索引。
     * @param passenger 乘客。
     * @return 返回索引值，如果不是乘客则返回-1。
     */
    MCAPI int getPassengerIndex(::Actor const& passenger) const;

    /**
     * @brief 获取持久化的交易配方。
     * @return 返回一个包含交易数据的CompoundTag的unique_ptr。
     */
    MCAPI ::std::unique_ptr<::CompoundTag> getPersistingTradeOffers();

    /**
     * @brief 获取此Actor的玩家所有者。
     * @return 返回玩家所有者的Player指针。
     */
    MCAPI ::Player* getPlayerOwner() const;

    /**
     * @brief 获取位置增量（当前位置与上一帧位置的差）。
     * @return 返回位置增量向量的const引用。
     */
    MCAPI ::Vec3 const& getPosDelta() const;

    /**
     * @brief 获取Actor的当前位置。
     * @return 返回位置向量的const引用。
     */
    MCAPI ::Vec3 const& getPosition() const;



    /**
     * @brief 获取Actor的随机数生成器。
     * @return 返回对Random对象的引用。
     */
    MCAPI ::Random& getRandom() const;

    /**
     * @brief 获取经过安全处理（防注入）的名称标签。
     * @return 返回RedactableString对象。
     */
    MCAPI ::Bedrock::Safety::RedactableString getRedactableNameTag() const;

    /**
     * @brief 获取骑乘高度。
     * @return 返回骑乘高度值。
     */
    MCAPI float getRidingHeight() const;

    /**
     * @brief 获取Actor的旋转角度。
     * @return 返回旋转向量（俯仰角、偏航角）的const引用。
     */
    MCAPI ::Vec2 const& getRotation() const;

    /**
     * @brief 获取Actor的运行时ID。
     * @return 返回ActorRuntimeID。
     */
    MCAPI ::ActorRuntimeID getRuntimeID() const;

    /**
     * @brief 获取一个状态标志位的值。
     * @param flag 要检查的标志。
     * @return 如果标志位为true，返回true。
     */
    MCAPI bool getStatusFlag(::ActorFlags flag) const;

    /**
     * @brief 获取力量属性值。
     * @return 返回力量值。
     */
    MCAPI int getStrength() const;

    /**
     * @brief 获取结构完整性。
     * @return 返回结构完整性值。
     */
    MCAPI int getStructuralIntegrity() const;

    /**
     * @brief 获取游泳程度（插值）。
     * @param a 插值系数。
     * @return 返回插值后的游泳程度。
     */
    MCAPI float getSwimAmount(float a = 0.0f) const;

    /**
     * @brief 获取当前的目标。
     * @return 返回目标Actor的指针。
     */
    MCAPI ::Actor* getTarget() const;

    /**
     * @brief 获取交易配方列表。
     * @return 返回MerchantRecipeList指针。
     */
    MCAPI ::MerchantRecipeList* getTradeOffers();

    /**
     * @brief 获取正在交易的玩家。
     * @return 返回交易玩家的Player指针。
     */
    MCAPI ::Player* getTradingPlayer() const;

    /**
     * @brief 获取变种ID。
     */
    MCFOLD int getVariant() const;

    /**
     * @brief 获取正在骑乘的载具。
     * @return 返回载具Actor的指针。
     */
    MCAPI ::Actor* getVehicle() const;

    /**
     * @brief 获取最顶层的载具（骑乘链的根节点）。
     * @return 返回根载具的Actor指针。
     */
    MCAPI ::Actor* getVehicleRoot() const;

    /**
     * @brief 获取视线向量（插值）。
     */
    MCFOLD ::Vec3 getViewVector(float a = 0.0f) const;

    /**
     * @brief 获取此Actor的弱引用实体上下文。
     * @return 返回对实体上下文的弱引用。
     */
    MCAPI ::WeakRef<::EntityContext> const getWeakEntity() const;

    /**
     * @brief 处理摔落伤害。
     * @param fallDistance 摔落距离。
     * @param multiplier 伤害倍率。
     * @param source 伤害来源。
     */
    MCAPI void handleFallDamage(float fallDistance, float multiplier, ::ActorDamageSource source);

    /**
     * @brief 处理剩余的摔落伤害。
     * @param damage 伤害值。
     * @param source 伤害来源。
     */
    MCAPI void handleLeftoverFallDamage(float damage, ::ActorDamageSource source);

    /**
     * @brief 检查Actor是否属于指定的类别。
     * @param categories 类别（位掩码）。
     * @return 如果属于任一指定类别，返回true。
     */
    MCAPI bool hasCategory(::ActorCategory categories) const;

    /**
     * @brief 检查Actor是否已关联到一个维度。
     * @return 如果是，返回true。
     */
    MCAPI bool hasDimension() const;

    /**
     * @brief 检查Actor是否拥有指定的药水效果。
     * @param effect 要检查的效果。
     * @return 如果拥有，返回true。
     */
    MCAPI bool hasEffect(::MobEffect const& effect) const;

    /**
     * @brief 检查Actor是否属于指定的族系（family）。
     * @param family 族系的哈希字符串。
     * @return 如果属于，返回true。
     */
    MCAPI bool hasFamily(::HashedString const& family) const;

    /**
     * @brief 检查是否有玩家作为乘客。
     * @return 如果有，返回true。
     */
    MCAPI bool hasPlayerPassenger() const;

    /**
     * @brief 检查Actor是否已分配运行时ID。
     * @return 如果是，返回true。
     */
    MCAPI bool hasRuntimeID() const;

    /**
     * @brief 检查Actor是否装备了鞍。
     * @return 如果是，返回true。
     */
    MCAPI bool hasSaddle() const;

    /**
     * @brief 检查Actor是否拥有指定的标签。
     * @param tag 要检查的标签。
     * @return 如果拥有，返回true。
     */
    MCAPI bool hasTag(::std::string const& tag) const;

    /**
     * @brief 检查Actor是否拥有任何标签。
     * @return 如果有，返回true。
     */
    MCAPI bool hasTags() const;

    /**
     * @brief 检查Actor是否属于指定的类型。
     * @param types Actor类型（位掩码）。
     * @return 如果属于，返回true。
     */
    MCAPI bool hasType(::ActorType types) const;

    /**
     * @brief 检查Actor是否拥有唯一的ID。
     * @return 如果有，返回true。
     */
    MCAPI bool hasUniqueID() const;

    /**
     * @brief 治疗Actor。
     * @param heal 治疗量。
     */
    MCAPI void heal(int heal);

    /**
     * @brief 对Actor造成伤害。
     * @param source 伤害来源。
     * @param damage 伤害值。
     * @param knock 是否产生击退。
     * @param ignite 是否点燃。
     * @return 如果成功造成伤害，返回true。
     */
    MCAPI bool hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    /**
     * @brief 检查Actor是否在向下流动的水中。
     * @return 如果是，返回true。
     */
    MCAPI bool inDownwardFlowingLiquid() const;

    /**
     * @brief 初始化Actor的属性。
     */
    MCAPI void initActorProperties();

    /**
     * @brief 使用VariantParameterList初始化参数。
     * @param params 参数列表。
     */
    MCAPI void initParams(::VariantParameterList& params);

    /**
     * @brief 使用RenderParams初始化参数。
     * @param params 渲染参数。
     */
    MCAPI void initParams(::RenderParams& params);

    /**
     * @brief 检查Actor的游戏模式是否为冒险模式。
     * @return 如果是，返回true。
     */
    MCAPI bool isAdventure() const;

    /**
     * @brief 检查Actor的游戏模式是否允许攻击。
     * @return 如果是，返回true。
     */
    MCAPI bool isAttackableGamemode() const;

    /**
     * @brief 检查Actor是否是自主的（非玩家控制）。
     * @return 如果是，返回true。
     */
    MCAPI bool isAutonomous() const;

    /**
     * @brief 检查Actor是否是幼年体。
     * @return 如果是，返回true。
     */
    MCAPI bool isBaby() const;

    /**
     * @brief 检查Actor是否装备了箱子。
     * @return 如果是，返回true。
     */
    MCAPI bool isChested() const;

    /**
     * @brief 检查是否在客户端。
     * @return 如果是，返回true。
     */
    MCAPI bool isClientSide() const;

    /**
     * @brief 检查Actor的游戏模式是否为创造模式。
     * @return 如果是，返回true。
     */
    MCAPI bool isCreative() const;

    /**
     * @brief 检查Actor是否正在跳舞。
     * @return 如果是，返回true。
     */
    MCAPI bool isDancing() const;

    /**
     * @brief 检查Actor是否已死亡。
     * @return 如果是，返回true。
     */
    MCAPI bool isDead() const;

    /**
     * @brief 检查Actor是否可以开门。
     * @return 如果是，返回true。
     */
    MCAPI bool isDoorOpener() const;

    /**
     * @brief 检查Actor是否是全局的（不受距离影响）。
     * @return 如果是，返回true。
     */
    MCAPI bool isGlobal() const;

    /**
     * @brief 检查Actor是否在云中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInClouds() const;

    /**
     * @brief 检查Actor是否在岩浆中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInLava() const;

    /**
     * @brief 检查Actor是否处于求爱状态。
     * @return 如果是，返回true。
     */
    MCAPI bool isInLove() const;

    /**
     * @brief 检查Actor是否在降水（雨或雪）中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInPrecipitation() const;

    /**
     * @brief 检查Actor是否在雨中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInRain() const;

    /**
     * @brief 检查Actor是否在雪中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInSnow() const;

    /**
     * @brief 检查Actor是否在雷暴中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInThunderstorm() const;

    /**
     * @brief 检查Actor是否在水中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInWater() const;

    /**
     * @brief 检查Actor是否在水或雨中。
     * @return 如果是，返回true。
     */
    MCAPI bool isInWaterOrRain() const;

    /**
     * @brief 检查Actor是否在世界中（未被移除）。
     * @return 如果是，返回true。
     */
    MCAPI bool isInWorld() const;

    /**
     * @brief 检查Actor是否正在跳跃。
     * @return 如果是，返回true。
     */
    MCAPI bool isJumping() const;

    /**
     * @brief 检查Actor是否被拴住了。
     * @return 如果是，返回true。
     */
    MCAPI bool isLeashed() const;

    /**
     * @brief 检查此Actor是否为本地玩家。
     */
    MCFOLD bool isLocalPlayer() const;

    /**
     * @brief 检查Actor是否在水面上方。
     * @return 如果是，返回true。
     */
    MCAPI bool isOverWater() const;

    /**
     * @brief 检查另一个Actor是否是自己的乘客。
     * @param passenger 要检查的Actor。
     * @return 如果是乘客，返回true。
     */
    MCAPI bool isPassenger(::Actor const& passenger) const;

    /**
     * @brief 检查Actor是否是持久的（不会自然消失）。
     * @return 如果是，返回true。
     */
    MCAPI bool isPersistent() const;

    /**
     * @brief 检查此Actor是否为玩家。
     */
    MCFOLD bool isPlayer() const;

    /**
     * @brief 检查此Actor是否为远程玩家（非本地玩家）。
     * @return 如果是，返回true。
     */
    MCAPI bool isRemotePlayer() const;

    /**
     * @brief 检查Actor是否正在骑乘。
     * @return 如果是，返回true。
     */
    MCAPI bool isRiding() const;

    /**
     * @brief 检查Actor是否正在骑乘指定的载具。
     * @param targetVehicle 目标载具。
     * @return 如果是，返回true。
     */
    MCAPI bool isRiding(::Actor* targetVehicle) const;

    /**
     * @brief 检查Actor是否是静音的。
     * @return 如果是，返回true。
     */
    MCAPI bool isSilent() const;

    /**
     * @brief 检查Actor是否是坐着的。
     * @return 如果是，返回true。
     */
    MCAPI bool isSitting() const;

    /**
     * @brief 检查Actor是否在潜行。
     * @return 如果是，返回true。
     */
    MCAPI bool isSneaking() const;

    /**
     * @brief 检查Actor是否是旁观者。
     * @return 如果是，返回true。
     */
    MCAPI bool isSpectator() const;

    /**
     * @brief 检查Actor的游戏模式是否为生存模式。
     * @return 如果是，返回true。
     */
    MCAPI bool isSurvival() const;

    /**
     * @brief 检查Actor是否在游泳。
     * @return 如果是，返回true。
     */
    MCAPI bool isSwimming() const;

    /**
     * @brief 检查Actor是否被驯服。
     * @return 如果是，返回true。
     */
    MCAPI bool isTame() const;

    /**
     * @brief 检查Actor是否接触到能造成伤害的方块（如仙人掌）。
     * @return 如果是，返回true。
     */
    MCAPI bool isTouchingDamageBlock() const;

    /**
     * @brief 检查Actor是否正在交易。
     * @return 如果是，返回true。
     */
    MCAPI bool isTrading() const;

    /**
     * @brief 检查Actor是否是指定的类型。
     * @param type 类型。
     * @return 如果是，返回true。
     */
    MCAPI bool isType(::ActorType type) const;

    /**
     * @brief 检查Actor是否在指定类型的液体下方。
     * @param type 液体材质类型。
     * @return 如果是，返回true。
     */
    MCAPI bool isUnderLiquid(::MaterialType type) const;

    /**
     * @brief 检查Actor是否穿着皮革甲。
     * @return 如果是，返回true。
     */
    MCAPI bool isWearingLeatherArmor() const;

    /**
     * @brief 检查Actor是否是世界建造者。
     * @return 如果是，返回true。
     */
    MCAPI bool isWorldBuilder() const;

    /**
     * @brief 当此Actor杀死另一个实体时调用。
     * @param entity 被杀死的实体。
     */
    MCAPI void killed(::Actor& entity);

    /**
     * @brief 从NBT加载实体标志位。
     * @param tag NBT数据。
     * @param dataLoadHelper 数据加载辅助工具。
     */
    MCAPI void loadEntityFlags(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    /**
     * @brief 从NBT加载链接数据。
     * @param entityTag 实体NBT数据。
     * @param links 用于存储链接的向量。
     * @param dataLoadHelper 数据加载辅助工具。
     */
    MCAPI void
    loadLinks(::CompoundTag const& entityTag, ::std::vector<::ActorLink>& links, ::DataLoadHelper& dataLoadHelper);

    /**
     * @brief 移动Actor。
     * @param posDelta 位置增量。
     */
    MCAPI void move(::Vec3 const& posDelta);

    /**
     * @brief 将Actor移动到指定位置和旋转。
     * @param pos 目标位置。
     * @param rot 目标旋转。
     */
    MCAPI void moveTo(::Vec3 const& pos, ::Vec2 const& rot);

    /**
     * @brief 检查Actor是否在可攀爬的方块上。
     * @return 如果是，返回true。
     */
    MCAPI bool onClimbableBlock() const;

    /**
     * @brief 当一个药水效果被添加到此Actor时调用。
     * @param effect 被添加的效果实例。
     */
    MCAPI void onEffectAdded(::MobEffectInstance& effect);

    /**
     * @brief 当一个药水效果在此Actor上更新时调用。
     * @param effect 被更新的效果实例。
     */
    MCAPI void onEffectUpdated(::MobEffectInstance& effect);

    /**
     * @brief 拾取一个掉落物实体。
     * @param itemActor 要拾取的掉落物实体。
     * @param count 拾取的数量。
     */
    MCAPI void pickUpItem(::ItemActor& itemActor, int count);

    /**
     * @brief 播放一个声音。
     * @param type 声音事件类型。
     * @param pos 声音位置。
     * @param data 附加数据。
     */
    MCAPI void playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, int data);

    /**
     * @brief 在指定区域播放一个声音。
     * @param region 方块源。
     * @param type 声音事件类型。
     * @param pos 声音位置。
     * @param data 附加数据。
     */
    MCAPI void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data
    );

    /**
     * @brief 播放一个同步的声音（通知客户端播放）。
     * @param type 声音事件类型。
     * @param pos 声音位置。
     * @param data 附加数据。
     * @param isGlobal 是否是全局声音。
     */
    MCAPI void
    playSynchronizedSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, int data, bool isGlobal);

    /**
     * @brief 定位乘客的位置。
     * @param passenger 乘客。
     */
    MCAPI void positionPassenger(::Actor& passenger);

    /**
     * @brief 发布一个游戏事件（用于 Sculk 传感器等）。
     * @param gameEvent 游戏事件。
     * @param originPos 事件起源位置。
     * @param affectedBlock 受影响的方块。
     */
    MCAPI void postGameEvent(::GameEvent const& gameEvent, ::Vec3 const& originPos, ::Block const* affectedBlock);

    /**
     * @brief 发布一个水花游戏事件。
     */
    MCAPI void postSplashGameEvent();

    /**
     * @brief 将一个动作事件推入动作队列。
     * @param actionEvent 动作事件。
     */
    MCAPI void pushBackActionEventToActionQueue(::ActionEvent actionEvent);

    /**
     * @brief 将Actor推出方块。
     * @param vec 推出方向和力度。
     */
    MCAPI void pushOutOfBlocks(::Vec3 const& vec);

    /**
     * @brief 从定义文件请求更新包围盒（AABB）。
     */
    MCAPI void queueBBUpdateFromDefinition();

    /**
     * @brief 刷新组件。
     */
    MCAPI void refreshComponents();

    /**
     * @brief 重载Actor（从定义文件）。
     */
    MCAPI void reload();

    /**
     * @brief 移除所有药水效果。
     */
    MCAPI void removeAllEffects();

    /**
     * @brief 移除所有乘客。
     * @param actorIsBeingDestroyed Actor是否正在被销毁。
     * @param exitFromPassenger 是否由乘客主动离开。
     */
    MCAPI void removeAllPassengers(bool actorIsBeingDestroyed, bool exitFromPassenger);

    /**
     * @brief 移除指定ID的药水效果。
     * @param effectId 效果ID。
     */
    MCAPI void removeEffect(int effectId);

    /**
     * @brief 移除一个标签。
     * @param tag 要移除的标签。
     * @return 如果成功移除（之前有此标签），返回true。
     */
    MCAPI bool removeTag(::std::string const& tag);

    /**
     * @brief 将Actor数据保存到NBT。
     * @param entityTag 用于保存的NBT标签。
     * @return 如果成功，返回true。
     */
    MCAPI bool save(::CompoundTag& entityTag) const;

    /**
     * @brief 将实体标志位保存到NBT。
     * @param entityTag NBT标签。
     */
    MCAPI void saveEntityFlags(::CompoundTag& entityTag) const;

    /**
     * @brief 将链接数据保存到NBT列表标签。
     * @return 返回一个包含链接数据的ListTag的unique_ptr。
     */
    MCAPI ::std::unique_ptr<::ListTag> saveLinks() const;

    /**
     * @brief 保存持久化的交易数据。
     * @param offersTag 交易配方NBT。
     * @param riches 财富值。
     */
    MCAPI void savePersistingTrade(::std::unique_ptr<::CompoundTag> offersTag, int riches);

    /**
     * @brief 保存Actor数据到NBT，但不包括ID。
     * @param entityTag NBT标签。
     */
    MCAPI void saveWithoutId(::CompoundTag& entityTag) const;

    /**
     * @brief 发送一个Actor定义事件触发的通知。
     * @param event 事件名称。
     */
    MCAPI void sendActorDefinitionEventTriggered(::std::string const& event);

    /**
     * @brief 在序列化时设置生命值。
     * @param newHealth 新的生命值。
     */
    MCAPI void serializationSetHealth(int newHealth);

    /**
     * @brief 设置Actor的渲染器ID。
     * @param actorRendererId 渲染器ID。
     */
    MCAPI void setActorRendererId(::HashedString actorRendererId);

    /**
     * @brief 设置Actor是否为自主的。
     * @param g true为自主。
     */
    MCAPI void setAutonomous(bool g);

    /**
     * @brief 设置基础定义。
     * @param sourceId 源定义标识符。
     * @param clearDefs 是否清除现有定义。
     * @param update 是否立即更新。
     */
    MCAPI void setBaseDefinition(::ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    /**
     * @brief 设置方块目标。
     * @param target 目标方块位置。
     */
    MCAPI void setBlockTarget(::BlockPos const& target);

    /**
     * @brief 设置Actor所在的维度。
     * @param weakDimension 对维度的弱引用。
     */
    MCAPI void setDimension(::WeakRef<::Dimension> weakDimension);

    /**
     * @brief 设置Actor是否隐身。
     * @param value true为隐身。
     */
    MCAPI void setInvisible(bool value);

    /**
     * @brief 设置Actor是否在跳跃。
     * @param jump true为跳跃。
     */
    MCAPI void setJumping(bool jump);

    /**
     * @brief 设置上一次被击中的包围盒。
     * @param pos 位置。
     * @param radius 半径。
     */
    MCAPI void setLastHitBB(::Vec3 const& pos, ::Vec3 const& radius);

    /**
     * @brief 设置最后一次伤害此Actor的生物。
     * @param mob 生物。
     */
    MCAPI void setLastHurtByMob(::Mob* mob);

    /**
     * @brief 设置最后一次伤害此Actor的玩家。
     * @param player 玩家。
     */
    MCAPI void setLastHurtByPlayer(::Player* player);

    /**
     * @brief 设置此Actor最后一次伤害的目标。
     * @param target 目标。
     */
    MCAPI void setLastHurtMob(::Actor* target);

    /**
     * @brief 设置拴住此Actor的实体的ID。
     * @param leashHolder 拴绳持有者的ID。
     */
    MCAPI void setLeashHolder(::ActorUniqueID leashHolder);



    /**
     * @brief 设置有限的生命周期（ticks）。
     * @param lifetimeTicks 生命周期刻数。
     */
    MCAPI void setLimitedLifetimeTicks(int lifetimeTicks);

    /**
     * @brief 设置标记变种。
     * @param value 变种值。
     */
    MCAPI void setMarkVariant(int value);

    /**
     * @brief 设置移动声音的距离偏移。
     * @param movementSoundDistanceOffset 偏移值。
     */
    MCAPI void setMovementSoundDistanceOffset(float movementSoundDistanceOffset);

    /**
     * @brief 设置名称标签。
     * @param name 名称。
     */
    MCAPI void setNameTag(::std::string const& name);

    /**
     * @brief 将Actor设置为持久的。
     */
    MCAPI void setPersistent();

    /**
     * @brief 设置上一帧的位置和旋转。
     */
    MCAPI void setPreviousPosRot();

    /**
     * @brief 设置安全处理后的名称标签。
     * @param name 名称。
     */
    MCAPI void setRedactableNameTag(::Bedrock::Safety::RedactableString const& name);

    /**
     * @brief 设置上一帧的旋转。
     * @param rotation 旋转。
     */
    MCAPI void setRotationPrev(::Vec2 const& rotation);

    /**
     * @brief 设置皮肤ID。
     * @param value ID值。
     */
    MCAPI void setSkinID(int value);

    /**
     * @brief 设置一个状态标志位。
     * @param flag 要设置的标志。
     * @param value 目标值（true或false）。
     */
    MCAPI void setStatusFlag(::ActorFlags flag, bool value);

    /**
     * @brief 设置力量值。
     * @param strength 力量值。
     */
    MCAPI void setStrength(int strength);

    /**
     * @brief 设置最大力量值。
     * @param strength 最大力量值。
     */
    MCAPI void setStrengthMax(int strength);

    /**
     * @brief 设置变种ID。
     */
    MCFOLD void setVariant(int value);

    /**
     * @brief 检查此Actor是否应该被孤立（在区块卸载时）。
     * @param source 方块源。
     * @return 如果应该，返回true。
     */
    MCAPI bool shouldOrphan(::BlockSource& source);

    /**
     * @brief 检查此Actor是否应该进行tick更新。
     * @return 如果应该，返回true。
     */
    MCAPI bool shouldTick() const;

    /**
     * @brief 在指定位置生成一个掉落物。
     * @param item 要生成的物品。
     * @param yOffs Y轴偏移。
     * @return 返回生成的ItemActor指针。
     */
    MCAPI ::ItemActor* spawnAtLocation(::ItemStack const& item, float yOffs);

    /**
     * @brief 生成吃东西的粒子效果。
     * @param itemInUse 正在吃的物品。
     * @param count 粒子数量。
     */
    MCAPI void spawnEatParticles(::ItemStack const& itemInUse, int count);

    /**
     * @brief 生成轨迹气泡（如在水下）。
     */
    MCAPI void spawnTrailBubbles();

    /**
     * @brief 停止骑乘。
     * @param exitFromPassenger 是否由乘客主动离开。
     * @param actorIsBeingDestroyed Actor是否正在被销毁。
     * @param switchingVehicles 是否正在切换载具。
     * @param isBeingTeleported 是否因为传送而停止骑乘。
     */
    MCAPI void
    stopRiding(bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles, bool isBeingTeleported);

    /**
     * @brief 同步地设置尺寸。
     * @param w 宽度。
     * @param h 高度。
     */
    MCAPI void synchronousSetSize(float w, float h);

    /**
     * @brief 将乘客传送到指定位置。
     * @param pos 目标位置。
     * @param cause 原因。
     * @param entityType 实体类型。
     */
    MCAPI void teleportPassengersTo(::Vec3 const& pos, int cause, int entityType);

    /**
     * @brief 对Actor进行tick更新。
     * @param region 所在的方块源。
     * @return 如果tick成功，返回true。
     */
    MCAPI bool tick(::BlockSource& region);

    /**
     * @brief Tick方块伤害（如站在岩浆块上）。
     */
    MCAPI void tickBlockDamage();

    /**
     * @brief Tick拴绳逻辑。
     */
    MCAPI void tickLeash();

    /**
     * @brief 触发Actor被移除的事件。
     */
    MCAPI void triggerActorRemovedEvent();

    /**
     * @brief 尝试获取最适合装备指定物品的槽位。
     * @param item 物品描述符。
     * @return 返回槽位ID的可选值。
     */
    MCAPI ::std::optional<int> tryGetEquippableSlotForItem(::ItemDescriptor item) const;

    /**
     * @brief 尝试将Actor传送到指定位置。
     * @param pos 目标位置。
     * @param landOnBlock 是否必须降落在方块上。
     * @param avoidLiquid 是否避开液体。
     * @param cause 原因。
     * @param entityType 实体类型。
     * @return 如果传送成功，返回true。
     */
    MCAPI bool tryTeleportTo(::Vec3 const& pos, bool landOnBlock, bool avoidLiquid, int cause, int entityType);

    /**
     * @brief 更新Actor的描述。
     */
    MCAPI void updateDescription();

    /**
     * @brief 更新Actor在方块内部的状态。
     */
    MCAPI void updateInsideBlock();

    /**
     * @brief 更新Actor的隐身状态。
     */
    MCAPI void updateInvisibilityStatus();

    /**
     * @brief 更新Molang变量。
     * @param renderParams 渲染参数。
     */
    MCAPI void updateMolangVariables(::RenderParams& renderParams);

    /**
     * @brief 更新ticking相关的数据。
     */
    MCAPI void updateTickingData();

    /**
     * @brief 更新Actor在水中的状态。
     */
    MCAPI void updateWaterState();

    /**
     * @brief 使Actor晃动（如受击）。
     */
    MCAPI void wobble();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    /**
     * @brief 根据输入相对移动。
     * @param posDelta 位置增量引用。
     * @param yRotDegrees Y轴旋转角度。
     * @param xa 前后移动输入。
     * @param ya 上下移动输入。
     * @param za 左右移动输入。
     * @param speed 速度。
     */
    MCAPI static void _moveRelative(::Vec3& posDelta, float yRotDegrees, float xa, float ya, float za, float speed);

    /**
     * @brief 获取指定位置下方的方块位置。
     * @param pos 位置。
     * @param box 碰撞箱。
     * @param region 方块源。
     * @param other 其他碰撞形状接口。
     * @return 返回站立的方块位置。
     */
    MCAPI static ::BlockPos getBlockPosCurrentlyStandingOn(
        ::Vec3 const&                                      pos,
        ::AABB                                             box,
        ::IConstBlockSource const&                         region,
        ::optional_ref<::GetCollisionShapeInterface const> other
    );

    /**
     * @brief 从效果列表中获取指定的药水效果。
     * @param effects 效果列表。
     * @param effect 要查找的效果。
     * @return 返回效果实例的指针，如果找不到则返回nullptr。
     */
    MCAPI static ::MobEffectInstance const*
    getEffect(::std::vector<::MobEffectInstance> const& effects, ::MobEffect const& effect);

    /**
     * @brief 获取插值计算后的旋转角度。
     * @param prevRot 上一帧的旋转。
     * @param rot 当前帧的旋转。
     * @param a 插值系数。
     * @return 返回插值后的旋转。
     */
    MCAPI static ::Vec2 getInterpolatedRotation(::Vec2 const& prevRot, ::Vec2 const& rot, float a);

    /**
     * @brief 获取在指定液体中的碰撞箱。
     * @param aabb 原始碰撞箱。
     * @param liquidType 液体类型。
     * @return 返回在液体中的碰撞箱。
     */
    MCAPI static ::AABB getLiquidAABB(::AABB const& aabb, ::MaterialType liquidType);

    /**
     * @brief 获取插值计算后的视线向量。
     * @param prevRot 上一帧的旋转。
     * @param rot 当前帧的旋转。
     * @param a 插值系数。
     * @return 返回插值后的视线向量。
     */
    MCAPI static ::Vec3 getViewVector(::Vec2 const& prevRot, ::Vec2 const& rot, float a);

    /**
     * @brief 检查一个实体是否不可移动。
     * @param entity 实体上下文。
     * @return 如果不可移动，返回true。
     */
    MCAPI static bool isImmobile(::EntityContext const& entity);

    /**
     * @brief 尝试从严格实体上下文获取Actor指针。
     * @param entity 严格实体上下文。
     * @param registry 实体注册表。
     * @param includeRemoved 是否包含已移除的实体。
     * @return 返回Actor指针，如果找不到则返回nullptr。
     */
    MCAPI static ::Actor*
    tryGetFromEntity(::StrictEntityContext const& entity, ::EntityRegistry& registry, bool includeRemoved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ILevel& level, ::EntityContext& entityContext);

    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
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
    MCAPI bool $hasComponent(::HashedString const& name) const;

    MCAPI void $outOfWorld();

    MCFOLD void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCFOLD void $reloadHardcodedClient(::ActorInitializationMethod);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const&);

    MCAPI void $reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $_serverInitItemStackIds();

    MCAPI void $_doInitialMove();

    MCFOLD void $resetUserPos(::ActorResetRule);

    MCAPI ::ActorType $getOwnerEntityType();

    MCAPI void $remove();

    MCAPI ::Vec3 $getFiringPos() const;

    MCAPI float $getInterpolatedBodyRot(float a) const;

    MCFOLD float $getInterpolatedHeadRot(float) const;

    MCFOLD float $getInterpolatedBodyYaw(float) const;

    MCAPI float $getYawSpeedInDegreesPerSecond() const;

    MCFOLD ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCAPI bool $isFireImmune() const;

    MCAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCAPI bool $canDisableShield();

    MCAPI void $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int, int, bool keepVelocity);

    MCAPI void $lerpMotion(::Vec3 const& delta);

    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $passengerTick();

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $addPassenger(::Actor& passenger);

    MCAPI ::std::string $getEntityLocNameString() const;

    MCAPI bool $isInvisible() const;

    MCAPI bool $canShowNameTag() const;

    MCAPI ::std::string $getFormattedNameTag() const;

    MCFOLD ::mce::Color $getNameTagTextColor() const;

    MCAPI float $getShadowRadius() const;

    MCFOLD ::Vec3 $getHeadLookVector(float a) const;

    MCFOLD bool $canInteractWithOtherEntitiesInGame() const;

    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD void $playerTouch(::Player&);

    MCFOLD bool $isImmobile() const;

    MCAPI bool $isSilentObserver() const;

    MCFOLD bool $isSleeping() const;

    MCFOLD void $setSleeping(bool);

    MCAPI void $setSneaking(bool value);

    MCFOLD bool $isBlocking() const;

    MCFOLD bool $isDamageBlocked(::ActorDamageSource const&) const;

    MCFOLD bool $isAlive() const;

    MCFOLD bool $isOnFire() const;

    MCFOLD bool $isSurfaceMob() const;

    MCFOLD bool $isTargetable() const;

    MCAPI void $setTarget(::Actor* entity);

    MCFOLD bool $isValidTarget(::Actor*) const;

    MCAPI void $performRangedAttack(::Actor& target, float);

    MCAPI void $setOwner(::ActorUniqueID const ownerId);

    MCFOLD void $setSitting(bool value);

    MCFOLD void $onTame();

    MCFOLD void $onFailedTame();

    MCAPI void $setStanding(bool value);

    MCAPI bool $canPowerJump() const;

    MCAPI bool $isEnchanted() const;

    MCAPI void $playAmbientSound();

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI bool $doFireHurt(int amount);

    MCAPI void $onLightningHit();

    MCAPI void $feed(int itemId);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD ::HashedString const& $getActorRendererId() const;

    MCAPI void $despawn();

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCFOLD ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    MCFOLD int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    MCFOLD float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;

    MCFOLD void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCAPI ::ItemStack const& $getCarriedItem() const;

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI ::ItemStack const& $getEquippedTotem() const;

    MCAPI bool $consumeTotem();

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD ::HashedString const& $queryEntityRenderer() const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCFOLD bool $canFreeze() const;

    MCAPI void $handleInsidePortal(::BlockPos const& portalPos);

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void $changeDimension(::DimensionType toId);

    MCFOLD void $changeDimension(::ChangeDimensionPacket const&);

    MCFOLD ::ActorUniqueID $getControllingPlayer() const;

    MCFOLD float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCFOLD bool $canPickupItem(::ItemStack const&) const;

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCFOLD bool $inCaravan() const;

    MCAPI void $sendMotionPacketIfNeeded();

    MCFOLD bool $canSynchronizeNewEntity() const;

    MCAPI void $startSwimming();

    MCAPI void $stopSwimming();

    MCFOLD void $buildDebugInfo(::std::string&) const;

    MCAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;

    MCFOLD int $getDeathTime() const;

    MCAPI bool $canBeAffected(uint id) const;

    MCAPI bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    MCAPI void $onEffectRemoved(::MobEffectInstance& effect);

    MCAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCAPI ::AnimationComponent& $getAnimationComponent();

    MCAPI void $openContainerComponent(::Player& player);

    MCFOLD void $swing();

    MCAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo);

    MCAPI float $getMapDecorationRotation() const;

    MCAPI float $getPassengerYRotation(::Actor const& passenger) const;

    MCAPI bool $add(::ItemStack& item);

    MCAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCAPI bool $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const&);

    MCFOLD bool $canDestroyBlock(::Block const&) const;

    MCFOLD void $setAuxValue(int);

    MCFOLD void $renderDebugServerState(::Options const&);

    MCAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $shouldDropDeathLoot() const;

    MCAPI void $applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    MCFOLD void $onPush(::Actor&);

    MCFOLD ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCFOLD ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCFOLD bool $hasDiedBefore() const;

    MCFOLD void $doEnterWaterSplashEffect();

    MCFOLD void $doExitWaterSplashEffect();

    MCAPI void $doWaterSplashEffect();

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool, bool);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

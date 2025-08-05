#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/BuiltInMobComponents.h"
#include "mc/world/actor/MobSpawnMethod.h"
#include "mc/world/actor/TravelType.h"
#include "mc/world/item/ClockSpriteCalculator.h"
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorDamageSource;
class ActorDefinitionGroup;
class BaseAttributeMap;
class Block;
class BodyControl;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class HashedString;
class ItemStack;
class ListTag;
class Options;
class SaveContext;
class SynchedActorDataWriter;
class Vec3;
struct ActorDefinitionIdentifier;
struct JumpPreventionResult;
struct LegacyGoalDefinition;
struct VariantParameterList;
namespace mce { class UUID; }
// clang-format on

class Mob : public ::Actor {
public:
    /**
     * @brief 刷新生物的物品栏。
     * 通常用于在服务器上修改物品栏后，强制将更新同步到客户端。
     */
    LLAPI void refreshInventory();

    /**
     * @brief 尝试从一个实体上下文（EntityContext）获取 Mob 指针。
     * @param entity 实体上下文。
     * @param includeRemoved 是否包含已标记为移除的生物。
     * @return 如果成功找到并且该实体是 Mob 或其子类，返回 Mob 指针；否则返回 nullptr。
     */
    LLAPI static ::Mob* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mHurtDir;                       // 受伤方向（偏航角）
    ::ll::TypedStorage<4, 4, float>                      mOTilt;                         // 上一帧的身体倾斜度（用于渲染插值）
    ::ll::TypedStorage<4, 4, float>                      mTilt;                          // 当前的身体倾斜度
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mCompassSpriteCalc;             // 指南针精灵图计算器
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mRecoveryCompassSpriteCalc;     // 回收指南针（重生指针）精灵图计算器
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>   mClockSpriteCalc;               // 时钟精灵图计算器
    ::ll::TypedStorage<4, 4, float>                      mAttackAnim;                    // 攻击动画的进度
    ::ll::TypedStorage<4, 4, int>                        mSwingTime;                     // 挥臂动画的剩余时间
    ::ll::TypedStorage<8, 24, ::BuiltInMobComponents>    mBuiltInMobComponents;          // 生物内置的组件集合
    ::ll::TypedStorage<4, 4, float>                      mMovementComponentCurrentSpeed; // 移动组件当前的实际速度
    ::ll::TypedStorage<1, 1, bool>                       mSwinging;                      // 是否正在进行挥臂动画
    ::ll::TypedStorage<1, 1, bool>                       mSurfaceMob;                    // 是否为地表生物
    ::ll::TypedStorage<1, 1, bool>                       mNaturallySpawned;              // 是否为自然生成
    ::ll::TypedStorage<1, 1, bool>                       mWantsToBeJockey;               // 是否想要成为一个“骑士”（如蜘蛛骑士中的蜘蛛）
    ::ll::TypedStorage<1, 1, bool>                       mHasBoundOrigin;                // 是否有绑定的原点（家）
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>      mActuallyDoKnockbackOrNotReallyBadHackDoNotUse; // 一个控制是否执行击退的内部开关（名字表明这是一个临时或糟糕的解决方案）
    ::ll::TypedStorage<1, 1, ::MobSpawnMethod>           mSpawnMethod;                   // 生物的生成方式（如刷怪蛋、自然生成等）
    ::ll::TypedStorage<1, 1, bool>                       mCreateAiOnReload;              // 是否在重载时创建AI
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mCaravanHead;                   // 所在商队的头部生物ID（如羊驼商队）
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mCaravanTail;                   // 所在商队的尾部生物ID
    ::ll::TypedStorage<4, 4, float>                      mOAttackAnim;                   // 上一帧的攻击动画进度
    ::ll::TypedStorage<4, 12, ::BlockPos>                mBoundOrigin;                   // 绑定的原点（家）坐标
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mTargetCaptainId;               // 目标袭击队长的ID
    // NOLINTEND

public:
    // prevent constructor by default
    Mob();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    /**
     * @brief 初始化生物的组件，重写自 Actor。
     */
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 3
    /**
     * @brief 在客户端从硬编码的属性重新加载生物，重写自 Actor。
     */
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 2
    /**
     * @brief 从硬编码的属性重新加载生物，重写自 Actor。
     */
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 8
    /**
     * @brief 生物的析构函数，重写自 Actor。
     */
    virtual ~Mob() /*override*/;

    // vIndex: 138
    /**
     * @brief 使生物被击退。
     * @param source 击退源Actor，可能为nullptr。
     * @param dmg 伤害值，可能影响击退强度。
     * @param xd, zd 击退的XZ方向分量。
     * @param horizontalPower 水平击退强度。
     * @param verticalPower 垂直击退强度。
     * @param heightCap 垂直击退的最大高度。
     */
    virtual void
    knockback(::Actor*, int, float xd, float zd, float horizontalPower, float verticalPower, float heightCap);

    // vIndex: 122
    /**
     * @brief 杀死生物，重写自 Actor。
     */
    virtual void kill() /*override*/;

    // vIndex: 123
    /**
     * @brief 使生物死亡，重写自 Actor。
     */
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 124
    /**
     * @brief 检查生物死亡时是否应该掉落战利品，重写自 Actor。
     */
    virtual bool shouldDropDeathLoot() const /*override*/;

    // vIndex: 139
    /**
     * @brief 播放生成时的动画效果（如粒子、声音）。
     */
    virtual void spawnAnim();

    // vIndex: 47
    /**
     * @brief 检查生物是否存活，重写自 Actor。
     */
    virtual bool isAlive() const /*override*/;

    // vIndex: 42
    /**
     * @brief 检查生物是否正在睡觉，重写自 Actor。
     */
    virtual bool isSleeping() const /*override*/;

    // vIndex: 43
    /**
     * @brief 设置生物的睡眠状态，重写自 Actor。
     */
    virtual void setSleeping(bool val) /*override*/;

    // vIndex: 45
    /**
     * @brief 检查生物是否正在格挡，重写自 Actor。
     */
    virtual bool isBlocking() const /*override*/;

    // vIndex: 140
    /**
     * @brief 设置生物的冲刺状态。
     * @param shouldSprint 是否应该冲刺。
     */
    virtual void setSprinting(bool shouldSprint);

    // vIndex: 96
    /**
     * @brief 检查生物是否能被拉入载具，重写自 Actor。
     */
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 141
    /**
     * @brief 获取生物的死亡音效。
     * @return 返回 LevelSoundEvent 枚举值。
     */
    virtual ::SharedTypes::Legacy::LevelSoundEvent getDeathSound();

    // vIndex: 142
    /**
     * @brief 获取生物的移动速度。
     * @return 返回速度值。
     */
    virtual float getSpeed() const;

    // vIndex: 143
    /**
     * @brief 设置生物的移动速度。
     * @param speed 新的速度值。
     */
    virtual void setSpeed(float speed);

    // vIndex: 16
    /**
     * @brief 获取生物的偏航角转动速度，重写自 Actor。
     */
    virtual float getYawSpeedInDegreesPerSecond() const /*override*/;

    // vIndex: 24
    /**
     * @brief 生物的常规tick函数，重写自 Actor。
     */
    virtual void normalTick() /*override*/;

    // vIndex: 25
    /**
     * @brief 生物的基础tick函数，重写自 Actor。
     */
    virtual void baseTick() /*override*/;

    // vIndex: 144
    /**
     * @brief 当受到伤害时触发的效果（如播放声音、显示红色）。
     * @param source 伤害来源。
     * @param damage 伤害值。
     * @param knock 是否击退。
     * @param ignite 是否点燃。
     */
    virtual void hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 66
    /**
     * @brief 受到火焰伤害，重写自 Actor。
     */
    virtual bool doFireHurt(int amount) /*override*/;

    // vIndex: 145
    /**
     * @brief 执行一帧的AI逻辑。
     */
    virtual void aiStep();

    // vIndex: 146
    /**
     * @brief 推动周围的Actor。
     */
    virtual void pushActors();

    // vIndex: 147
    /**
     * @brief 检查生物是否满足生成规则（如光照、高度等）。
     */
    virtual bool checkSpawnRules(bool);

    // vIndex: 148
    /**
     * @brief 检查生成位置是否有障碍物。
     */
    virtual bool checkSpawnObstruction() const;

    // vIndex: 28
    /**
     * @brief 添加乘客，重写自 Actor。
     */
    virtual void addPassenger(::Actor& newPassenger) /*override*/;

    // vIndex: 27
    /**
     * @brief 开始骑乘，重写自 Actor。
     */
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 69
    /**
     * @brief 处理实体事件，重写自 Actor。
     */
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 149
    /**
     * @brief 获取物品的使用持续时间。
     */
    virtual int getItemUseDuration() const;

    // vIndex: 150
    /**
     * @brief 获取物品使用开始阶段的进度。
     */
    virtual float getItemUseStartupProgress() const;

    // vIndex: 151
    /**
     * @brief 获取物品使用间隔的进度。
     */
    virtual float getItemUseIntervalProgress() const;

    // vIndex: 111
    /**
     * @brief 挥臂，重写自 Actor。
     */
    virtual void swing() /*override*/;

    // vIndex: 152
    /**
     * @brief 获取头部最大的俯仰角。
     */
    virtual float getMaxHeadXRot();

    // vIndex: 40
    /**
     * @brief 检查生物是否不可移动，重写自 Actor。
     */
    virtual bool isImmobile() const /*override*/;

    // vIndex: 19
    /**
     * @brief 攻击被盾牌格挡时调用，重写自 Actor。
     */
    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker) /*override*/;

    // vIndex: 51
    /**
     * @brief 设置攻击目标，重写自 Actor。
     */
    virtual void setTarget(::Actor* target) /*override*/;

    // vIndex: 53
    /**
     * @brief 攻击另一个Actor，重写自 Actor。
     */
    virtual bool attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&) /*override*/;

    // vIndex: 153
    /**
     * @brief 检查是否与另一个生物是盟友关系。
     * @param mob 另一个生物。
     * @return 如果是盟友，返回true。
     */
    virtual bool isAlliedTo(::Mob*);

    // vIndex: 154
    /**
     * @brief 对目标造成伤害的核心逻辑。
     * @param target 目标Actor。
     * @param cause 伤害原因。
     * @return 如果成功造成伤害，返回true。
     */
    virtual bool doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);

    // vIndex: 65
    /**
     * @brief 获取由方块造成的伤害类型，重写自 Actor。
     */
    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const&) const /*override*/;

    // vIndex: 97
    /**
     * @brief 检查生物是否在商队中，重写自 Actor。
     */
    virtual bool inCaravan() const /*override*/;

    // vIndex: 155
    /**
     * @brief 获取生物的盔甲值。
     * @return 返回盔甲点数。
     */
    virtual int getArmorValue() const;

    // vIndex: 156
    /**
     * @brief 对指定的盔甲槽位造成伤害。
     * @param source 伤害来源。
     * @param dmg 伤害值。
     * @param hurtSlots 一个位集，表示哪些槽位需要受伤。
     */
    virtual void hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots);

    // vIndex: 157
    /**
     * @brief 设置指定盔甲槽位的损坏物品。
     */
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    // vIndex: 158
    /**
     * @brief 发送盔甲损坏信息给客户端。
     */
    virtual void sendArmorDamage(::std::bitset<5> const);

    // vIndex: 159
    /**
     * @brief 发送指定槽位的盔甲信息给客户端。
     */
    virtual void sendArmor(::std::bitset<5> const armorSlots);

    // vIndex: 73
    /**
     * @brief 获取盔甲材质类型，重写自 Actor。
     */
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const /*override*/;

    // vIndex: 74
    /**
     * @brief 获取盔甲纹理索引，重写自 Actor。
     */
    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const /*override*/;

    // vIndex: 75
    /**
     * @brief 获取盔甲颜色，重写自 Actor。
     */
    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const /*override*/;

    // vIndex: 160
    /**
     * @brief 获取所有手持物品（主手和副手）。
     * @return 返回一个包含物品指针的向量。
     */
    virtual ::std::vector<::ItemStack const*> getAllHand() const;

    // vIndex: 161
    /**
     * @brief 获取所有装备（盔甲和手持物品）。
     * @return 返回一个包含物品指针的向量。
     */
    virtual ::std::vector<::ItemStack const*> getAllEquipment() const;

    // vIndex: 104
    /**
     * @brief 获取死亡时间，重写自 Actor。
     */
    virtual int getDeathTime() const /*override*/;

    // vIndex: 163
    /**
     * @brief 死亡时根据伤害来源掉落装备。
     */
    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source);

    // vIndex: 162
    /**
     * @brief 死亡时掉落装备。
     */
    virtual void dropEquipmentOnDeath();

    // vIndex: 164
    /**
     * @brief 死亡时清除带有消失诅咒的物品。
     */
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 165
    /**
     * @brief 发送物品栏信息给客户端。
     */
    virtual void sendInventory(bool);

    // vIndex: 102
    /**
     * @brief 构建调试信息，重写自 Actor。
     */
    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    // vIndex: 13
    /**
     * @brief 获取插值的身体旋转，重写自 Actor。
     */
    virtual float getInterpolatedBodyRot(float a) const /*override*/;

    // vIndex: 14
    /**
     * @brief 获取插值的头部旋转，重写自 Actor。
     */
    virtual float getInterpolatedHeadRot(float a) const /*override*/;

    // vIndex: 15
    /**
     * @brief 获取插值的身体偏航角，重写自 Actor。
     */
    virtual float getInterpolatedBodyYaw(float a) const /*override*/;

    // vIndex: 49
    /**
     * @brief 检查是否是地表生物，重写自 Actor。
     */
    virtual bool isSurfaceMob() const /*override*/;

    // vIndex: 166
    /**
     * @brief 计算经过附魔减伤后的最终伤害。
     */
    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;

    // vIndex: 167
    /**
     * @brief 创建生物的AI目标。
     * @return 如果成功创建，返回true。
     */
    virtual bool createAIGoals();

    // vIndex: 168
    /**
     * @brief 当生物出生时（如繁殖）调用。
     * @param parentA 父母A。
     * @param parentB 父母B。
     */
    virtual void onBorn(::Actor&, ::Actor&);

    // vIndex: 169
    /**
     * @brief 设置指定装备槽位的物品。
     * @return 如果设置成功，返回true。
     */
    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    // vIndex: 170
    /**
     * @brief 设置生物是否正在进入/离开坐下状态（用于平滑动画）。
     */
    virtual void setTransitioningSitting(bool value);

    // vIndex: 0
    /**
     * @brief 检查是否拥有组件，重写自 Actor。
     */
    virtual bool hasComponent(::HashedString const& name) const /*override*/;

    // vIndex: 88
    /**
     * @brief 检查是否能用传送门切换维度，重写自 Actor。
     */
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 21
    /**
     * @brief 传送到指定位置，重写自 Actor。
     */
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 171
    /**
     * @brief 获取AI行走目标的价值（用于路径规划）。
     */
    virtual float _getWalkTargetValue(::BlockPos const&);

    // vIndex: 172
    /**
     * @brief 检查在禁止生物生成（disallow-mob-spawning）时是否可以存在。
     */
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 60
    /**
     * @brief 检查是否能蓄力跳跃，重写自 Actor。
     */
    virtual bool canPowerJump() const /*override*/;

    // vIndex: 76
    /**
     * @brief 设置装备槽位的物品，重写自 Actor。
     */
    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 121
    /**
     * @brief 渲染服务端的调试状态，重写自 Actor。
     */
    virtual void renderDebugServerState(::Options const& options) /*override*/;

    // vIndex: 85
    /**
     * @brief 检查是否能被冰冻，重写自 Actor。
     */
    virtual bool canFreeze() const /*override*/;

    // vIndex: 173
    /**
     * @brief 执行死亡过程中的tick逻辑（如死亡动画）。
     */
    virtual void tickDeath();

    // vIndex: 137
    /**
     * @brief 添加额外的存档数据，重写自 Actor。
     */
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    /**
     * @brief 读取额外的存档数据，重写自 Actor。
     */
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 174
    /**
     * @brief 初始化身体控制器（用于头部和身体的独立旋转）。
     * @return 返回一个 BodyControl 的 unique_ptr。
     */
    virtual ::std::unique_ptr<::BodyControl> initBodyControl();

    // vIndex: 92
    /**
     * @brief 对Actor造成摔落伤害，重写自 Actor。
     */
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 1
    /**
     * @brief 掉出世界，重写自 Actor。
     */
    virtual void outOfWorld() /*override*/;

    // vIndex: 135
    /**
     * @brief 核心受伤处理逻辑，重写自 Actor。
     */
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool) /*override*/;

    // vIndex: 175
    /**
     * @brief 新的服务端AI步进逻辑。
     */
    virtual void newServerAiStep();

    // vIndex: 7
    /**
     * @brief 执行初始移动，重写自 Actor。
     */
    virtual void _doInitialMove() /*override*/;

    // vIndex: 176
    /**
     * @brief 获取用于生成检查的、调整后的碰撞箱。
     */
    virtual ::AABB _getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    /**
     * @brief Mob的构造函数。
     * @param definitions Actor定义组。
     * @param definitionName Mob的定义标识符。
     * @param entityContext 实体上下文。
     */
    MCAPI
    Mob(::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext);

    /**
     * @brief 【内部函数】添加Mob内置的组件。
     * @return 返回添加的内置组件。
     */
    MCAPI ::BuiltInMobComponents _addBuiltInMobComponents();

    /**
     * @brief 【内部函数】执行灵魂速泳的粒子效果。
     */
    MCAPI void _doSoulSpeedParticleEffect();

    /**
     * @brief 【内部函数】初始化硬编码的组件。
     * @param isClientSide 是否为客户端。
     * @return 如果初始化成功，返回true。
     */
    MCAPI bool _initHardCodedComponents(bool isClientSide);

    /**
     * @brief 【内部函数】初始化Mob。
     * @param entityContext 实体上下文。
     * @param isClientSide 是否为客户端。
     */
    MCAPI void _initialize(::EntityContext& entityContext, bool isClientSide);

    /**
     * @brief 【内部函数】处理灵魂速泳的逻辑（如消耗耐久）。
     */
    MCAPI void _processSoulSpeed();

    /**
     * @brief 【内部函数】注册Mob的基本属性（如生命值、速度等）。
     */
    MCAPI void _registerMobAttributes();

    /**
     * @brief 【内部函数】保存盔甲数据到NBT。
     * @param saveContext 保存上下文。
     * @return 返回一个包含盔甲数据的ListTag的unique_ptr。
     */
    MCAPI ::std::unique_ptr<::ListTag> _saveArmor(::SaveContext const& saveContext) const;

    /**
     * @brief 【内部函数】验证属性是否有效。
     */
    MCAPI void _verifyAttributes();

    /**
     * @brief 根据移动类型计算相对移动速度。
     * @param travelType 移动类型（行走、游泳、飞行等）。
     * @return 返回计算出的速度。
     */
    MCAPI float calcMoveRelativeSpeed(::TravelType travelType);

    /**
     * @brief 检查是否应触发受击后短暂的伤害免疫。
     * @param damageDifference 伤害差值。
     * @param source 伤害来源。
     * @return 如果应触发免疫，返回true。
     */
    MCAPI bool checkForPostHitDamageImmunity(float damageDifference, ::ActorDamageSource const& source);

    /**
     * @brief 检查并使用不死图腾来防止死亡。
     * @param killingDamage 致命的伤害来源。
     * @return 如果成功使用图腾，返回true。
     */
    MCAPI bool checkTotemDeathProtection(::ActorDamageSource const& killingDamage);

    /**
     * @brief 清空主手槽位。
     */
    MCAPI void clearMainHandSlot();

    /**
     * @brief 当容器（物品栏）发生变化时调用。
     * @param iSlot 发生变化的槽位索引。
     */
    MCAPI void containerChanged(int iSlot);

    /**
     * @brief 创建AI。
     * @param goals AI目标的定义列表。
     */
    MCAPI void createAI(::std::vector<::LegacyGoalDefinition> goals);

    /**
     * @brief 掉落"袋子"（可能是指特定生物的掉落物）。
     */
    MCAPI void dropBags();

    /**
     * @brief 掉落容器内的所有物品。
     */
    MCAPI void dropContainer();

    /**
     * @brief 发出因障碍物阻止跳跃的事件。
     * @param pos 障碍物位置。
     */
    MCAPI void emitJumpPreventedEvent(::BlockPos const& pos);

    /**
     * @brief 执行冰霜行者效果（在脚下生成霜冰）。
     */
    MCAPI void frostWalk();

    /**
     * @brief 获取盔甲覆盖的百分比。
     * @return 返回0.0到1.0之间的浮点数。
     */
    MCAPI float getArmorCoverPercentage() const;

    /**
     * @brief 获取盔甲类型的哈希值。
     * @return 返回哈希值。
     */
    MCAPI int getArmorTypeHash();

    /**
     * @brief 获取攻击动画的进度（插值）。
     * @param a 插值系数。
     * @return 返回插值后的攻击动画进度。
     */
    MCAPI float getAttackAnim(float a);

    /**
     * @brief 获取商队的大小。
     * @return 返回商队中生物的数量。
     */
    MCAPI int getCaravanSize() const;

    /**
     * @brief 获取当前挥臂动画的持续时间。
     * @return 返回持续时间（ticks）。
     */
    MCAPI int getCurrentSwingDuration();

    /**
     * @brief 获取经过伤害感应组件调整后的伤害值。
     * @param source 伤害来源。
     * @param damage 原始伤害值。
     * @return 返回调整后的伤害值。
     */
    MCAPI float getDamageAfterDamageSensorComponentAdjustments(::ActorDamageSource const& source, float damage);

    /**
     * @brief 获取经过抗性效果减免后的伤害值。
     * @param source 伤害来源。
     * @param damage 原始伤害值。
     * @return 返回减免后的伤害值。
     */
    MCAPI float getDamageAfterResistanceEffect(::ActorDamageSource const& source, float damage) const;

    /**
     * @brief 获取伤害原因。
     * @return 返回ActorDamageCause。
     */
    MCAPI ::SharedTypes::Legacy::ActorDamageCause getDamageCause() const;

    /**
     * @brief 获取进食计数器。
     * @return 返回计数器值。
     */
    MCAPI int getEatCounter() const;

    /**
     * @brief 获取预期的摔落伤害。
     * @param distance 摔落距离。
     * @param multiplier 伤害倍率。
     * @return 返回预期的伤害值。
     */
    MCAPI float getExpectedFallDamage(float distance, float multiplier) const;

    /**
     * @brief 获取商队的第一个（领头）生物。
     * @return 返回商队头的Mob指针。
     */
    MCAPI ::Mob* getFirstCaravanHead();

    /**
     * @brief 根据伤害原因获取受伤音效。
     * @param cause 伤害原因。
     * @return 返回LevelSoundEvent。
     */
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent getHurtSound(::SharedTypes::Legacy::ActorDamageCause cause);

    /**
     * @brief 获取指定装备槽位的物品。
     * @param slot 装备槽位。
     * @return 返回该槽位物品的const引用。
     */
    MCAPI ::ItemStack const& getItemSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

    /**
     * @brief 获取跳跃提升效果的放大器值。
     * @return 返回效果值。
     */
    MCAPI float getJumpEffectAmplifierValue();

    /**
     * @brief 获取跳跃阻止结果。
     * @return 返回JumpPreventionResult。
     */
    MCAPI ::JumpPreventionResult getJumpPrevention();

    /**
     * @brief 获取近战攻击的额外击退加成。
     * @return 返回加成值。
     */
    MCAPI int getMeleeKnockbackBonus();

    /**
     * @brief 获取韧性值（来自盔甲）。
     * @return 返回韧性值。
     */
    MCAPI int getToughnessValue() const;

    /**
     * @brief 获取当前的移动类型。
     * @return 返回TravelType。
     */
    MCAPI ::TravelType getTravelType();

    /**
     * @brief 获取身体的Y轴旋转。
     * @return 返回旋转角度。
     */
    MCAPI float getYBodyRotation() const;

    /**
     * @brief 对盔甲造成伤害。
     * @param source 伤害来源。
     * @param dmg 伤害值。
     */
    MCAPI void hurtArmor(::ActorDamageSource const& source, int dmg);

    /**
     * @brief 检查生物是否在冲刺。
     * @return 如果正在冲刺，返回true。
     */
    MCAPI bool isSprinting() const;

    /**
     * @brief 从地面跳跃。
     */
    MCAPI void jumpFromGround();

    /**
     * @brief 使生物被击退（非虚函数版本）。
     * @param source 击退源。
     * @param dmg 伤害。
     * @param xd, zd XZ方向。
     * @param horizontalPower 水平强度。
     * @param verticalPower 垂直强度。
     */
    MCAPI void knockback(::Actor* source, int dmg, float xd, float zd, float horizontalPower, float verticalPower);

    /**
     * @brief 使生物朝向一个目标。
     * @param lookAt 目标Actor。
     * @param yMax Y轴最大转动角度。
     * @param xMax X轴最大转动角度。
     */
    MCAPI void lookAt(::Actor* lookAt, float yMax, float xMax);

    /**
     * @brief 移除一个速度修改器。
     * @param attributeID 属性修改器的UUID。
     */
    MCAPI void removeSpeedModifier(::mce::UUID const& attributeID);

    /**
     * @brief 重置所有属性到默认值。
     */
    MCAPI void resetAttributes();

    /**
     * @brief 保存副手物品到NBT。
     * @param saveContext 保存上下文。
     * @return 返回包含副手物品数据的ListTag的unique_ptr。
     */
    MCAPI ::std::unique_ptr<::ListTag> saveOffhand(::SaveContext const& saveContext) const;

    /**
     * @brief 发送指定盔甲槽位的数据给客户端。
     * @param slot 盔甲槽位。
     */
    MCAPI void sendArmorSlot(::SharedTypes::Legacy::ArmorSlot slot);

    /**
     * @brief 设置进食计数器。
     * @param value 新的计数值。
     */
    MCAPI void setEatCounter(int value);

    /**
     * @brief 设置跳跃的tick计数。
     * @param ticks tick数。
     */
    MCAPI void setJumpTicks(int ticks);

    /**
     * @brief 设置身体的Y轴旋转。
     * @param rotation 旋转角度。
     */
    MCAPI void setYBodyRotation(float rotation);

    /**
     * @brief 设置当前和上一帧的身体Y轴旋转。
     * @param rotation 当前旋转。
     * @param oldRotation 上一帧旋转。
     */
    MCAPI void setYBodyRotations(float rotation, float oldRotation);

    /**
     * @brief 检查是否应该应用水的重力。
     * @return 如果应该，返回true。
     */
    MCAPI bool shouldApplyWaterGravity();

    /**
     * @brief 立即将身体旋转设置为指定值。
     * @param yBodyRot 目标身体旋转角度。
     */
    MCAPI void snapToYBodyRot(float yBodyRot);

    /**
     * @brief 立即将头部旋转设置为指定值。
     * @param yHeadRot 目标头部旋转角度。
     */
    MCAPI void snapToYHeadRot(float yHeadRot);

    /**
     * @brief 更新药水效果的视觉表现（如粒子效果）。
     */
    MCAPI void tickMobEffectsVisuals();

    /**
     * @brief 更新装备。
     */
    MCAPI void updateEquipment();

    /**
     * @brief 更新滑翔时鞘翅的耐久度。
     */
    MCAPI void updateGlidingDurability();
    // NOLINTEND
    // NOLINTEND


public:
    // static functions
    // NOLINTBEGIN
    /**
     * @brief 设置冲刺状态的静态方法。
     * @param attributes 属性表。
     * @param data 同步数据写入器。
     * @param shouldSprint 是否冲刺。
     */
    MCAPI static void setSprinting(::BaseAttributeMap& attributes, ::SynchedActorDataWriter data, bool shouldSprint);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& ASCEND_BLOCK_BY_JUMPING_SPEED(); // 跳上一个方块的速度
    MCAPI static float const& DEFAULT_GRAVITY();               // 默认重力
    MCAPI static float const& FRICTION_CONSTANT();             // 摩擦系数
    MCAPI static float const& FRICTION_CONSTANT_MODIFIED();    // 修改后的摩擦系数
    MCAPI static float const& FRICTION_MODIFIER();             // 摩擦修改器
    MCAPI static float const& GLIDING_FALL_RESET_DELTA();      // 滑翔时重置摔落距离的阈值
    MCAPI static float const& LADDER_CLIMB_SPEED();            // 爬梯子速度
    MCAPI static float const& SLOW_FALL_GRAVITY();             // 缓降效果的重力
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void
    $knockback(::Actor*, int, float xd, float zd, float horizontalPower, float verticalPower, float heightCap);

    MCAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $shouldDropDeathLoot() const;

    MCFOLD void $spawnAnim();

    MCAPI bool $isAlive() const;

    MCAPI bool $isSleeping() const;

    MCAPI void $setSleeping(bool val);

    MCAPI bool $isBlocking() const;

    MCAPI void $setSprinting(bool shouldSprint);

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getDeathSound();

    MCAPI float $getSpeed() const;

    MCAPI void $setSpeed(float speed);

    MCAPI float $getYawSpeedInDegreesPerSecond() const;

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool $doFireHurt(int amount);

    MCAPI void $aiStep();

    MCAPI void $pushActors();

    MCAPI bool $checkSpawnRules(bool);

    MCAPI bool $checkSpawnObstruction() const;

    MCAPI void $addPassenger(::Actor& newPassenger);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD int $getItemUseDuration() const;

    MCFOLD float $getItemUseStartupProgress() const;

    MCFOLD float $getItemUseIntervalProgress() const;

    MCAPI void $swing();

    MCAPI float $getMaxHeadXRot();

    MCAPI bool $isImmobile() const;

    MCAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCFOLD void $setTarget(::Actor* target);

    MCFOLD bool $isAlliedTo(::Mob*);

    MCAPI bool $inCaravan() const;

    MCAPI int $getArmorValue() const;

    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots);

    MCFOLD void $sendArmorDamage(::std::bitset<5> const);

    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);

    MCAPI ::std::vector<::ItemStack const*> $getAllHand() const;

    MCAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;

    MCAPI int $getDeathTime() const;

    MCAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);

    MCAPI void $dropEquipmentOnDeath();

    MCAPI void $clearVanishEnchantedItemsOnDeath();

    MCAPI void $sendInventory(bool);

    MCAPI void $buildDebugInfo(::std::string& out) const;

    MCAPI float $getInterpolatedBodyRot(float a) const;

    MCAPI float $getInterpolatedHeadRot(float a) const;

    MCAPI float $getInterpolatedBodyYaw(float a) const;

    MCAPI bool $isSurfaceMob() const;

    MCAPI float $getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;

    MCAPI bool $createAIGoals();

    MCFOLD void $onBorn(::Actor&, ::Actor&);

    MCAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCAPI void $setTransitioningSitting(bool value);

    MCAPI bool $hasComponent(::HashedString const& name) const;

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCFOLD float $_getWalkTargetValue(::BlockPos const&);

    MCAPI bool $canExistWhenDisallowMob() const;

    MCAPI bool $canPowerJump() const;

    MCAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCFOLD void $renderDebugServerState(::Options const& options);

    MCAPI bool $canFreeze() const;

    MCAPI void $tickDeath();

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI void $outOfWorld();

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool);

    MCFOLD void $newServerAiStep();

    MCAPI void $_doInitialMove();

    MCAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

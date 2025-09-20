#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Amplifier;
class Attribute;
class AttributeBuff;
class AttributeModifier;
class BaseAttributeMap;
class BaseGameVersion;
class CompoundTag;
class Experiments;
class InstantaneousAttributeBuff;
class TemporalAttributeBuff;
struct EffectDuration;
// clang-format on

// MobEffect 类定义了游戏中所有状态效果（如中毒、速度提升等）的基础行为和属性。
class MobEffect {
public:
    // MobEffect 的内部类型声明
    // clang-format off
    struct FactorCalculationData; // 前向声明一个内部结构体，用于处理随时间变化的因子计算（例如“黑暗”效果）
    // clang-format on

    // MobEffect 的内部类型定义
    // 属性增益对，将属性指针与一个 AttributeBuff 的共享指针配对
    using AttributeBuffPair = ::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeBuff>>;

    // 属性修改器对，将属性指针与一个 AttributeModifier 的共享指针配对
    using AttributeModPair = ::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeModifier>>;

    // 用于计算效果强度因子的数据结构，特别用于那些强度随时间动态变化的效果（如“黑暗”效果）。
    struct FactorCalculationData {
    public:
        // 成员变量
        // NOLINTBEGIN
        // 存储效果的内边距持续时间（可能用于效果开始或结束时的过渡）
        ::ll::TypedStorage<4, 4, int> mPaddingDuration;
        // 效果强度因子的起始值
        ::ll::TypedStorage<4, 4, float> mFactorStart;
        // 效果强度因子的目标值
        ::ll::TypedStorage<4, 4, float> mFactorTarget;
        // 效果强度因子的当前值
        ::ll::TypedStorage<4, 4, float> mFactorCurrent;
        // 更新因子值的函数，每tick调用
        ::ll::TypedStorage<8, 64, ::std::function<void(::MobEffect::FactorCalculationData&, ::EffectDuration)>>
            mUpdateFn;
        // 效果已经激活的游戏刻数
        ::ll::TypedStorage<4, 4, int> mTicksActive;
        // 上一帧的效果强度因子值
        ::ll::TypedStorage<4, 4, float> mFactorPreviousFrame;
        // 上一刻是否具有此效果
        ::ll::TypedStorage<1, 1, bool> mHadEffectLastTick;
        // 效果是否已经应用过
        ::ll::TypedStorage<1, 1, bool> mHadApplied;
        // NOLINTEND

    public:
        // 默认禁止构造函数
        FactorCalculationData(FactorCalculationData const&);
        FactorCalculationData();

    public:
        // 成员函数
        // NOLINTBEGIN
        // 赋值运算符
        MCNAPI ::MobEffect::FactorCalculationData& operator=(::MobEffect::FactorCalculationData const&);

        // 将数据保存到 CompoundTag (NBT) 中
        MCNAPI ::std::unique_ptr<::CompoundTag> save() const;

        // 析构函数
        MCNAPI ~FactorCalculationData();
        // NOLINTEND

    public:
        // 静态函数
        // NOLINTBEGIN
        // 从 CompoundTag (NBT) 中加载数据
        MCNAPI static ::MobEffect::FactorCalculationData load(::CompoundTag const* tag);
        // NOLINTEND

    public:
        // 析构函数 thunk (一种编译器生成的辅助函数)
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // 成员变量
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>      mId;        // 效果的唯一数字ID
    ::ll::TypedStorage<1, 1, bool>            mIsHarmful; // 效果是否为有害的（例如中毒 vs. 速度提升）
    ::ll::TypedStorage<4, 16, ::mce::Color>   mColor;     // 效果的颜色（用于UI和粒子效果）
    ::ll::TypedStorage<8, 48, ::HashedString> mParticleEffectId; // 效果的粒子效果ID
    ::ll::TypedStorage<8, 48, ::HashedString> mParticleEffectAmbientId; // 效果的环境粒子效果ID（当效果不明显时显示）
    ::ll::TypedStorage<8, 32, ::std::string> mDescriptionId;    // 效果的描述ID（用于本地化/翻译）
    ::ll::TypedStorage<4, 4, int>            mIcon;             // 效果在UI中显示的图标索引
    ::ll::TypedStorage<4, 4, float>          mDurationModifier; // 持续时间修正系数
    ::ll::TypedStorage<1, 1, bool>           mIsDisabled;       // 效果是否被禁用
    ::ll::TypedStorage<8, 32, ::std::string> mResourceName;     // 效果的资源名称（例如 "minecraft:speed"）
    ::ll::TypedStorage<8, 32, ::std::string> mIconName;         // 效果的图标资源名称
    ::ll::TypedStorage<1, 1, bool>           mEffectVisible;    // 效果在UI上是否可见
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>>
                                              mOnApplySound;  // 施加效果时播放的声音
    ::ll::TypedStorage<8, 48, ::HashedString> mComponentName; // 关联的组件名称，用于数据驱动
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>>
        mValueAmplifier; // 效果值的放大器（例如，伤害效果每级的增量）
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>> mDurationAmplifier; // 效果持续时间的放大器
    // 此效果应用的所有属性增益列表
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeBuff>>>>
        mAttributeBuffs;
    // 此效果应用的所有属性修改器列表
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeModifier>>>>
        mAttributeModifiers;
    // 用于动态因子计算的数据
    ::ll::TypedStorage<8, 96, ::MobEffect::FactorCalculationData> mFactorCalculationData;
    // NOLINTEND

public:
    // 默认禁止构造函数
    MobEffect();

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0 - 析构函数
    virtual ~MobEffect();

    // vIndex: 1 - 周期性应用效果的逻辑（对于持续性效果）
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    // vIndex: 2 - 当效果被移除时，移除其对属性的影响
    virtual void removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom);

    // vIndex: 3 - 当效果持续时间结束时调用
    virtual void onEffectExpired(::Actor&) const;

    // vIndex: 4 - 当带有此效果的实体死亡时调用
    virtual void onActorDied(::Actor&, int) const;

    // vIndex: 5 - 当带有此效果的实体受到伤害时调用
    virtual void onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;

    // vIndex: 6 - 应用瞬时效果的逻辑（例如瞬间治疗）
    virtual void
    applyInstantaneousEffect(::Actor* source, ::Actor* owner, ::Actor* target, int amplification, float scale) const;

    // vIndex: 7 - 效果是否是瞬时的
    virtual bool isInstantaneous() const;

    // vIndex: 8 - 根据效果等级（amplifier）和基础修改器，计算属性修改器的最终值
    virtual float getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    // 构造函数
    MCAPI MobEffect(
        uint                 id,           // 效果ID
        ::std::string const& resourceName, // 资源名称
        ::std::string const& locName,      // 本地化名称键
        bool                 isHarmful,    // 是否为有害效果
        int                  color,        // 颜色
        int                  icon,         // 图标索引
        ::std::string const& iconName,     // 图标名称
        bool                 drawParticles // 是否绘制粒子
    );

    // 创建一个瞬时属性增益
    MCAPI ::InstantaneousAttributeBuff
    _createInstantBuff(::AttributeBuff const& baseBuff, int amplification, float scale) const;

    // 创建一个持续性属性增益
    MCAPI ::TemporalAttributeBuff
    _createTemporalBuff(::AttributeBuff const& baseBuff, ::EffectDuration duration, int amplification) const;

    // 设置粒子效果ID
    MCAPI void _setParticleEffectIds(char const* particleEffectId, char const* particleEffectAmbientId);

    // 为效果添加一个属性增益
    MCAPI void addAttributeBuff(::Attribute const& attribute, ::std::shared_ptr<::AttributeBuff> buff);

    // 为效果添加一个属性修改器
    MCAPI void addAttributeModifier(::Attribute const& attribute, ::std::shared_ptr<::AttributeModifier> modifier);

    // 应用所有的修改器和增益
    MCAPI void
    applyModsAndBuffs(::BaseAttributeMap& attributeMapToRemoveFrom, ::EffectDuration durationTicks, int amplification)
        const;

    // 设置持续时间放大器
    MCAPI void setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier);

    // 设置因子计算数据
    MCAPI ::MobEffect& setFactorCalculationData(::MobEffect::FactorCalculationData const& factorCalculationData);

    // 设置应用效果时播放的声音
    MCAPI ::MobEffect& setOnApplySound(::SharedTypes::Legacy::LevelSoundEvent onApplySound);

    // 设置效果值放大器
    MCAPI void setValueAmplifier(::std::shared_ptr<::Amplifier> amplifier);

    // 更新所有的修改器和增益
    MCAPI void
    updateModsAndBuffs(::BaseAttributeMap& attributeMapToRemoveFrom, ::EffectDuration durationTicks, int amplification)
        const;
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    // “黑暗”效果的因子更新函数
    MCAPI static void
    darknessEffectFactorUpdate(::MobEffect::FactorCalculationData& factorCalculationData, ::EffectDuration duration);

    // 通过字符串名称获取效果实例
    MCAPI static ::MobEffect* getByName(::std::string const& name);

    // 获取“黑暗”效果的因子计算数据
    MCAPI static ::MobEffect::FactorCalculationData getDarknessEffectFactorCalculationData();

    // 初始化所有内置的效果
    MCAPI static void initEffects(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
    // NOLINTEND

public:
    // 静态变量，这些函数返回指向各种内置效果的静态指针
    // NOLINTBEGIN
    MCAPI static ::MobEffect*&       ABSORPTION();          // 伤害吸收
    MCAPI static ::MobEffect*&       BAD_OMEN();            // 不祥之兆
    MCAPI static ::MobEffect*&       BLINDNESS();           // 失明
    MCAPI static ::MobEffect*&       CONDUIT_POWER();       // 潮涌能量
    MCAPI static ::MobEffect*&       CONFUSION();           // 反胃
    MCAPI static ::MobEffect*&       DAMAGE_BOOST();        // 力量
    MCAPI static ::MobEffect*&       DAMAGE_RESISTANCE();   // 抗性提升
    MCAPI static ::MobEffect*&       DARKNESS();            // 黑暗
    MCAPI static ::mce::Color const& DEFAULT_COLOR();       // 默认颜色
    MCAPI static ::MobEffect*&       DIG_SLOWDOWN();        // 挖掘疲劳
    MCAPI static ::MobEffect*&       DIG_SPEED();           // 急迫
    MCAPI static ::MobEffect*&       EMPTY_EFFECT();        // 空效果（占位符）
    MCAPI static ::MobEffect*&       FATAL_POISON();        // 致命中毒（可能是凋零的别名或变种）
    MCAPI static ::MobEffect*&       FIRE_RESISTANCE();     // 抗火
    MCAPI static ::MobEffect*&       HARM();                // 瞬间伤害
    MCAPI static ::MobEffect*&       HEAL();                // 瞬间治疗
    MCAPI static ::MobEffect*&       HEALTH_BOOST();        // 生命提升
    MCAPI static ::MobEffect*&       HERO_OF_THE_VILLAGE(); // 村庄英雄
    MCAPI static ::MobEffect*&       HUNGER();              // 饥饿
    MCAPI static ::MobEffect*&       INFESTED();            // 侵染 (1.21 新增)
    MCAPI static ::MobEffect*&       INVISIBILITY();        // 隐身
    MCAPI static ::MobEffect*&       JUMP();                // 跳跃提升
    MCAPI static ::MobEffect*&       LEVITATION();          // 漂浮
    MCAPI static ::MobEffect*&       MOVEMENT_SLOWDOWN();   // 迟缓
    MCAPI static ::MobEffect*&       MOVEMENT_SPEED();      // 速度
    MCAPI static ::MobEffect*&       NIGHT_VISION();        // 夜视
    MCAPI static ::MobEffect*&       OOZING();              // 渗浆 (1.21 新增)
    MCAPI static ::MobEffect*&       POISON();              // 中毒
    MCAPI static ::MobEffect*&       RAID_OMEN();           // 袭击之兆 (替代不祥之兆用于触发袭击)
    MCAPI static ::MobEffect*&       REGENERATION();        // 生命恢复
    MCAPI static ::MobEffect*&       SATURATION();          // 饱和
    MCAPI static ::MobEffect*&       SLOW_FALLING();        // 缓降
    MCAPI static ::MobEffect*&       TRIAL_OMEN();          // 试炼之兆 (1.21 新增，用于试炼密室)
    MCAPI static ::MobEffect*&       WATER_BREATHING();     // 水下呼吸
    MCAPI static ::MobEffect*&       WEAKNESS();            // 虚弱
    MCAPI static ::MobEffect*&       WEAVING();             // 织网 (1.21 新增)
    MCAPI static ::MobEffect*&       WIND_CHARGED();        // 风之冲能 (1.21 新增)
    MCAPI static ::MobEffect*&       WITHER();              // 凋零
    MCAPI static ::std::add_lvalue_reference_t<::std::unique_ptr<::MobEffect>[]>
    mMobEffects(); // 存储所有效果实例的数组
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                 id,
        ::std::string const& resourceName,
        ::std::string const& locName,
        bool                 isHarmful,
        int                  color,
        int                  icon,
        ::std::string const& iconName,
        bool                 drawParticles
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
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    MCAPI void $removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom);

    MCFOLD void $onEffectExpired(::Actor&) const;

    MCFOLD void $onActorDied(::Actor&, int) const;

    MCFOLD void $onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;

    MCAPI void
    $applyInstantaneousEffect(::Actor* source, ::Actor* owner, ::Actor* target, int amplification, float scale) const;

    MCFOLD bool $isInstantaneous() const;

    MCAPI float $getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

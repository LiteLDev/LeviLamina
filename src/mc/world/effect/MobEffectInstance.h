#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace mce { class Color; }
// clang-format on

/**
 * @class MobEffectInstance
 * @brief 代表一个施加在实体（Actor）上的具体状态效果实例。
 *
 * 与 MobEffect（效果的“模板”或“定义”）不同，MobEffectInstance 持有特定于某个实体实例的状态，
 * 例如剩余持续时间、效果等级（放大器）等。
 */
class MobEffectInstance {
public:
    // 成员变量
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             mId;       // 效果的ID，与 MobEffect 中的 ID 对应
    ::ll::TypedStorage<4, 4, ::EffectDuration> mDuration; // 效果的剩余持续时间（单位：游戏刻 tick）
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>> mDurationEasy; // 在简单难度下的初始持续时间
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>> mDurationNormal; // 在普通难度下的初始持续时间
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>> mDurationHard; // 在困难难度下的初始持续时间
    ::ll::TypedStorage<4, 4, int> mAmplifier; // 效果的放大器/等级（0代表等级I，1代表等级II，以此类推）
    ::ll::TypedStorage<1, 1, bool> mDisplayOnScreenTextureAnimation; // 是否在屏幕上显示纹理动画（如反胃效果的扭曲画面）
    ::ll::TypedStorage<1, 1, bool> mIsCounterPausedThisTick; // 在当前游戏刻，持续时间倒计时是否暂停
    ::ll::TypedStorage<1, 1, bool> mAmbient; // 效果是否是“环境”的（例如来自信标）。环境效果的粒子通常更不显眼
    ::ll::TypedStorage<1, 1, bool> mEffectVisible; // 效果是否可见（是否显示粒子和UI图标）
    ::ll::TypedStorage<8, 96, ::MobEffect::FactorCalculationData>
        mFactorCalculationData; // 用于动态效果（如黑暗）的因子计算数据实例
    // NOLINTEND

public:
    // 默认禁止构造函数
    MobEffectInstance();

public:
    // 成员函数
    // NOLINTBEGIN
    // 移动构造函数
    MCAPI MobEffectInstance(::MobEffectInstance&&);

    // 拷贝构造函数
    MCAPI MobEffectInstance(::MobEffectInstance const&);

    // 通过效果ID构造一个实例
    MCAPI explicit MobEffectInstance(uint id);

    // 获取效果的显示名称（例如 "速度 II"）
    MCAPI ::std::string getDisplayName() const;

    // 移动赋值运算符
    MCAPI ::MobEffectInstance& operator=(::MobEffectInstance&&);

    // 拷贝赋值运算符
    MCAPI ::MobEffectInstance& operator=(::MobEffectInstance const&);

    // 将此效果实例的状态保存到一个 NBT CompoundTag 中
    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    // 用另一个效果实例的数据来更新当前实例。
    // 通常用于当一个实体获得一个同类型但可能更强或持续时间更长的效果时。
    MCAPI void update(::MobEffectInstance const& takeOver);

    // 析构函数
    MCAPI ~MobEffectInstance();
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    // 计算一组效果实例的平均颜色值（用于药水粒子效果等）
    MCAPI static ::mce::Color getAverageColorValue(::std::vector<::MobEffectInstance> const& effects);

    // 从 NBT CompoundTag 中加载一个效果实例
    MCAPI static ::MobEffectInstance load(::CompoundTag const& tag);
    // NOLINTEND

public:
    // 静态变量
    // NOLINTBEGIN
    // 返回一个代表“无效果”的静态常量实例
    MCAPI static ::MobEffectInstance const& NO_EFFECT();

    // 喷溅药水的持续时间乘数
    MCAPI static float& splashDurationMultiplier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MobEffectInstance&&);

    MCAPI void* $ctor(::MobEffectInstance const&);

    MCAPI void* $ctor(uint id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
// clang-format on

class Goal {
public:
    // 成员变量
    // NOLINTBEGIN // 暂时禁用代码风格检查
    ::ll::TypedStorage<4, 4, int>            mRequiredControlFlags; // 存储使用此目标所需的控制标志（例如，移动、跳跃等）。TypedStorage是一种特定的内存布局模板。
    ::ll::TypedStorage<8, 32, ::std::string> mDebugName;            // 用于调试的目标名称。
    ::ll::TypedStorage<2, 2, ushort>         mTypeId;                 // 目标的类型ID。
    // NOLINTEND // 恢复代码风格检查

public:
    // 虚函数（virtual functions），这些函数可以在派生类中被重写以实现特定行为。
    // NOLINTBEGIN // 暂时禁用代码风格检查
    
    // vIndex: 0 - 虚析构函数
    // 确保通过基类指针删除派生类对象时，能够正确调用派生类的析构函数。
    virtual ~Goal();

    // vIndex: 1 - 判断是否可以使用此目标
    // 这是一个纯虚函数（= 0），意味着任何继承Goal的类都必须实现这个函数。
    // 返回true时，AI可以开始执行这个目标。
    virtual bool canUse() = 0;

    // vIndex: 2 - 判断是否可以继续使用此目标
    // 如果返回false，AI将停止当前目标。
    virtual bool canContinueToUse();

    // vIndex: 3 - 判断此目标是否可以被中断
    // 如果一个更高优先级的目标canUse()返回true，会用这个函数检查当前目标是否能被打断。
    virtual bool canBeInterrupted();

    // vIndex: 4 - 当目标开始时调用
    // 用于执行一次性的初始化设置。
    virtual void start();

    // vIndex: 5 - 当目标停止时调用
    // 用于执行清理工作。
    virtual void stop();

    // vIndex: 6 - 每tick（游戏的一个时间单位）调用一次
    // 用于更新目标的逻辑。
    virtual void tick();

    // vIndex: 7 - 追加调试信息
    // 将此目标的调试信息附加到给定的字符串中。纯虚函数，必须在派生类中实现。
    virtual void appendDebugInfo(::std::string&) const = 0;

    // vIndex: 8 - 判断这是否是一个目标型Goal（例如：攻击某个实体）
    // 通常与索敌相关。
    virtual bool isTargetGoal() const;

    // vIndex: 9 - 当玩家切换维度时调用
    // player: 相关的玩家
    // fromDimension: 离开的维度ID
    // toDimension: 进入的维度ID
    virtual void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
    // NOLINTEND // 恢复代码风格检查
public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canContinueToUse();

    MCFOLD bool $canBeInterrupted();

    MCFOLD void $start();

    MCFOLD void $stop();

    MCFOLD void $tick();

    MCFOLD bool $isTargetGoal() const;

    MCFOLD void $onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

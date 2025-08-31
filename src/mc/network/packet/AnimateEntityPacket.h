#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/molang/MolangVersion.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

// 定义一个名为 AnimateEntityPacket 的类，它继承自 Packet 类
// 这个数据包由服务器发送给客户端，用于命令一个或多个实体播放其资源包中定义的特定动画。
// 这是一种更高级的动画控制方式，允许播放由动画控制器管理的复杂动画。
class AnimateEntityPacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorRuntimeID>> mRuntimeIds; // 需要播放此动画的实体的运行时ID列表。
    ::ll::TypedStorage<8, 32, ::std::string>                   mAnimation;  // 要播放的动画的短名称（在动画控制器中定义的名称）。
    ::ll::TypedStorage<8, 32, ::std::string>                   mNextState;  // 动画播放完毕后，动画控制器要转换到的下一个状态。
    ::ll::TypedStorage<8, 32, ::std::string>                   mStopExpression; // 一个 Molang 表达式，当其计算结果为真时，将停止动画。
    ::ll::TypedStorage<2, 2, ::MolangVersion>                  mStopExpressionVersion; // 用于“停止表达式”的 Molang 语言版本。
    ::ll::TypedStorage<8, 32, ::std::string>                   mController;   // 包含该动画的动画控制器的名称。
    ::ll::TypedStorage<4, 4, float>                            mBlendOutTime; // 动画淡出所需的时间（以秒为单位）。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码

public:
    // 默认阻止构造函数
    AnimateEntityPacket();

public:
    // 虚函数
    // NOLINTBEGIN // 开始忽略虚函数相关的代码检查
    // vIndex: 1 (虚函数表中的索引)
    virtual ::MinecraftPacketIds getId() const /*override*/; // 获取此数据包的ID。

    // vIndex: 2
    virtual ::std::string getName() const /*override*/; // 获取此数据包的名称。

    // vIndex: 4
    virtual void write(::BinaryStream& s) const /*override*/; // 将数据包内容写入二进制流。

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& s) /*override*/; // 从二进制流中读取数据来填充数据包。

    // vIndex: 0
    virtual ~AnimateEntityPacket() /*override*/; // 虚析构函数。
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    // 构造一个新的 AnimateEntityPacket
    MCAPI AnimateEntityPacket(
        ::std::vector<::ActorRuntimeID> const& runtimeIds,   // 实体ID列表
        ::std::string const&                   animation,    // 动画名称
        ::std::string const&                   nextState,    // 下一个状态
        float                                  blendOutTime, // 淡出时间
        ::std::string const&                   stopExpression, // 停止表达式
        ::MolangVersion                        stopExpressionVersion, // 停止表达式版本
        ::std::string const&                   controller    // 控制器名称
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::ActorRuntimeID> const& runtimeIds,
        ::std::string const&                   animation,
        ::std::string const&                   nextState,
        float                                  blendOutTime,
        ::std::string const&                   stopExpression,
        ::MolangVersion                        stopExpressionVersion,
        ::std::string const&                   controller
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
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& s) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& s);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

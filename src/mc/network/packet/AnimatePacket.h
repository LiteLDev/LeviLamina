#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

// 定义一个名为 AnimatePacket 的类，它继承自 Packet 类
// 这个数据包用于在客户端和服务器之间同步一个实体（通常是玩家或生物）正在播放某个特定动画的事件。
class AnimatePacket : public ::Packet {
public:
    // AnimatePacket 的内部类型定义
    // 定义了一个名为 Action 的枚举，表示实体可以执行的动画类型
    enum class Action : int {
        NoAction         = 0, // 无动作
        Swing            = 1, // 挥手动画（例如，攻击）
        WakeUp           = 3, // 从床上醒来的动画
        CriticalHit      = 4, // 暴击时的粒子效果
        MagicCriticalHit = 5, // 魔法暴击时的粒子效果（通常由药水效果触发）
    };

public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>        mRuntimeId; // 正在播放动画的实体的运行时ID。
    ::ll::TypedStorage<4, 4, ::AnimatePacket::Action> mAction;    // 要播放的动画类型（来自上面的 Action 枚举）。
    ::ll::TypedStorage<4, 4, float>                   mData;      // 附加数据，其含义取决于动画类型，但通常不使用。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码

public:
    // 虚函数
    // NOLINTBEGIN // 开始忽略虚函数相关的代码检查
    // vIndex: 1 (虚函数表中的索引)
    virtual ::MinecraftPacketIds getId() const /*override*/; // 获取此数据包的ID。

    // vIndex: 2
    virtual ::std::string getName() const /*override*/; // 获取此数据包的名称。

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/; // 将数据包内容写入二进制流。

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/; // 从二进制流中读取数据来填充数据包。

    // vIndex: 0
    virtual ~AnimatePacket() /*override*/; // 虚析构函数。
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

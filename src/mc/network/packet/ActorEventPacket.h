#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorEvent.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

// 定义一个名为 ActorEventPacket 的类，它继承自 Packet 类
// 这个数据包用于在网络间同步实体（如生物、玩家）身上发生的特定事件（如受伤、死亡动画等）
class ActorEventPacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId; // 实体的运行时ID，用于在客户端和服务器之间唯一标识一个实体。占8字节。
    ::ll::TypedStorage<1, 1, ::ActorEvent>     mEventId;   // 发生的事件ID，是一个枚举类型，例如 ATTACK_NODAMAGE、DEATH_SMOKE_EFFECT 等。占1字节。
    ::ll::TypedStorage<4, 4, int>              mData;      // 与事件相关的附加数据，具体含义取决于事件类型。占4字节。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码

public:
    // 虚函数
    // NOLINTBEGIN // 开始忽略虚函数相关的代码检查
    // vIndex: 1 (虚函数表中的索引)
    virtual ::MinecraftPacketIds getId() const /*override*/; // 获取此数据包的ID，返回一个MinecraftPacketIds枚举值。

    // vIndex: 2
    virtual ::std::string getName() const /*override*/; // 获取此数据包的名称，通常是一个字符串。

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/; // 将数据包的内容序列化（写入）到二进制流中，以便通过网络发送。

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/; // 从二进制流中反序列化（读取）数据，以填充数据包的成员变量。

    // vIndex: 0
    virtual ~ActorEventPacket() /*override*/; // 虚析构函数，确保派生类能被正确销毁。
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

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

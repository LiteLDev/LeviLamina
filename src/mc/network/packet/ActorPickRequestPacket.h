#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

// 定义一个名为 ActorPickRequestPacket 的类，它继承自 Packet 类
// 这个数据包由客户端发送给服务器，当玩家试图“拾取”一个实体时（类似于在创造模式下对准一个方块按鼠标中键），
// 服务器会根据这个请求，尝试给予玩家一个对应的生成蛋（Spawn Egg）。
class ActorPickRequestPacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 8, int64> mID;       // 要拾取的实体的唯一ID。占8字节。
    ::ll::TypedStorage<1, 1, bool>  mWithData; // 一个布尔值，指示是否要将实体的数据一并复制过来（例如，一个有特定名字的生物）。占1字节。
    ::ll::TypedStorage<1, 1, uchar> mMaxSlots; // 玩家物品栏快捷栏（Hotbar）中被选中的槽位索引。占1字节。
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
    virtual ~ActorPickRequestPacket() /*override*/ = default; // 虚析构函数，使用默认实现。
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

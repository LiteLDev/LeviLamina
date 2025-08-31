#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

// 定义一个名为 AnvilDamagePacket 的类，它继承自 Packet 类
// 这个数据包似乎是用于同步铁砧（Anvil）损坏状态的。
// 注意：这个数据包在较新的版本中可能已被废弃或被其他机制取代。
// 通常，方块状态的改变是通过更新方块本身的数据（BlockActorData）来同步的。
class AnvilDamagePacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<4, 4, int>                     mDamage;   // 铁砧的损坏程度。
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPosition; // 铁砧方块在世界中的位置。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码

public:
    // 虚函数
    // NOLINTBEGIN // 开始忽略虚函数相关的代码检查
    // vIndex: 1 (虚函数表中的索引)
    virtual ::MinecraftPacketIds getId() const /*override*/; // 获取此数据包的ID。

    // vIndex: 2
    virtual ::std::string getName() const /*override*/; // 获取此数据包的名称。

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/; // 将数据包内容（损坏度和位置）写入二进制流。

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/; // 从二进制流中读取数据来填充数据包。

    // vIndex: 0
    virtual ~AnvilDamagePacket() /*override*/ = default; // 虚析构函数，使用默认实现。
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

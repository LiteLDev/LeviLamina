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

// 定义一个名为 AddBehaviorTreePacket 的类，它继承自 Packet 类
// 这个数据包用于将一个实体的行为树（Behavior Tree）定义发送给客户端。
// 行为树是用来控制实体 AI（人工智能）的一种机制，这个数据包可能主要用于调试目的。
class AddBehaviorTreePacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 32, ::std::string> mJsonInput; // 包含行为树定义的JSON格式的字符串。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码

public:
    // 虚函数
    // NOLINTBEGIN // 开始忽略虚函数相关的代码检查
    // vIndex: 0 (虚函数表中的索引)
    virtual ~AddBehaviorTreePacket() /*override*/ = default; // 虚析构函数，使用默认实现。

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/; // 获取此数据包的ID。

    // vIndex: 2
    virtual ::std::string getName() const /*override*/; // 获取此数据包的名称。

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/; // 将数据包内容（JSON字符串）写入二进制流。

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/; // 从二进制流中读取数据来填充数据包（JSON字符串）。
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

// 这个数据包由服务器发送给客户端，用于在世界中生成一个画（Painting）实体。
class AddPaintingPacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>  mEntityId;  // 画实体的永久唯一ID。
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId; // 画实体的运行时ID。
    ::ll::TypedStorage<4, 12, ::Vec3>          mPos;       // 画被放置的位置坐标（通常是其左下角的方块位置）。
    ::ll::TypedStorage<4, 4, int>              mDir;       // 画所朝向的方向（例如，0, 1, 2, 3 分别代表南、西、北、东）。
    ::ll::TypedStorage<8, 32, ::std::string>   mMotif;     // 画的图案名称（例如 "Kebab", "Wither", "Sea"）。
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
    virtual ~AddPaintingPacket() /*override*/ = default; // 虚析构函数，使用默认实现。
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

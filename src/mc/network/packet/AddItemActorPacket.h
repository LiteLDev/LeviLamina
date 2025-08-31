#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class DataItem;
class ReadOnlyBinaryStream;
class SynchedActorDataEntityWrapper;
// clang-format on

// 定义一个名为 AddItemActorPacket 的类，它继承自 Packet 类
// 这个数据包由服务器发送给客户端，用于在世界中生成一个掉落物实体（Item Actor）。
class AddItemActorPacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData; // 掉落物实体的元数据列表，比如是否有自定义名称。
    ::ll::TypedStorage<8, 8, ::SynchedActorDataEntityWrapper*>              mEntityData;    // 指向同步实体数据的包装器。
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mId;            // 掉落物实体的永久唯一ID。
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mRuntimeId;     // 掉落物实体的运行时ID。
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                 mItem;          // 描述这个掉落物的物品信息（ID、数量、附加值等）。
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mPos;           // 掉落物生成时的位置坐标。
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mVelocity;      // 掉落物生成时的初始速度。
    ::ll::TypedStorage<1, 1, bool>                                          mIsFromFishing; // 标记这个掉落物是否是钓鱼产生的。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码

public:
    // 虚函数
    // NOLINTBEGIN // 开始忽略虚函数相关的代码检查
    // vIndex: 0 (虚函数表中的索引)
    virtual ~AddItemActorPacket() /*override*/; // 虚析构函数。

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/; // 获取此数据包的ID。

    // vIndex: 2
    virtual ::std::string getName() const /*override*/; // 获取此数据包的名称。

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/; // 将数据包内容写入二进制流。

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/; // 从二进制流中读取数据来填充数据包。
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

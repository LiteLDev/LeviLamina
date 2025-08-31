#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/ecs/EntityNetId.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/platform/Result.h"
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Dimension;
class EntityContext;
class ReadOnlyBinaryStream;
// clang-format on

// 定义一个名为 AddVolumeEntityPacket 的类，它继承自 Packet 类
// 这个数据包用于在客户端添加一个“体积实体”（Volume Entity）。
// 体积实体是一种特殊的、不可见的实体，用于定义一个空间区域，并对其应用某些效果，例如雾效、水体或自定义的附加包行为。
class AddVolumeEntityPacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 24, ::CompoundTag>          mComponents;       // 存储体积实体组件数据的NBT复合标签。
    ::ll::TypedStorage<8, 32, ::std::string>          mJsonIdentifier;   // 体积实体的JSON标识符，例如 "minecraft:fog"。
    ::ll::TypedStorage<8, 32, ::std::string>          mInstanceName;     // 该体积实体实例的名称。
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mMinBounds;        // 体积范围的最小边界坐标（AABB的最小点）。
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mMaxBounds;        // 体积范围的最大边界坐标（AABB的最大点）。
    ::ll::TypedStorage<4, 4, ::DimensionType>         mDimensionType;    // 该体积实体所在的维度ID（主世界、下界、末地等）。
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>     mMinEngineVersion; // 支持此体积实体所需的最低游戏引擎版本。
    ::ll::TypedStorage<4, 4, ::EntityNetId>           mEntityNetId;      // 该体积实体的网络ID。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码

public:
    // 虚函数
    // NOLINTBEGIN // 开始忽略虚函数相关的代码检查
    // vIndex: 0 (虚函数表中的索引)
    virtual ~AddVolumeEntityPacket() /*override*/; // 虚析构函数。

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
    // 成员函数
    // NOLINTBEGIN
    MCAPI AddVolumeEntityPacket(); // 默认构造函数。

    // 使用实体上下文、组件数据和最低引擎版本来构造数据包。
    MCAPI AddVolumeEntityPacket(
        ::EntityContext const&    entity,
        ::CompoundTag             components,
        ::MinEngineVersion const& minEngineVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void*
    $ctor(::EntityContext const& entity, ::CompoundTag components, ::MinEngineVersion const& minEngineVersion);
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

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

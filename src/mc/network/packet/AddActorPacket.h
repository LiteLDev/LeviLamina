#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AttributeInstanceHandle;
class BaseAttributeMap;
class BinaryStream;
class DataItem;
class ReadOnlyBinaryStream;
class SynchedActorDataEntityWrapper;
struct ActorLink;
struct SyncedAttribute;
// clang-format on

// 定义一个名为 AddActorPacket 的类，它继承自 Packet 类
// 这个数据包由服务器发送给客户端，用于在客户端的世界中生成一个新的实体（Actor）。
class AddActorPacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>                   mLinks;             // 实体间的链接关系列表，比如骑乘关系。
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mPos;               // 实体生成时的位置坐标 (x, y, z)。
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mVelocity;          // 实体生成时的初始速度向量。
    ::ll::TypedStorage<4, 8, ::Vec2>                                        mRot;               // 实体的旋转角度，x是俯仰角（pitch），y是偏航角（yaw）。
    ::ll::TypedStorage<4, 4, float>                                         mYHeadRotation;     // 实体头部的偏航角（左右看）。
    ::ll::TypedStorage<4, 4, float>                                         mYBodyRotation;     // 实体身体的偏航角。
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mEntityId;          // 实体的永久唯一ID，在整个世界存档中是唯一的。
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mRuntimeId;         // 实体的运行时ID，在当前游戏会话中是唯一的。
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData;              // 实体的元数据列表，包含了如生命值、名称标签、颜色等信息。
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                 mType;              // 实体的类型标识符，例如 "minecraft:pig" 或 "minecraft:zombie"。
    ::ll::TypedStorage<8, 24, ::std::vector<::SyncedAttribute>>             mAttributes;        // 需要同步的实体属性列表，如最大生命值、移动速度等。
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                           mSynchedProperties; // 需要同步的实体状态属性数据。
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>     mAttributeHandles;  // 属性实例的句柄列表。
    ::ll::TypedStorage<8, 8, ::BaseAttributeMap const*>                     mMap;               // 指向实体属性图的指针。
    ::ll::TypedStorage<8, 8, ::SynchedActorDataEntityWrapper*>              mEntityData;        // 指向同步实体数据的包装器。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码

public:
    // 虚函数
    // NOLINTBEGIN // 开始忽略虚函数相关的代码检查
    // vIndex: 0 (虚函数表中的索引)
    virtual ~AddActorPacket() /*override*/; // 虚析构函数。

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
    MCAPI AddActorPacket(); // 默认构造函数。

    MCAPI explicit AddActorPacket(::Actor& e); // 使用一个已存在的实体对象来构造数据包。
    // NOLINTEND


public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Actor& e);
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

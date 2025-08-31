#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/LayeredAbilities.h"
#include "mc/world/actor/state/PropertySyncData.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class DataItem;
class Player;
class ReadOnlyBinaryStream;
class SynchedActorDataEntityWrapper;
struct ActorLink;
// clang-format on

// 定义一个名为 AddPlayerPacket 的类，它继承自 Packet 类
// 这个数据包由服务器发送给客户端，用于在客户端的世界中生成（添加）一个其他玩家的实体。
class AddPlayerPacket : public ::Packet {
public:
    // 成员变量
    // NOLINTBEGIN // 告诉代码检查工具（linter）开始忽略此处的代码
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>                   mLinks;             // 玩家实体与其他实体的链接关系，例如骑乘。
    ::ll::TypedStorage<8, 32, ::std::string>                                mName;              // 玩家的游戏内名称（ID）。
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                  mUuid;              // 玩家的账户唯一标识符 (UUID)。
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mEntityId;          // 玩家实体的永久唯一ID。
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mRuntimeId;         // 玩家实体的运行时ID。
    ::ll::TypedStorage<8, 32, ::std::string>                                mPlatformOnlineId;  // 玩家在对应平台上的在线ID（例如 Xbox Live ID）。
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mPos;               // 玩家的位置坐标。
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mVelocity;          // 玩家的速度向量。
    ::ll::TypedStorage<4, 8, ::Vec2>                                        mRot;               // 玩家的旋转角度（pitch 和 yaw）。
    ::ll::TypedStorage<4, 4, float>                                         mYHeadRot;          // 玩家头部的偏航角。
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mUnpack;            // 待解包的实体元数据列表。
    ::ll::TypedStorage<4, 1444, ::LayeredAbilities>                         mAbilities;         // 玩家的权限数据，如是否可以飞行、是否无敌等。
    ::ll::TypedStorage<8, 32, ::std::string>                                mDeviceId;          // 玩家所使用设备的ID。
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                               mBuildPlatform;     // 玩家客户端的构建平台（例如，Windows、iOS、Android）。
    ::ll::TypedStorage<4, 4, ::GameType>                                    mPlayerGameType;    // 玩家当前的游戏模式（生存、创造等）。
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                 mCarriedItem;       // 玩家当前主手持有的物品。
    ::ll::TypedStorage<8, 8, ::SynchedActorDataEntityWrapper const*>        mEntityData;        // 指向同步实体数据的包装器。
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                           mSynchedProperties; // 需要同步的实体状态属性数据。
    // NOLINTEND // 告诉代码检查工具结束忽略此处的代码
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddPlayerPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddPlayerPacket();

    MCAPI explicit AddPlayerPacket(::Player& p);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Player& p);
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

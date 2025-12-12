#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
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

class AddActorPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>                   mLinks;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mVelocity;
    ::ll::TypedStorage<4, 8, ::Vec2>                                        mRot;
    ::ll::TypedStorage<4, 4, float>                                         mYHeadRotation;
    ::ll::TypedStorage<4, 4, float>                                         mYBodyRotation;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mRuntimeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                 mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SyncedAttribute>>             mAttributes;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                           mSynchedProperties;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>     mAttributeHandles;
    ::ll::TypedStorage<8, 8, ::BaseAttributeMap const*>                     mMap;
    ::ll::TypedStorage<8, 8, ::SynchedActorDataEntityWrapper*>              mEntityData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddActorPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 6
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddActorPacket();

    MCAPI explicit AddActorPacket(::Actor& e);
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

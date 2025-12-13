#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class NetworkItemInstanceDescriptor;
class ReadOnlyBinaryStream;
// clang-format on

class CreativeContentPacket : public ::Packet {
public:
    // CreativeContentPacket inner types declare
    // clang-format off
    struct CreativeGroupInfoDescription;
    struct CreativeItemEntryDescription;
    // clang-format on

    // CreativeContentPacket inner types define
    struct CreativeGroupInfoDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkccf04d;
        ::ll::UntypedStorage<8, 32> mUnkdd7edd;
        ::ll::UntypedStorage<8, 64> mUnkba42b6;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreativeGroupInfoDescription& operator=(CreativeGroupInfoDescription const&);
        CreativeGroupInfoDescription(CreativeGroupInfoDescription const&);
        CreativeGroupInfoDescription();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C CreativeGroupInfoDescription(::CreativeContentPacket::CreativeGroupInfoDescription&&);

        MCNAPI_C CreativeGroupInfoDescription(
            ::CreativeItemCategory          creativeItemCategory,
            ::std::string                   name,
            ::NetworkItemInstanceDescriptor itemDescriptor
        );

        MCNAPI_C ~CreativeGroupInfoDescription();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor(::CreativeContentPacket::CreativeGroupInfoDescription&&);

        MCNAPI_C void* $ctor(
            ::CreativeItemCategory          creativeItemCategory,
            ::std::string                   name,
            ::NetworkItemInstanceDescriptor itemDescriptor
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct CreativeItemEntryDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkc332b5;
        ::ll::UntypedStorage<8, 64> mUnk6cc13a;
        ::ll::UntypedStorage<4, 4>  mUnk16e343;
        ::ll::UntypedStorage<4, 4>  mUnk293c03;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreativeItemEntryDescription& operator=(CreativeItemEntryDescription const&);
        CreativeItemEntryDescription(CreativeItemEntryDescription const&);
        CreativeItemEntryDescription();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C CreativeItemEntryDescription(::CreativeContentPacket::CreativeItemEntryDescription&&);

        MCNAPI_C ~CreativeItemEntryDescription();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor(::CreativeContentPacket::CreativeItemEntryDescription&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk30c157;
    ::ll::UntypedStorage<8, 24> mUnk1ac4e1;
    ::ll::UntypedStorage<8, 24> mUnkb44ff7;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeContentPacket& operator=(CreativeContentPacket const&);
    CreativeContentPacket(CreativeContentPacket const&);
    CreativeContentPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~CreativeContentPacket() /*override*/;
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

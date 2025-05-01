#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CreativeItemRegistry;
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
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> const>
        mCreativeItemRegistryForWrite;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeContentPacket::CreativeGroupInfoDescription>>
        mReadGroupInfoDescriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeContentPacket::CreativeItemEntryDescription>>
        mReadEntryDescriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~CreativeContentPacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MinecraftPacketIds $getId() const;

    MCNAPI ::std::string $getName() const;

    MCNAPI void $write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

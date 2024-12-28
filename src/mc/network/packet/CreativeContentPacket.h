#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CreativeItemEntry;
class ReadOnlyBinaryStream;
// clang-format on

class CreativeContentPacket : public ::Packet {
public:
    // CreativeContentPacket inner types declare
    // clang-format off
    struct CreativeItemEntryDescription;
    // clang-format on

    // CreativeContentPacket inner types define
    struct CreativeItemEntryDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnka4bfab;
        ::ll::UntypedStorage<8, 64> mUnk27d381;
        ::ll::UntypedStorage<4, 4>  mUnk1f9627;
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
    ::ll::TypedStorage<8, 8, ::std::vector<::CreativeItemEntry> const*> mWriteEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeContentPacket::CreativeItemEntryDescription>>
        mReadEntryDescriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeContentPacket& operator=(CreativeContentPacket const&);
    CreativeContentPacket(CreativeContentPacket const&);

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
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeContentPacket();

    MCAPI explicit CreativeContentPacket(::std::vector<::CreativeItemEntry> const& content);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::vector<::CreativeItemEntry> const& content);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

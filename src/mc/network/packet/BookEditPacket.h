#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct PageContent;
// clang-format on

class BookEditPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc5140a;
    ::ll::UntypedStorage<4, 4>  mUnk4c31ca;
    ::ll::UntypedStorage<4, 4>  mUnkf3ccd9;
    ::ll::UntypedStorage<4, 4>  mUnkef185b;
    ::ll::UntypedStorage<8, 32> mUnk84323d;
    ::ll::UntypedStorage<8, 32> mUnk57e023;
    ::ll::UntypedStorage<8, 32> mUnkc86aa1;
    // NOLINTEND

public:
    // prevent constructor by default
    BookEditPacket& operator=(BookEditPacket const&);
    BookEditPacket(BookEditPacket const&);
    BookEditPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~BookEditPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> _readPage(::ReadOnlyBinaryStream& stream);

    MCAPI ::PageContent getPage() const;

    MCAPI_C void setToFinalize(int bookSlot, ::std::string title, ::std::string author, ::std::string xuid);
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

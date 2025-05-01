#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/BookEditAction.h"
#include "mc/network/packet/Packet.h"
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
    ::ll::TypedStorage<1, 1, ::BookEditAction> mAction;
    ::ll::TypedStorage<4, 4, int>              mBookSlot;
    ::ll::TypedStorage<4, 4, int>              mPageIndex1;
    ::ll::TypedStorage<4, 4, int>              mPageIndex2;
    ::ll::TypedStorage<8, 32, ::std::string>   mText1;
    ::ll::TypedStorage<8, 32, ::std::string>   mText2;
    ::ll::TypedStorage<8, 32, ::std::string>   mText3;
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
    virtual ~BookEditPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void> _readPage(::ReadOnlyBinaryStream& stream);

    MCNAPI ::PageContent getPage() const;
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

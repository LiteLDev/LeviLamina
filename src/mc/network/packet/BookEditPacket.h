#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/BookEditAction.h"
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

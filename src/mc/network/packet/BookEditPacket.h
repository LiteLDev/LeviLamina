#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/BookEditAction.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class BookEditPacket : public ::Packet {
public:
    BookEditAction mAction;     // this+0x30
    int            mBookSlot;   // this+0x34
    int            mPageIndex1; // this+0x38
    int            mPageIndex2; // this+0x3C
    std::string    mText1;      // this+0x40
    std::string    mText2;      // this+0x60
    std::string    mXuid;       // this+0x80

    // prevent constructor by default
    BookEditPacket& operator=(BookEditPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BookEditPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI BookEditPacket();

    MCAPI BookEditPacket(class BookEditPacket const&);

    MCAPI struct PageContent getPage() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Bedrock::Result<void> _readPage(class ReadOnlyBinaryStream& stream);

    MCAPI void _writePage(class BinaryStream& stream) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(class BookEditPacket const&);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/BookEditAction.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BookEditPacket : public ::Packet {
public:
    BookEditAction mAction;     // this+0x30
    int            mBookSlot;   // this+0x34
    int            mPageIndex1; // this+0x38
    int            mPageIndex2; // this+0x3C
    std::string    mText1;      // this+0x40
    std::string    mText2;      // this+0x60
    std::string    mText3;      // this+0x80

    // prevent constructor by default
    BookEditPacket& operator=(BookEditPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BookEditPacket@@UEAA@XZ
    virtual ~BookEditPacket();

    // vIndex: 1, symbol: ?getId@BookEditPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@BookEditPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@BookEditPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@BookEditPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0BookEditPacket@@QEAA@XZ
    MCAPI BookEditPacket();

    // symbol: ??0BookEditPacket@@QEAA@AEBV0@@Z
    MCAPI BookEditPacket(class BookEditPacket const&);

    // symbol: ?getPage@BookEditPacket@@QEBA?AUPageContent@@XZ
    MCAPI struct PageContent getPage() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_readPage@BookEditPacket@@AEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> _readPage(class ReadOnlyBinaryStream& stream);

    // symbol: ?_writePage@BookEditPacket@@AEBAXAEAVBinaryStream@@@Z
    MCAPI void _writePage(class BinaryStream& stream) const;

    // NOLINTEND
};

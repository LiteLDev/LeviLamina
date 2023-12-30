#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetTitlePacket : public ::Packet {
public:
    // SetTitlePacket inner types define
    enum class TitleType {};

public:
    // prevent constructor by default
    SetTitlePacket& operator=(SetTitlePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetTitlePacket@@UEAA@XZ
    virtual ~SetTitlePacket();

    // vIndex: 1, symbol: ?getId@SetTitlePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetTitlePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetTitlePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@SetTitlePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0SetTitlePacket@@QEAA@XZ
    MCAPI SetTitlePacket();

    // symbol: ??0SetTitlePacket@@QEAA@AEBV0@@Z
    MCAPI SetTitlePacket(class SetTitlePacket const&);

    // symbol: ??0SetTitlePacket@@QEAA@W4TitleType@0@@Z
    MCAPI explicit SetTitlePacket(enum SetTitlePacket::TitleType type);

    // symbol: ??0SetTitlePacket@@QEAA@W4TitleType@0@AEBVResolvedTextObject@@@Z
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType type, class ResolvedTextObject const& textObject);

    // symbol: ??0SetTitlePacket@@QEAA@W4TitleType@0@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType type, std::string const& titleText);

    // symbol: ??0SetTitlePacket@@QEAA@HHH@Z
    MCAPI SetTitlePacket(int fadeInTime, int stayTime, int fadeOutTime);

    // symbol: ??4SetTitlePacket@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class SetTitlePacket& operator=(class SetTitlePacket&&);

    // NOLINTEND
};

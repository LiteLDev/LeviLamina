#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetTitlePacket : public ::Packet {
public:
    // SetTitlePacket inner types define
    enum class TitleType : int {
        Clear               = 0x0,
        Reset               = 0x1,
        Title               = 0x2,
        Subtitle            = 0x3,
        Actionbar           = 0x4,
        Times               = 0x5,
        TitleTextObject     = 0x6,
        SubtitleTextObject  = 0x7,
        ActionbarTextObject = 0x8,
    };

public:
    TitleType   mType;             // this+0x30
    std::string mTitleText;        // this+0x38
    int         mFadeInTime;       // this+0x58
    int         mStayTime;         // this+0x5C
    int         mFadeOutTime;      // this+0x60
    std::string mXuid;             // this+0x68
    std::string mPlatformOnlineId; // this+0x88

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

    // vIndex: 4, symbol: ?write@SetTitlePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetTitlePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetTitlePacket@@QEAA@XZ
    MCAPI SetTitlePacket();

    // symbol: ??0SetTitlePacket@@QEAA@AEBV0@@Z
    MCAPI SetTitlePacket(class SetTitlePacket const&);

    // symbol: ??0SetTitlePacket@@QEAA@W4TitleType@0@@Z
    MCAPI explicit SetTitlePacket(::SetTitlePacket::TitleType type);

    // symbol: ??0SetTitlePacket@@QEAA@W4TitleType@0@AEBVResolvedTextObject@@@Z
    MCAPI SetTitlePacket(::SetTitlePacket::TitleType type, class ResolvedTextObject const& resolvedTextObject);

    // symbol: ??0SetTitlePacket@@QEAA@W4TitleType@0@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI SetTitlePacket(::SetTitlePacket::TitleType type, std::string const& titleText);

    // symbol: ??0SetTitlePacket@@QEAA@HHH@Z
    MCAPI SetTitlePacket(int fadeInTime, int stayTime, int fadeOutTime);

    // symbol: ??4SetTitlePacket@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class SetTitlePacket& operator=(class SetTitlePacket&&);

    // NOLINTEND
};

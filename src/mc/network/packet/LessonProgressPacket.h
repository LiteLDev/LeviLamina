#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/LessonAction.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/LessonAction.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LessonProgressPacket : public ::Packet {
public:
    LessonAction mAction;     // this+0x30
    int          mScore;      // this+0x34
    std::string  mActivityId; // this+0x38

    // prevent constructor by default
    LessonProgressPacket& operator=(LessonProgressPacket const&);
    LessonProgressPacket(LessonProgressPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LessonProgressPacket@@UEAA@XZ
    virtual ~LessonProgressPacket();

    // vIndex: 1, symbol: ?getId@LessonProgressPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LessonProgressPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@LessonProgressPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@LessonProgressPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0LessonProgressPacket@@QEAA@XZ
    MCAPI LessonProgressPacket();

    // symbol:
    // ??0LessonProgressPacket@@QEAA@W4LessonAction@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI LessonProgressPacket(::LessonAction action, int score, std::string const&);

    // NOLINTEND
};

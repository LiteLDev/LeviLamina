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
    // vIndex: 0
    virtual ~LessonProgressPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LessonProgressPacket();

    MCAPI LessonProgressPacket(::LessonAction action, int score, std::string const&);

    // NOLINTEND
};

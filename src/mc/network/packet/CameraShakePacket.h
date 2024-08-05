#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/CameraShakeAction.h"
#include "mc/enums/CameraShakeType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/CameraShakeAction.h"
#include "mc/enums/CameraShakeType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CameraShakePacket : public ::Packet {
public:
    float             mIntensity;   // this+0x30
    float             mSeconds;     // this+0x34
    CameraShakeType   mShakeType;   // this+0x38
    CameraShakeAction mShakeAction; // this+0x39

    // prevent constructor by default
    CameraShakePacket& operator=(CameraShakePacket const&);
    CameraShakePacket(CameraShakePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraShakePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CameraShakePacket();

    MCAPI explicit CameraShakePacket(::CameraShakeAction);

    MCAPI CameraShakePacket(float intensity, float seconds, ::CameraShakeType);

    // NOLINTEND
};

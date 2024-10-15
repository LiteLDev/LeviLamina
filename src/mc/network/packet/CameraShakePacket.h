#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraShakeAction.h"
#include "mc/deps/minecraft_camera/CameraShakeType.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    MCAPI explicit CameraShakePacket(::CameraShakeAction shakeAction);

    MCAPI CameraShakePacket(float intensity, float seconds, ::CameraShakeType shakeType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(float intensity, float seconds, ::CameraShakeType shakeType);

    MCAPI void* ctor$();

    MCAPI void* ctor$(::CameraShakeAction shakeAction);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};

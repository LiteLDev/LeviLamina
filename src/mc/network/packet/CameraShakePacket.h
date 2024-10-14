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

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};

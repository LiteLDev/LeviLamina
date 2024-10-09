#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/camera/CameraPresets.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class CameraPresetsPacket : public ::Packet {
public:
    CameraPresets mData;

    // prevent constructor by default
    CameraPresetsPacket& operator=(CameraPresetsPacket const&);
    CameraPresetsPacket(CameraPresetsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraPresetsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CameraPresetsPacket();

    MCAPI explicit CameraPresetsPacket(class CameraPresets const& cameraPresets);

    // NOLINTEND
};

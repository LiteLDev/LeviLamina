#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkSettingOptions.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NetworkSettingsPacket : public ::Packet {
public:
    NetworkSettingOptions mNetworkSettings; // this+0x30
    bool                  mUnknown;         // this+0x40

    // prevent constructor by default
    NetworkSettingsPacket& operator=(NetworkSettingsPacket const&);
    NetworkSettingsPacket(NetworkSettingsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkSettingsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI NetworkSettingsPacket();

    MCAPI explicit NetworkSettingsPacket(struct NetworkSettingOptions const&);

    // NOLINTEND
};

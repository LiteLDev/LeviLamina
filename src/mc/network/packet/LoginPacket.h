#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ConnectionRequest.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class LoginPacket : public ::Packet {
public:
    int                                mClientNetworkVersion; // this+0x30
    std::unique_ptr<ConnectionRequest> mConnectionRequest;    // this+0x38

    // prevent constructor by default
    LoginPacket& operator=(LoginPacket const&);
    LoginPacket(LoginPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 6
    virtual bool disallowBatching() const;

    // vIndex: 7
    virtual bool isValid() const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LoginPacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI bool disallowBatching$() const;

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI bool isValid$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};

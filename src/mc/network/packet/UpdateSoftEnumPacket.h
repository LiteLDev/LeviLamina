#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/SoftEnumUpdateType.h"
#include "mc/platform/Result.h"

class UpdateSoftEnumPacket : public ::Packet {
public:
    std::string              mEnumName; // this+0x30
    std::vector<std::string> mValues;   // this+0x50
    SoftEnumUpdateType       mType;     // this+0x68

    // prevent constructor by default
    UpdateSoftEnumPacket& operator=(UpdateSoftEnumPacket const&);
    UpdateSoftEnumPacket(UpdateSoftEnumPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateSoftEnumPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateSoftEnumPacket();

    MCAPI UpdateSoftEnumPacket(
        ::SoftEnumUpdateType            type,
        std::string const&              enumName,
        std::vector<std::string> const& values
    );

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

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/AbilitiesIndex.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RequestAbilityPacket : public ::Packet {
public:
    // RequestAbilityPacket inner types define
    enum class Type : uchar {
        Unset = 0x0,
        Bool  = 0x1,
        Float = 0x2,
    };

public:
    AbilitiesIndex            mAbility;   // this+0x30
    Type                      mValueType; // this+0x32
    std::variant<bool, float> mValue;     // this+0x34

    // prevent constructor by default
    RequestAbilityPacket& operator=(RequestAbilityPacket const&);
    RequestAbilityPacket(RequestAbilityPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RequestAbilityPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI RequestAbilityPacket();

    MCAPI ::AbilitiesIndex getAbility() const;

    MCAPI bool tryGetBool(bool& outValue) const;

    // NOLINTEND
};

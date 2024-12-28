#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class AddActorBasePacket : public ::Packet {
public:
    // prevent constructor by default
    AddActorBasePacket& operator=(AddActorBasePacket const&);
    AddActorBasePacket(AddActorBasePacket const&);
    AddActorBasePacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddActorBasePacket() /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream&) const = 0;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

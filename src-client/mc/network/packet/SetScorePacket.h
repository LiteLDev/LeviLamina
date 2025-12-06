#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/ScorePacketType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Objective;
class ReadOnlyBinaryStream;
struct ScorePacketInfo;
struct ScoreboardId;
// clang-format on

class SetScorePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScorePacketType>                 mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScorePacketInfo>> mScoreInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    SetScorePacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetScorePacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 6
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetScorePacket(::ScorePacketType type, ::ScoreboardId const& id, ::Objective const& objective);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScorePacketType type, ::ScoreboardId const& id, ::Objective const& objective);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

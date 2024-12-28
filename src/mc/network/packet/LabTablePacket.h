#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPos;
class ReadOnlyBinaryStream;
// clang-format on

class LabTablePacket : public ::Packet {
public:
    // LabTablePacket inner types define
    enum class Type : uchar {
        StartCombine  = 0,
        StartReaction = 1,
        Reset         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::LabTablePacket::Type> mType;
    ::ll::TypedStorage<4, 12, ::BlockPos>            mPos;
    ::ll::TypedStorage<1, 1, ::LabTableReactionType> mReaction;
    // NOLINTEND

public:
    // prevent constructor by default
    LabTablePacket& operator=(LabTablePacket const&);
    LabTablePacket(LabTablePacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~LabTablePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LabTablePacket();

    MCAPI LabTablePacket(::BlockPos const& pos, ::LabTableReactionType reaction);

    MCAPI LabTablePacket(::LabTablePacket::Type type, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockPos const& pos, ::LabTableReactionType reaction);

    MCAPI void* $ctor(::LabTablePacket::Type type, ::BlockPos const& pos);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

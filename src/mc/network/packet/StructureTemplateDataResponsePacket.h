#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/StructureTemplateResponseType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class ReadOnlyBinaryStream;
// clang-format on

class StructureTemplateDataResponsePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   mStructureName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mStructureTag;
    ::ll::TypedStorage<1, 1, ::StructureTemplateResponseType>  mResponseType;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateDataResponsePacket& operator=(StructureTemplateDataResponsePacket const&);
    StructureTemplateDataResponsePacket(StructureTemplateDataResponsePacket const&);
    StructureTemplateDataResponsePacket();

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
    virtual ~StructureTemplateDataResponsePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::StructureTemplateDataResponsePacket& operator=(::StructureTemplateDataResponsePacket&&);
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

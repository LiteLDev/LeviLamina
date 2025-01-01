#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/scores/ObjectiveSortOrder.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class SetDisplayObjectivePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       mDisplaySlotName;
    ::ll::TypedStorage<8, 32, ::std::string>       mObjectiveName;
    ::ll::TypedStorage<8, 32, ::std::string>       mObjectiveDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string>       mCriteriaName;
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder> mSortOrder;
    // NOLINTEND

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
    virtual ~SetDisplayObjectivePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetDisplayObjectivePacket();

    MCAPI SetDisplayObjectivePacket(
        ::std::string const& displaySlotName,
        ::std::string const& objectiveName,
        ::std::string const& dispalyName,
        ::std::string const& criteriaName,
        ::ObjectiveSortOrder order
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::std::string const& displaySlotName,
        ::std::string const& objectiveName,
        ::std::string const& dispalyName,
        ::std::string const& criteriaName,
        ::ObjectiveSortOrder order
    );
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

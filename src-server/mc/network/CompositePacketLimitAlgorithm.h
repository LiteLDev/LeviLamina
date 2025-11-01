#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketLimitAlgorithm.h"
#include "mc/network/MinecraftPacketIds.h"

class CompositePacketLimitAlgorithm : public ::IPacketLimitAlgorithm {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1a756c;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositePacketLimitAlgorithm& operator=(CompositePacketLimitAlgorithm const&);
    CompositePacketLimitAlgorithm(CompositePacketLimitAlgorithm const&);
    CompositePacketLimitAlgorithm();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::IPacketLimitAlgorithm> copy() const /*override*/;

    // vIndex: 2
    virtual uint checkPacket(::MinecraftPacketIds packet) /*override*/;

    // vIndex: 0
    virtual ~CompositePacketLimitAlgorithm() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::IPacketLimitAlgorithm> $copy() const;

    MCNAPI uint $checkPacket(::MinecraftPacketIds packet);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

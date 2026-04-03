#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientboundDataDrivenUIShowScreenPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mScreenId;
    ::ll::TypedStorage<4, 4, uint>                  mFormId;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mDataInstanceId;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientboundDataDrivenUIShowScreenPacketPayload(ClientboundDataDrivenUIShowScreenPacketPayload const&);
    ClientboundDataDrivenUIShowScreenPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ClientboundDataDrivenUIShowScreenPacketPayload&
    operator=(::ClientboundDataDrivenUIShowScreenPacketPayload&&);

    MCAPI ::ClientboundDataDrivenUIShowScreenPacketPayload&
    operator=(::ClientboundDataDrivenUIShowScreenPacketPayload const&);
    // NOLINTEND
};

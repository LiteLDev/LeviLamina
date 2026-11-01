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
    ClientboundDataDrivenUIShowScreenPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientboundDataDrivenUIShowScreenPacketPayload(
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& screenId, uint formId, ::std::optional<uint> dataInstanceId);
    // NOLINTEND
};

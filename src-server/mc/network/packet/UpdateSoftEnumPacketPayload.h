#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SoftEnumUpdateType.h"

struct UpdateSoftEnumPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SoftEnumUpdateType> mType;
    ::ll::TypedStorage<8, 32, ::std::string> mEnumName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mValues;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSoftEnumPacketPayload& operator=(UpdateSoftEnumPacketPayload const&);
    UpdateSoftEnumPacketPayload(UpdateSoftEnumPacketPayload const&);
    UpdateSoftEnumPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::UpdateSoftEnumPacketPayload& operator=(::UpdateSoftEnumPacketPayload&&);

    MCAPI ~UpdateSoftEnumPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

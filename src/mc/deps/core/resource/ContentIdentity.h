#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

class ContentIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
    ::ll::TypedStorage<1, 1, bool>         mValid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string asString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ContentIdentity fromString(::std::string const& uuidString);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ContentIdentity& EMPTY();
    // NOLINTEND
};

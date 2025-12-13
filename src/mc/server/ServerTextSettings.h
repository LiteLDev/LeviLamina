#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class ServerTextSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<3>> mEnabledTextEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerTextSettings() /*override*/ = default;
    // NOLINTEND
};

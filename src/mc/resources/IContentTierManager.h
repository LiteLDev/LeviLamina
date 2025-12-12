#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
// clang-format on

class IContentTierManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentTierManager() /*override*/;

    virtual ::ContentTierInfo getContentTierInfo() const = 0;

    virtual bool shouldDeviceAllowAnimation() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

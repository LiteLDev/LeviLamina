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
    // prevent constructor by default
    IContentTierManager& operator=(IContentTierManager const&);
    IContentTierManager(IContentTierManager const&);
    IContentTierManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContentTierManager() /*override*/;

    // vIndex: 1
    virtual ::ContentTierInfo getContentTierInfo() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

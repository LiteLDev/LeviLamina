#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentKeyProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class IContentAccessibilityProvider : public ::IContentKeyProvider {
public:
    // prevent constructor by default
    IContentAccessibilityProvider& operator=(IContentAccessibilityProvider const&);
    IContentAccessibilityProvider(IContentAccessibilityProvider const&);
    IContentAccessibilityProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContentAccessibilityProvider() /*override*/ = default;

    // vIndex: 6
    virtual bool canAccess(::ContentIdentity const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

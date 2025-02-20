#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentKeyProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class SkinPackKeyProvider : public ::IContentKeyProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string getContentKey(::ContentIdentity const&) const /*override*/;

    // vIndex: 4
    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) /*override*/;

    // vIndex: 5
    virtual void clearTempContentKeys() /*override*/;

    // vIndex: 0
    virtual ~SkinPackKeyProvider() /*override*/ = default;
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

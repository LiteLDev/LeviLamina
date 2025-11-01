#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentAccessibilityProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

namespace ServerContentKeyProvider {

class ServerContentKeyProviderImpl : public ::IContentAccessibilityProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string getContentKey(::ContentIdentity const& contentIdentity) const /*override*/;

    // vIndex: 6
    virtual bool canAccess(::ContentIdentity const&) const /*override*/;

    // vIndex: 4
    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) /*override*/;

    // vIndex: 5
    virtual void clearTempContentKeys() /*override*/;

    // vIndex: 0
    virtual ~ServerContentKeyProviderImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getContentKey(::ContentIdentity const& contentIdentity) const;

    MCNAPI bool $canAccess(::ContentIdentity const&) const;

    MCNAPI void $setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&);

    MCNAPI void $clearTempContentKeys();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ServerContentKeyProvider

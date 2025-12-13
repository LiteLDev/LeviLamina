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
    virtual ::std::string getContentKey(::ContentIdentity const& contentIdentity) const /*override*/;

    virtual bool canAccess(::ContentIdentity const&) const /*override*/;

    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) /*override*/;

    virtual void clearTempContentKeys() /*override*/;

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

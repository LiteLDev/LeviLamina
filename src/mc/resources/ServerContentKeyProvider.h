#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentAccessibilityProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class ServerContentKeyProvider : public ::IContentAccessibilityProvider {
public:
    // prevent constructor by default
    ServerContentKeyProvider& operator=(ServerContentKeyProvider const&);
    ServerContentKeyProvider(ServerContentKeyProvider const&);
    ServerContentKeyProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string getContentKey(::ContentIdentity const& contentIdentity) const /*override*/;

    // vIndex: 6
    virtual bool canAccess(::ContentIdentity const& contentIdentity) const /*override*/;

    // vIndex: 4
    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) /*override*/;

    // vIndex: 5
    virtual void clearTempContentKeys() /*override*/;

    // vIndex: 0
    virtual ~ServerContentKeyProvider() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getContentKey(::ContentIdentity const& contentIdentity) const;

    MCAPI bool $canAccess(::ContentIdentity const& contentIdentity) const;

    MCAPI void $setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&);

    MCAPI void $clearTempContentKeys();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

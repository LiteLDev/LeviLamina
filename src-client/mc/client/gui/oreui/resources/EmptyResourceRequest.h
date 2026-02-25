#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/IAsyncResourceRequest.h"

namespace OreUI {

class EmptyResourceRequest : public ::cohtml::IAsyncResourceRequest {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyResourceRequest() /*override*/;

    virtual char const* GetURL() const /*override*/;

    virtual char const* GetAbsoluteURL() const /*override*/;

    virtual char const* GetHeaderValue(char const*) const /*override*/;

    virtual char const* GetHeaderValue(uint) const /*override*/;

    virtual uint GetId() const /*override*/;

    virtual ::cohtml::IAsyncResourceRequest::FallbackURLsData GetFallbackURLs() const /*override*/;

    virtual char const* GetMethod() const /*override*/;

    virtual char const* GetUsername() const /*override*/;

    virtual char const* GetPassword() const /*override*/;

    virtual uint GetHeadersCount() const /*override*/;

    virtual char const* GetHeaderName(uint) const /*override*/;

    virtual char const* GetBody() const /*override*/;

    virtual uint GetBodySize() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD char const* $GetURL() const;

    MCFOLD char const* $GetAbsoluteURL() const;

    MCFOLD char const* $GetHeaderValue(char const*) const;

    MCFOLD char const* $GetHeaderValue(uint) const;

    MCFOLD uint $GetId() const;

    MCFOLD ::cohtml::IAsyncResourceRequest::FallbackURLsData $GetFallbackURLs() const;

    MCFOLD char const* $GetMethod() const;

    MCFOLD char const* $GetUsername() const;

    MCFOLD char const* $GetPassword() const;

    MCFOLD uint $GetHeadersCount() const;

    MCFOLD char const* $GetHeaderName(uint) const;

    MCFOLD char const* $GetBody() const;

    MCFOLD uint $GetBodySize() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

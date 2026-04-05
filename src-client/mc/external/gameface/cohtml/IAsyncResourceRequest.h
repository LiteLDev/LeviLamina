#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class IAsyncResourceRequest {
public:
    // IAsyncResourceRequest inner types declare
    // clang-format off
    struct FallbackURLsData;
    // clang-format on

    // IAsyncResourceRequest inner types define
    struct FallbackURLsData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk41089b;
        ::ll::UntypedStorage<4, 4> mUnk3f48d9;
        // NOLINTEND

    public:
        // prevent constructor by default
        FallbackURLsData& operator=(FallbackURLsData const&);
        FallbackURLsData(FallbackURLsData const&);
        FallbackURLsData();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncResourceRequest() = default;

    virtual uint GetId() const = 0;

    virtual char const* GetURL() const = 0;

    virtual char const* GetAbsoluteURL() const = 0;

    virtual char const* GetMethod() const = 0;

    virtual char const* GetUsername() const = 0;

    virtual char const* GetPassword() const = 0;

    virtual char const* GetHeaderValue(char const*) const = 0;

    virtual char const* GetHeaderValue(uint) const = 0;

    virtual uint GetHeadersCount() const = 0;

    virtual char const* GetHeaderName(uint) const = 0;

    virtual char const* GetBody() const = 0;

    virtual uint GetBodySize() const = 0;

    virtual ::cohtml::IAsyncResourceRequest::FallbackURLsData GetFallbackURLs() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml

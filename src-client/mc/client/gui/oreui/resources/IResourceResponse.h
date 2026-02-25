#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/IAsyncResourceResponse.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceResponse; }
// clang-format on

namespace OreUI {

class IResourceResponse {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceResponse() = default;

    virtual void receiveUserImage(::cohtml::IAsyncResourceResponse::UserImageData const&) = 0;

    virtual void* getSpace(uint64) = 0;

    virtual void setHeader(char const*, char const*) = 0;

    virtual void setStatus(ushort) = 0;

    virtual ::cohtml::IAsyncResourceResponse* getCohtmlIAsyncResourceResponse() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI

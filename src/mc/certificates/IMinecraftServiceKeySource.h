#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/options/DiscoveryEnvironment.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
// clang-format on

class IMinecraftServiceKeySource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftServiceKeySource() = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getAuthServiceUrl() const = 0;

    virtual ::std::optional<::DiscoveryEnvironment> getDiscoveryEnvironment() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

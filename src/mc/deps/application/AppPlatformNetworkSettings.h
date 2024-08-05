#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class AppPlatformNetworkSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    AppPlatformNetworkSettings& operator=(AppPlatformNetworkSettings const&);
    AppPlatformNetworkSettings(AppPlatformNetworkSettings const&);
    AppPlatformNetworkSettings();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AppPlatformNetworkSettings() = default;

    // vIndex: 1
    virtual bool requiresNetworkOutageMessaging() const;

    // NOLINTEND
};

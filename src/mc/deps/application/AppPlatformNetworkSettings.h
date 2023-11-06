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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AppPlatformNetworkSettings();

    // vIndex: 1, symbol: ?requiresNetworkOutageMessaging@AppPlatformNetworkSettings@@UEBA_NXZ
    virtual bool requiresNetworkOutageMessaging() const;

    // NOLINTEND
};

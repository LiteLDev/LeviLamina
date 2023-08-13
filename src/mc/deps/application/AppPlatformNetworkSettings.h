#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class AppPlatformNetworkSettings : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    AppPlatformNetworkSettings& operator=(AppPlatformNetworkSettings const&) = delete;
    AppPlatformNetworkSettings(AppPlatformNetworkSettings const&)            = delete;
    AppPlatformNetworkSettings()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?requiresNetworkOutageMessaging\@AppPlatformNetworkSettings\@\@UEBA_NXZ
     */
    virtual bool requiresNetworkOutageMessaging() const;
    // NOLINTEND
};

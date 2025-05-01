#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/ARVRPlatform.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class IAppPlatform : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IAppPlatform() /*override*/;

    // vIndex: 1
    virtual bool restartRequested() = 0;

    // vIndex: 2
    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const = 0;

    // vIndex: 3
    virtual bool isLowMemoryDevice() const = 0;

    // vIndex: 4
    virtual bool isLowPhysicalMemoryDevice() const = 0;

    // vIndex: 5
    virtual bool isRealmsEnabled() const = 0;

    // vIndex: 6
    virtual void initAppPlatformNetworkSettings() = 0;

    // vIndex: 7
    virtual int const numberOfThrottledTreatmentPacksToImportPerMinute() const = 0;

    // vIndex: 8
    virtual bool const areTreatmentPacksThrottled() const = 0;

    // vIndex: 9
    virtual bool isNetworkEnabled(bool) const = 0;

    // vIndex: 10
    virtual bool isNetworkAvailable() const = 0;

    // vIndex: 11
    virtual bool isLANAvailable() const = 0;

    // vIndex: 12
    virtual bool isLANAllowed() const = 0;

    // vIndex: 13
    virtual bool isInternetAvailable() const = 0;

    // vIndex: 14
    virtual bool multiplayerRequiresPremiumAccess() const = 0;

    // vIndex: 15
    virtual bool multiplayerRequiresUGCEnabled() const = 0;

    // vIndex: 16
    virtual ::BuildPlatform getBuildPlatform() const = 0;

    // vIndex: 17
    virtual ::ARVRPlatform getARVRPlatform() const = 0;

    // vIndex: 18
    virtual ::std::vector<::Social::MultiplayerServiceIdentifier>
    getBroadcastingMultiplayerServiceIds(bool, bool) const = 0;

    // vIndex: 19
    virtual uint64 getLowPhysicalMemoryThreshold() const = 0;

    // vIndex: 20
    virtual uint64 getTotalPhysicalMemory() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

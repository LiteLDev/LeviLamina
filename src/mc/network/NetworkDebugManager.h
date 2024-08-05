#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class NetworkDebugManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // NetworkDebugManager inner types declare
    // clang-format off
    class Tracker;
    // clang-format on

    // NetworkDebugManager inner types define
    class Tracker {
    public:
        // prevent constructor by default
        Tracker& operator=(Tracker const&);
        Tracker(Tracker const&);

    public:
        // NOLINTBEGIN
        MCAPI Tracker();

        MCAPI ~Tracker();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetworkDebugManager& operator=(NetworkDebugManager const&);
    NetworkDebugManager(NetworkDebugManager const&);
    NetworkDebugManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkDebugManager() = default;

    MCAPI static int const MAX_NUMBER_OF_SAMPLES;

    MCAPI static int const UPDATE_INTERVAL_MILLISECONDS;

    // NOLINTEND
};

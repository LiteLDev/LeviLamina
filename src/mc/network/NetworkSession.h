#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class NetworkSession : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    NetworkSession& operator=(NetworkSession const&);
    NetworkSession(NetworkSession const&);
    NetworkSession();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkSession() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

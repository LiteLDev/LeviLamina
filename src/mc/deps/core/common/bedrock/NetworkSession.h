#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class NetworkSession : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    NetworkSession& operator=(NetworkSession const&) = delete;
    NetworkSession(NetworkSession const&)            = delete;
    NetworkSession()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getTransportLayer\@NetworkSession\@\@QEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer getTransportLayer() const;
    // NOLINTEND
};

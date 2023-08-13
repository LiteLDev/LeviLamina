#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class IPacketObserver : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IPacketObserver& operator=(IPacketObserver const&) = delete;
    IPacketObserver(IPacketObserver const&)            = delete;
    IPacketObserver()                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPACKETOBSERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPacketObserver();
#endif
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class IAppPlatform : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IAppPlatform& operator=(IAppPlatform const&) = delete;
    IAppPlatform(IAppPlatform const&)            = delete;
    IAppPlatform()                               = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IAPPPLATFORM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IAppPlatform();
#endif
    // NOLINTEND
};

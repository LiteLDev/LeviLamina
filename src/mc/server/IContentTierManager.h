#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class IContentTierManager : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IContentTierManager& operator=(IContentTierManager const&) = delete;
    IContentTierManager(IContentTierManager const&)            = delete;
    IContentTierManager()                                      = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTENTTIERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IContentTierManager();
#endif
    // NOLINTEND
};

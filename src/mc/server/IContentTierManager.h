#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

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

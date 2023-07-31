#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IApplicationDataStores {
public:
    // IApplicationDataStores inner types define
    enum class DataStores {};

public:
    // prevent constructor by default
    IApplicationDataStores& operator=(IApplicationDataStores const&) = delete;
    IApplicationDataStores(IApplicationDataStores const&)            = delete;
    IApplicationDataStores()                                         = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_IAPPLICATIONDATASTORES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IApplicationDataStores();
#endif
    // NOLINTEND
};

}; // namespace Bedrock

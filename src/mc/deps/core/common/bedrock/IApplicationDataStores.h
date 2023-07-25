#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IApplicationDataStores {
public:
    // IApplicationDataStores inner types declare
    // clang-format off

    // clang-format on

    // IApplicationDataStores inner types define
    enum class DataStores {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_IAPPLICATIONDATASTORES
public:
    IApplicationDataStores& operator=(IApplicationDataStores const&) = delete;
    IApplicationDataStores(IApplicationDataStores const&)            = delete;
    IApplicationDataStores()                                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_IAPPLICATIONDATASTORES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IApplicationDataStores();
#endif
};

}; // namespace Bedrock

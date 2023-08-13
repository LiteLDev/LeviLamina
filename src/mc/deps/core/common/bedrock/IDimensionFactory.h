#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class IDimensionFactory : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IDimensionFactory& operator=(IDimensionFactory const&) = delete;
    IDimensionFactory(IDimensionFactory const&)            = delete;
    IDimensionFactory()                                    = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDIMENSIONFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IDimensionFactory();
#endif
    // NOLINTEND
};

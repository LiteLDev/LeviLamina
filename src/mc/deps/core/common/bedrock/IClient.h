#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

namespace CodeBuilder {

class IClient : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IClient& operator=(IClient const&) = delete;
    IClient(IClient const&)            = delete;
    IClient()                          = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CODEBUILDER_ICLIENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IClient();
#endif
    // NOLINTEND
};

}; // namespace CodeBuilder

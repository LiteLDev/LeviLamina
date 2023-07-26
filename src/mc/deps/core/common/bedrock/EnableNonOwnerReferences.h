#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class EnableNonOwnerReferences {

public:
    // prevent constructor by default
    EnableNonOwnerReferences& operator=(EnableNonOwnerReferences const&) = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_ENABLENONOWNERREFERENCES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EnableNonOwnerReferences(); // NOLINT
#endif
    /**
     * @symbol ??0EnableNonOwnerReferences\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI EnableNonOwnerReferences(); // NOLINT
    /**
     * @symbol ??0EnableNonOwnerReferences\@Bedrock\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI EnableNonOwnerReferences(class Bedrock::EnableNonOwnerReferences const&); // NOLINT
};

}; // namespace Bedrock

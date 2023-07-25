#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class EnableNonOwnerReferences {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_ENABLENONOWNERREFERENCES
public:
    EnableNonOwnerReferences& operator=(EnableNonOwnerReferences const&) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_ENABLENONOWNERREFERENCES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EnableNonOwnerReferences();
#endif
    /**
     * @symbol ??0EnableNonOwnerReferences\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI EnableNonOwnerReferences();
    /**
     * @symbol ??0EnableNonOwnerReferences\@Bedrock\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI EnableNonOwnerReferences(class Bedrock::EnableNonOwnerReferences const&);
};

}; // namespace Bedrock

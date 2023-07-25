#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ActivationArguments {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_ACTIVATIONARGUMENTS
public:
    ActivationArguments& operator=(ActivationArguments const&) = delete;
    ActivationArguments(ActivationArguments const&)            = delete;
    ActivationArguments()                                      = delete;
#endif

public:
    /**
     * @symbol ?preParseArguments\@ActivationArguments\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void preParseArguments();
    /**
     * @symbol ??1ActivationArguments\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~ActivationArguments();
};

}; // namespace Bedrock

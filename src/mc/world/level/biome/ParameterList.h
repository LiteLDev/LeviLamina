#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParameterList {

public:
    // prevent constructor by default
    ParameterList& operator=(ParameterList const&) = delete;
    ParameterList(ParameterList const&)            = delete;
    ParameterList()                                = delete;

public:
    /**
     * @symbol ??0ParameterList\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ParameterList(class ParameterList&&); // NOLINT
    /**
     * @symbol
     * ??0ParameterList\@\@QEAA\@AEBV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ParameterList(std::vector<struct BiomeNoiseTarget> const&); // NOLINT
    /**
     * @symbol ??1ParameterList\@\@QEAA\@XZ
     */
    MCAPI ~ParameterList(); // NOLINT
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParameterList {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARAMETERLIST
public:
    ParameterList& operator=(ParameterList const&) = delete;
    ParameterList(ParameterList const&)            = delete;
    ParameterList()                                = delete;
#endif

public:
    /**
     * @symbol ??0ParameterList\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ParameterList(class ParameterList&&);
    /**
     * @symbol
     * ??0ParameterList\@\@QEAA\@AEBV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ParameterList(std::vector<struct BiomeNoiseTarget> const&);
    /**
     * @symbol ??1ParameterList\@\@QEAA\@XZ
     */
    MCAPI ~ParameterList();
};

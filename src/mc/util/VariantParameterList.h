#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VariantParameterList {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIANTPARAMETERLIST
public:
    VariantParameterList& operator=(VariantParameterList const&) = delete;
    VariantParameterList(VariantParameterList const&)            = delete;
#endif

public:
    /**
     * @symbol ??0VariantParameterList\@\@QEAA\@XZ
     */
    MCAPI VariantParameterList();
    /**
     * @symbol ?hasParameter\@VariantParameterList\@\@QEBA_NW4FilterSubject\@\@\@Z
     */
    MCAPI bool hasParameter(enum class FilterSubject) const;
};

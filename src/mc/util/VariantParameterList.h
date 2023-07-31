#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VariantParameterList {

public:
    // prevent constructor by default
    VariantParameterList& operator=(VariantParameterList const&) = delete;
    VariantParameterList(VariantParameterList const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0VariantParameterList\@\@QEAA\@XZ
     */
    MCAPI VariantParameterList();
    /**
     * @symbol ?hasParameter\@VariantParameterList\@\@QEBA_NW4FilterSubject\@\@\@Z
     */
    MCAPI bool hasParameter(enum class FilterSubject) const;
    // NOLINTEND
};

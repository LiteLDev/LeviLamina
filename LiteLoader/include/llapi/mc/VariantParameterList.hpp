/**
 * @file  VariantParameterList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VariantParameterList.
 *
 */
class VariantParameterList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIANTPARAMETERLIST
public:
    class VariantParameterList& operator=(class VariantParameterList const &) = delete;
    VariantParameterList(class VariantParameterList const &) = delete;
#endif

public:
    /**
     * @symbol  ??0VariantParameterList\@\@QEAA\@XZ
     */
    MCAPI VariantParameterList();
    /**
     * @symbol  ?hasParameter\@VariantParameterList\@\@QEBA_NW4FilterSubject\@\@\@Z
     */
    MCAPI bool hasParameter(enum class FilterSubject) const;

};
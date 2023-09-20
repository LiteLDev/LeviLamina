/**
 * @file  ObjectiveCriteria.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ObjectiveCriteria.
 *
 */
class ObjectiveCriteria {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OBJECTIVECRITERIA
public:
    class ObjectiveCriteria& operator=(class ObjectiveCriteria const &) = delete;
    ObjectiveCriteria(class ObjectiveCriteria const &) = delete;
    ObjectiveCriteria() = delete;
#endif

public:
    /**
     * @symbol ?getName\@ObjectiveCriteria\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?isReadOnly\@ObjectiveCriteria\@\@QEBA_NXZ
     */
    MCAPI bool isReadOnly() const;

};

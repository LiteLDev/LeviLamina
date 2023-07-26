/**
 * @file  OnStepOffTriggerDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnStepOffTriggerDescription.
 *
 */
class OnStepOffTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTEPOFFTRIGGERDESCRIPTION
public:
    class OnStepOffTriggerDescription& operator=(class OnStepOffTriggerDescription const &) = delete;
    OnStepOffTriggerDescription(class OnStepOffTriggerDescription const &) = delete;
    OnStepOffTriggerDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OnStepOffTriggerDescription();
    /**
     * @vftbl  1
     * @symbol  ?getName\@OnStepOffTriggerDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @symbol  ?NameID\@OnStepOffTriggerDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;

};
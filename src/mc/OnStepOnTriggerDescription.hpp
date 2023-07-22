/**
 * @file  OnStepOnTriggerDescription.hpp
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
 * @brief MC class OnStepOnTriggerDescription.
 *
 */
class OnStepOnTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTEPONTRIGGERDESCRIPTION
public:
    class OnStepOnTriggerDescription& operator=(class OnStepOnTriggerDescription const &) = delete;
    OnStepOnTriggerDescription(class OnStepOnTriggerDescription const &) = delete;
    OnStepOnTriggerDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OnStepOnTriggerDescription();
    /**
     * @vftbl  1
     * @symbol  ?getName\@OnStepOnTriggerDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @symbol  ?NameID\@OnStepOnTriggerDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;

};
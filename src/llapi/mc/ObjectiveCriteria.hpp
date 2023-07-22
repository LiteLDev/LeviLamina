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
     * @symbol  ??0ObjectiveCriteria\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NW4ObjectiveRenderType\@\@\@Z
     */
    MCAPI ObjectiveCriteria(std::string const &, bool, enum class ObjectiveRenderType);
    /**
     * @symbol  ?getName\@ObjectiveCriteria\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol  ?isReadOnly\@ObjectiveCriteria\@\@QEBA_NXZ
     */
    MCAPI bool isReadOnly() const;
    /**
     * @symbol  ?deserialize\@ObjectiveCriteria\@\@SA?AV?$unique_ptr\@VObjectiveCriteria\@\@U?$default_delete\@VObjectiveCriteria\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ObjectiveCriteria> deserialize(class CompoundTag const &);
    /**
     * @symbol  ?serialize\@ObjectiveCriteria\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ObjectiveCriteria const &);

};
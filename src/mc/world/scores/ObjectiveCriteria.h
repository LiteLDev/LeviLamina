#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ObjectiveCriteria {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OBJECTIVECRITERIA
public:
    ObjectiveCriteria& operator=(ObjectiveCriteria const&) = delete;
    ObjectiveCriteria(ObjectiveCriteria const&)            = delete;
    ObjectiveCriteria()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?getName\@ObjectiveCriteria\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const;
    /**
     * @symbol ?isReadOnly\@ObjectiveCriteria\@\@QEBA_NXZ
     */
    MCAPI bool isReadOnly() const;
    /**
     * @symbol
     * ?deserialize\@ObjectiveCriteria\@\@SA?AV?$unique_ptr\@VObjectiveCriteria\@\@U?$default_delete\@VObjectiveCriteria\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ObjectiveCriteria> deserialize(class CompoundTag const&);
    /**
     * @symbol
     * ?serialize\@ObjectiveCriteria\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ObjectiveCriteria const&);
};

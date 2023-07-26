#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ObjectiveCriteria {

public:
    // prevent constructor by default
    ObjectiveCriteria& operator=(ObjectiveCriteria const&) = delete;
    ObjectiveCriteria(ObjectiveCriteria const&)            = delete;
    ObjectiveCriteria()                                    = delete;

public:
    /**
     * @symbol
     * ?getName\@ObjectiveCriteria\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const; // NOLINT
    /**
     * @symbol ?isReadOnly\@ObjectiveCriteria\@\@QEBA_NXZ
     */
    MCAPI bool isReadOnly() const; // NOLINT
    /**
     * @symbol
     * ?deserialize\@ObjectiveCriteria\@\@SA?AV?$unique_ptr\@VObjectiveCriteria\@\@U?$default_delete\@VObjectiveCriteria\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ObjectiveCriteria> deserialize(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?serialize\@ObjectiveCriteria\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ObjectiveCriteria const&); // NOLINT
};

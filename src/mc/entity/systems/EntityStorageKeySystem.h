#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeySystem {

public:
    // prevent constructor by default
    EntityStorageKeySystem& operator=(EntityStorageKeySystem const&) = delete;
    EntityStorageKeySystem(EntityStorageKeySystem const&)            = delete;
    EntityStorageKeySystem()                                         = delete;

public:
    /**
     * @symbol
     * ?generateStorageKey\@EntityStorageKeySystem\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCAPI static std::string generateStorageKey(__int64); // NOLINT
    /**
     * @symbol
     * ?getIsDirtySinceSerialization\@EntityStorageKeySystem\@\@SA_NAEAVEntityContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool getIsDirtySinceSerialization(class EntityContext&, std::string const&); // NOLINT
    /**
     * @symbol ?setDirtyFromNonSerializedState\@EntityStorageKeySystem\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void setDirtyFromNonSerializedState(class EntityContext&); // NOLINT
    /**
     * @symbol
     * ?setLastSerializedState\@EntityStorageKeySystem\@\@SAXAEAVEntityContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void setLastSerializedState(class EntityContext&, std::string const&); // NOLINT
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeySystem {

public:
    // prevent constructor by default
    EntityStorageKeySystem& operator=(EntityStorageKeySystem const&) = delete;
    EntityStorageKeySystem(EntityStorageKeySystem const&)            = delete;
    EntityStorageKeySystem()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?generateStorageKey\@EntityStorageKeySystem\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCAPI static std::string generateStorageKey(int64_t);
    /**
     * @symbol
     * ?getIsDirtySinceSerialization\@EntityStorageKeySystem\@\@SA_NAEAVEntityContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool getIsDirtySinceSerialization(class EntityContext&, std::string const&);
    /**
     * @symbol ?setDirtyFromNonSerializedState\@EntityStorageKeySystem\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void setDirtyFromNonSerializedState(class EntityContext&);
    /**
     * @symbol
     * ?setLastSerializedState\@EntityStorageKeySystem\@\@SAXAEAVEntityContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void setLastSerializedState(class EntityContext&, std::string const&);
    // NOLINTEND
};

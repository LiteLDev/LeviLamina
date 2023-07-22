/**
 * @file  EntityStorageKeySystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityStorageKeySystem.
 *
 */
class EntityStorageKeySystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSTORAGEKEYSYSTEM
public:
    class EntityStorageKeySystem& operator=(class EntityStorageKeySystem const &) = delete;
    EntityStorageKeySystem(class EntityStorageKeySystem const &) = delete;
    EntityStorageKeySystem() = delete;
#endif

public:
    /**
     * @symbol  ?generateStorageKey\@EntityStorageKeySystem\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCAPI static std::string generateStorageKey(__int64);
    /**
     * @symbol  ?getIsDirtySinceSerialization\@EntityStorageKeySystem\@\@SA_NAEAVEntityContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool getIsDirtySinceSerialization(class EntityContext &, std::string const &);
    /**
     * @symbol  ?setDirtyFromNonSerializedState\@EntityStorageKeySystem\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void setDirtyFromNonSerializedState(class EntityContext &);
    /**
     * @symbol  ?setLastSerializedState\@EntityStorageKeySystem\@\@SAXAEAVEntityContext\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void setLastSerializedState(class EntityContext &, std::string const &);

};
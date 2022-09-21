/**
 * @file  MC/EntityStorageKeySystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1012748724
     * @symbol ?generateStorageKey@EntityStorageKeySystem@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
     */
    MCAPI static std::string generateStorageKey(__int64);
    /**
     * @hash   -1135436012
     * @symbol ?getIsDirtySinceSerialization@EntityStorageKeySystem@@SA_NAEAVEntityContext@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool getIsDirtySinceSerialization(class EntityContext &, std::string const &);
    /**
     * @hash   1604262370
     * @symbol ?setDirtyFromNonSerializedState@EntityStorageKeySystem@@SAXAEAVEntityContext@@@Z
     */
    MCAPI static void setDirtyFromNonSerializedState(class EntityContext &);
    /**
     * @hash   623590715
     * @symbol ?setLastSerializedState@EntityStorageKeySystem@@SAXAEAVEntityContext@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static void setLastSerializedState(class EntityContext &, std::string const &);

};
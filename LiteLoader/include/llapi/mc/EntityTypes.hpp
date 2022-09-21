/**
 * @file  MC/EntityTypes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityTypes.
 *
 */
class EntityTypes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYTYPES
public:
    class EntityTypes& operator=(class EntityTypes const &) = delete;
    EntityTypes(class EntityTypes const &) = delete;
    EntityTypes() = delete;
#endif

public:
    /**
     * @hash   -1724197095
     * @symbol ?parseJson@EntityTypes@@QEAA_NAEBVValue@Json@@@Z
     */
    MCAPI bool parseJson(class Json::Value const &);
    /**
     * @hash   1706031266
     * @symbol ??1EntityTypes@@QEAA@XZ
     */
    MCAPI ~EntityTypes();

};
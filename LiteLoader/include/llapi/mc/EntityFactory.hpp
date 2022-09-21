/**
 * @file  MC/EntityFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityFactory.
 *
 */
class EntityFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYFACTORY
public:
    class EntityFactory& operator=(class EntityFactory const &) = delete;
    EntityFactory(class EntityFactory const &) = delete;
    EntityFactory() = delete;
#endif

public:
    /**
     * @hash   -217695237
     * @symbol ??0EntityFactory@@QEAA@V?$not_null@PEAVEntityRegistryBase@@@gsl@@@Z
     */
    MCAPI EntityFactory(class gsl::not_null<class EntityRegistryBase *>);
    /**
     * @hash   -1549179320
     * @symbol ?create@EntityFactory@@QEAA?AVStrictEntityContextOwner@@XZ
     */
    MCAPI class StrictEntityContextOwner create();
    /**
     * @hash   -1928267088
     * @symbol ?destroy@EntityFactory@@QEAAX$$QEAVStrictEntityContextOwner@@@Z
     */
    MCAPI void destroy(class StrictEntityContextOwner &&);

};
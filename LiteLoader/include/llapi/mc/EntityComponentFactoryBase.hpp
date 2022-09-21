/**
 * @file  MC/EntityComponentFactoryBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityComponentFactoryBase.
 *
 */
class EntityComponentFactoryBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYBASE
public:
    class EntityComponentFactoryBase& operator=(class EntityComponentFactoryBase const &) = delete;
    EntityComponentFactoryBase(class EntityComponentFactoryBase const &) = delete;
    EntityComponentFactoryBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYCOMPONENTFACTORYBASE
    /**
     * @hash   1755872077
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntityComponentFactoryBase();
#endif
    /**
     * @hash   -1531290753
     * @symbol ?addComponents@EntityComponentFactoryBase@@QEBAXAEAVEntityContext@@AEBVDefinitionInstanceGroup@@@Z
     */
    MCAPI void addComponents(class EntityContext &, class DefinitionInstanceGroup const &) const;
    /**
     * @hash   -235785119
     * @symbol ?removeComponents@EntityComponentFactoryBase@@QEBAXAEAVEntityContext@@AEBVDefinitionInstanceGroup@@@Z
     */
    MCAPI void removeComponents(class EntityContext &, class DefinitionInstanceGroup const &) const;

};
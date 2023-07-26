/**
 * @file  EntityComponentFactoryBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~EntityComponentFactoryBase();
#endif
    /**
     * @symbol  ?addComponents\@EntityComponentFactoryBase\@\@QEBAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI void addComponents(class EntityRegistry &, class EntityContext &, class DefinitionInstanceGroup const &) const;
    /**
     * @symbol  ?removeComponents\@EntityComponentFactoryBase\@\@QEBAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI void removeComponents(class EntityRegistry &, class EntityContext &, class DefinitionInstanceGroup const &) const;

};
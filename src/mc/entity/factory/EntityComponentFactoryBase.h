#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityComponentFactoryBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYBASE
public:
    EntityComponentFactoryBase& operator=(EntityComponentFactoryBase const&) = delete;
    EntityComponentFactoryBase(EntityComponentFactoryBase const&)            = delete;
    EntityComponentFactoryBase()                                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYCOMPONENTFACTORYBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntityComponentFactoryBase();
#endif
    /**
     * @symbol
     * ?addComponents\@EntityComponentFactoryBase\@\@QEBAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI void addComponents(class EntityRegistry&, class EntityContext&, class DefinitionInstanceGroup const&) const;
    /**
     * @symbol
     * ?removeComponents\@EntityComponentFactoryBase\@\@QEBAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI void
    removeComponents(class EntityRegistry&, class EntityContext&, class DefinitionInstanceGroup const&) const;
};

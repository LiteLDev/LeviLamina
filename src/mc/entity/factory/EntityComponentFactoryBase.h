#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityComponentFactoryBase {

public:
    // prevent constructor by default
    EntityComponentFactoryBase& operator=(EntityComponentFactoryBase const&) = delete;
    EntityComponentFactoryBase(EntityComponentFactoryBase const&)            = delete;
    EntityComponentFactoryBase()                                             = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};

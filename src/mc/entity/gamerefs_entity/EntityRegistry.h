#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class EntityRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREGISTRY
public:
    EntityRegistry& operator=(EntityRegistry const&) = delete;
    EntityRegistry(EntityRegistry const&)            = delete;
    EntityRegistry()                                 = delete;
#endif

public:
    /**
     * @symbol ?getWeakRef\@EntityRegistry\@\@QEAA?AV?$WeakRefT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRegistryRefTraits> getWeakRef();
    /**
     * @symbol ??1EntityRegistry\@\@QEAA\@XZ
     */
    MCAPI ~EntityRegistry();

    // protected:
    /**
     * @symbol ??0EntityRegistry\@\@IEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EntityRegistry(std::string);

    // private:
    /**
     * @symbol ?_createEntity\@EntityRegistry\@\@AEAA?AVEntityContext\@\@XZ
     */
    MCAPI class EntityContext _createEntity();
    /**
     * @symbol ?_destroyEntity\@EntityRegistry\@\@AEAAXVEntityContext\@\@\@Z
     */
    MCAPI void _destroyEntity(class EntityContext);

protected:
private:
};

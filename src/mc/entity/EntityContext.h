#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class EntityContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXT
public:
    EntityContext& operator=(EntityContext const&) = delete;
    EntityContext(EntityContext const&)            = delete;
    EntityContext()                                = delete;
#endif

public:
    /**
     * @symbol ??0EntityContext\@\@QEAA\@AEAVEntityRegistry\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContext(class EntityRegistry&, class EntityId);
    /**
     * @symbol ?_registry\@EntityContext\@\@QEBAAEAVEntityRegistry\@\@XZ
     */
    MCAPI class EntityRegistry& _registry() const;
    /**
     * @symbol ?getWeakRef\@EntityContext\@\@QEBA?AV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRefTraits> getWeakRef() const;
};

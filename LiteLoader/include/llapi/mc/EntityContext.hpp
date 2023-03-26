/**
 * @file  EntityContext.hpp
 *
 */
#pragma once

#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "EntityContextBase.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityContext.
 *
 */
class EntityContext : public EntityContextBase {

#define AFTER_EXTRA
// Add Member There
public:
    template <class T>
    inline T* tryGetComponent() const {
        return const_cast<T*>(_enttRegistry().try_get<T>(_getEntityId()));
    }

#define DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXT
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXT
public:
    class EntityContext& operator=(class EntityContext const &) = delete;
    EntityContext(class EntityContext const &) = delete;
    EntityContext() = delete;
#endif

public:
    /**
     * @symbol  ??0EntityContext\@\@QEAA\@AEAVEntityRegistry\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContext(class EntityRegistry &, class EntityId);
    /**
     * @symbol  ?getWeakRef\@EntityContext\@\@QEBA?AV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRefTraits> getWeakRef() const;

//protected:
    /**
     * @symbol  ?_registry\@EntityContext\@\@IEBAAEAVEntityRegistry\@\@XZ
     */
    MCAPI class EntityRegistry & _registry() const;

protected:

};
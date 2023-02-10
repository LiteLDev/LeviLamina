/**
 * @file  EntityRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityRegistry.
 *
 */
class EntityRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREGISTRY
public:
    class EntityRegistry& operator=(class EntityRegistry const &) = delete;
    EntityRegistry(class EntityRegistry const &) = delete;
    EntityRegistry() = delete;
#endif

public:
    /**
     * @hash   -844693049
     * @symbol  ?getWeakRef\@EntityRegistry\@\@QEAA?AV?$WeakRefT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRegistryRefTraits> getWeakRef();
    /**
     * @hash   -939555222
     * @symbol  ??1EntityRegistry\@\@QEAA\@XZ
     */
    MCAPI ~EntityRegistry();

//protected:
    /**
     * @hash   1303119459
     * @symbol  ??0EntityRegistry\@\@IEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EntityRegistry(std::string);

//private:
    /**
     * @hash   -1397527497
     * @symbol  ?_createEntity\@EntityRegistry\@\@AEAA?AVEntityContext\@\@XZ
     */
    MCAPI class EntityContext _createEntity();
    /**
     * @hash   1441805581
     * @symbol  ?_destroyEntity\@EntityRegistry\@\@AEAAXVEntityContext\@\@\@Z
     */
    MCAPI void _destroyEntity(class EntityContext);

protected:

private:

};
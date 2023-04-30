/**
 * @file  EntityContextBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "EntityRegistryBase.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class EntityContextBase.
 *
 */
class EntityContextBase {

#define AFTER_EXTRA
    // Add Member There
public:
    class EntityRegistryBase* mRegistry;
    const class EntityId mEntity;


    class entt::basic_registry<EntityId>& _enttRegistry() {
        return *mRegistry->mRegistry;
    }

#define DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXTBASE
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXTBASE
public:
    class EntityContextBase& operator=(class EntityContextBase const &) = delete;
    EntityContextBase(class EntityContextBase const &) = delete;
    EntityContextBase() = delete;
#endif

public:
    /**
     * @symbol ??0EntityContextBase\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContextBase(class EntityRegistryBase &, class EntityId);
    /**
     * @symbol ?isValid\@EntityContextBase\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??8EntityContextBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EntityContextBase const &) const;

//protected:
    /**
     * @symbol ?_getEntityId\@EntityContextBase\@\@IEBA?AVEntityId\@\@XZ
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @symbol ?_getRegistryId\@EntityContextBase\@\@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const;

protected:

};

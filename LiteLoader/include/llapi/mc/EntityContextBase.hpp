/**
 * @file  MC/EntityContextBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityContextBase.
 *
 */
class EntityContextBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXTBASE
public:
    class EntityContextBase& operator=(class EntityContextBase const &) = delete;
    EntityContextBase(class EntityContextBase const &) = delete;
    EntityContextBase() = delete;
#endif

public:
    /**
     * @hash   -340687233
     * @symbol ??0EntityContextBase@@QEAA@AEAVEntityRegistryBase@@VEntityId@@@Z
     */
    MCAPI EntityContextBase(class EntityRegistryBase &, class EntityId);
    /**
     * @hash   -500140172
     * @symbol ?isValid@EntityContextBase@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   207649498
     * @symbol ??8EntityContextBase@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class EntityContextBase const &) const;

//protected:
    /**
     * @hash   1108610156
     * @symbol ?_assertValid@EntityContextBase@@IEBAXXZ
     */
    MCAPI void _assertValid() const;
    /**
     * @hash   -1577275350
     * @symbol ?_enttRegistry@EntityContextBase@@IEAAAEAV?$basic_registry@VEntityId@@@entt@@XZ
     */
    MCAPI class entt::basic_registry<class EntityId> & _enttRegistry();
    /**
     * @hash   -1533440730
     * @symbol ?_enttRegistry@EntityContextBase@@IEBAAEBV?$basic_registry@VEntityId@@@entt@@XZ
     */
    MCAPI class entt::basic_registry<class EntityId> const & _enttRegistry() const;
    /**
     * @hash   -1952955163
     * @symbol ?_getEntityId@EntityContextBase@@IEBA?AVEntityId@@XZ
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @hash   -1994433148
     * @symbol ?_getRegistryId@EntityContextBase@@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const;

protected:

};
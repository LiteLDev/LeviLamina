/**
 * @file  EntityContextBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0EntityContextBase\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContextBase(class EntityRegistryBase &, class EntityId);
    /**
     * @symbol  ?isValid\@EntityContextBase\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ??8EntityContextBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EntityContextBase const &) const;

//protected:
    /**
     * @symbol  ?_assertValid\@EntityContextBase\@\@IEBAXXZ
     */
    MCAPI void _assertValid() const;
    /**
     * @symbol  ?_enttRegistry\@EntityContextBase\@\@IEAAAEAV?$basic_registry\@VEntityId\@\@V?$allocator\@VEntityId\@\@\@std\@\@\@entt\@\@XZ
     */
    MCAPI class entt::basic_registry<class EntityId, class std::allocator<class EntityId>> & _enttRegistry();
    /**
     * @symbol  ?_enttRegistry\@EntityContextBase\@\@IEBAAEBV?$basic_registry\@VEntityId\@\@V?$allocator\@VEntityId\@\@\@std\@\@\@entt\@\@XZ
     */
    MCAPI class entt::basic_registry<class EntityId, class std::allocator<class EntityId>> const & _enttRegistry() const;
    /**
     * @symbol  ?_getEntityId\@EntityContextBase\@\@IEBA?AVEntityId\@\@XZ
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @symbol  ?_getRegistryId\@EntityContextBase\@\@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const;

protected:

};
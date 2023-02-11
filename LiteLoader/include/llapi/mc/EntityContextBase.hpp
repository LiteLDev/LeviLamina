/**
 * @file  EntityContextBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -235469265
     * @symbol  ??0EntityContextBase\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContextBase(class EntityRegistryBase &, class EntityId);
    /**
     * @hash   -394922204
     * @symbol  ?isValid\@EntityContextBase\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   312867466
     * @symbol  ??8EntityContextBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EntityContextBase const &) const;

//protected:
    /**
     * @hash   1200497132
     * @symbol  ?_assertValid\@EntityContextBase\@\@IEBAXXZ
     */
    MCAPI void _assertValid() const;
    /**
     * @hash   -909905478
     * @symbol  ?_enttRegistry\@EntityContextBase\@\@IEAAAEAV?$basic_registry\@VEntityId\@\@V?$allocator\@VEntityId\@\@\@std\@\@\@entt\@\@XZ
     */
    MCAPI class entt::basic_registry<class EntityId, class std::allocator<class EntityId>> & _enttRegistry();
    /**
     * @hash   -1843507530
     * @symbol  ?_enttRegistry\@EntityContextBase\@\@IEBAAEBV?$basic_registry\@VEntityId\@\@V?$allocator\@VEntityId\@\@\@std\@\@\@entt\@\@XZ
     */
    MCAPI class entt::basic_registry<class EntityId, class std::allocator<class EntityId>> const & _enttRegistry() const;
    /**
     * @hash   -1847737195
     * @symbol  ?_getEntityId\@EntityContextBase\@\@IEBA?AVEntityId\@\@XZ
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @hash   -1889215180
     * @symbol  ?_getRegistryId\@EntityContextBase\@\@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const;

protected:

};
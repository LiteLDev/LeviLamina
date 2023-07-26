#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/gamerefs_entity/EntityRegistryBase.h"
#include "mc/entity/EntityId.h"

class EntityContextBase {

public:
    class EntityRegistryBase& mRegistry;
    class EntityId      mEntity;

    [[nodiscard]] class entt::basic_registry<EntityId>& _enttRegistry() {
        return mRegistry.mRegistry;
    }
    /**
     * @symbol ??0EntityContextBase\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI
    EntityContextBase(class EntityRegistryBase&, class EntityId); // NOLINT
    /**
     * @symbol ?isValid\@EntityContextBase\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??8EntityContextBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EntityContextBase const&) const; // NOLINT

    // protected:
    /**
     * @symbol ?_getEntityId\@EntityContextBase\@\@IEBA?AVEntityId\@\@XZ
     */
    MCAPI class EntityId _getEntityId() const; // NOLINT
    /**
     * @symbol ?_getRegistryId\@EntityContextBase\@\@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const; // NOLINT

protected:
};

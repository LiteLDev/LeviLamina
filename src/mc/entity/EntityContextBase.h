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
    [[nodiscard]] class entt::basic_registry<EntityId> const& _enttRegistry() const {
        return mRegistry.mRegistry;
    }
public:
    // NOLINTBEGIN
    /**
     * @symbol ??0EntityContextBase\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContextBase(class EntityRegistryBase&, class EntityId);
    /**
     * @symbol ?isValid\@EntityContextBase\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??8EntityContextBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EntityContextBase const&) const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_getEntityId\@EntityContextBase\@\@IEBA?AVEntityId\@\@XZ
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @symbol ?_getRegistryId\@EntityContextBase\@\@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const;
    // NOLINTEND
};

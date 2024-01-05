#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class EntityContext {
public:
    // EntityContext inner types declare
    // clang-format off
    class Hash;
    // clang-format on

    // EntityContext inner types define
    class Hash {
    public:
        // prevent constructor by default
        Hash& operator=(Hash const&);
        Hash(Hash const&);
        Hash();

    public:
        // NOLINTBEGIN
        // symbol: ??RHash@EntityContext@@QEBA_KAEBV1@@Z
        MCAPI uint64 operator()(class EntityContext const&) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EntityContext& operator=(EntityContext const&);
    EntityContext(EntityContext const&);
    EntityContext();

public:
    // NOLINTBEGIN
    // symbol: ??0EntityContext@@QEAA@AEAVEntityRegistry@@VEntityId@@@Z
    MCAPI EntityContext(class EntityRegistry& registry, class EntityId entity);

    // symbol: ?_registry@EntityContext@@QEBAAEAVEntityRegistry@@XZ
    MCAPI class EntityRegistry& _registry() const;

    // symbol: ?getWeakRef@EntityContext@@QEBA?AV?$WeakRefT@UEntityRefTraits@@@@XZ
    MCAPI class WeakRefT<struct EntityRefTraits> getWeakRef() const;

    // symbol: ?isValid@EntityContext@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??8EntityContext@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class EntityContext const&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getEntityId@EntityContext@@IEBA?AVEntityId@@XZ
    MCAPI class EntityId _getEntityId() const;

    // symbol: ?_getRegistryId@EntityContext@@IEBAIXZ
    MCAPI uint _getRegistryId() const;

    // NOLINTEND
};

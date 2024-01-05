#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class EntityComponentFactoryBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    EntityComponentFactoryBase& operator=(EntityComponentFactoryBase const&);
    EntityComponentFactoryBase(EntityComponentFactoryBase const&);
    EntityComponentFactoryBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EntityComponentFactoryBase@@MEAA@XZ
    virtual ~EntityComponentFactoryBase();

    // symbol:
    // ?addComponents@EntityComponentFactoryBase@@QEBAXAEAVEntityRegistry@@AEAVEntityContext@@AEBVDefinitionInstanceGroup@@@Z
    MCAPI void addComponents(
        class EntityRegistry&                registry,
        class EntityContext&                 entity,
        class DefinitionInstanceGroup const& definitionGroup
    ) const;

    // symbol:
    // ?removeComponents@EntityComponentFactoryBase@@QEBAXAEAVEntityRegistry@@AEAVEntityContext@@AEBVDefinitionInstanceGroup@@@Z
    MCAPI void removeComponents(
        class EntityRegistry&                registry,
        class EntityContext&                 entity,
        class DefinitionInstanceGroup const& definitionGroup
    ) const;

    // NOLINTEND
};

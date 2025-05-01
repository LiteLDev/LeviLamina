#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class DefinitionInstanceGroup;
class EntityContext;
class EntityRegistry;
// clang-format on

class EntityComponentFactoryBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityComponentFactoryBase() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    addComponents(::EntityRegistry& registry, ::EntityContext& entity, ::DefinitionInstanceGroup const& definitionGroup)
        const;

    MCNAPI void removeComponents(
        ::EntityRegistry&                registry,
        ::EntityContext&                 entity,
        ::DefinitionInstanceGroup const& definitionGroup
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

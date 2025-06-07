#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class DefinitionInstanceGroup;
class EntityContext;
// clang-format on

class EntityComponentFactoryBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityComponentFactoryBase() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addComponents(::EntityContext& entity, ::DefinitionInstanceGroup const& definitionGroup);

    MCNAPI static void removeComponents(::EntityContext& entity, ::DefinitionInstanceGroup const& definitionGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

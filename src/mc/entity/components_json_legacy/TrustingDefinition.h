#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TrustingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TrustingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk8b60f5;
    ::ll::UntypedStorage<8, 16>  mUnkc2c83e;
    ::ll::UntypedStorage<8, 104> mUnk907038;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustingDefinition& operator=(TrustingDefinition const&);
    TrustingDefinition(TrustingDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrustingDefinition();

    MCAPI void addTrustItemByName(::std::string const& name);

    MCAPI void initialize(::EntityContext&, ::TrustingComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TrustingDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

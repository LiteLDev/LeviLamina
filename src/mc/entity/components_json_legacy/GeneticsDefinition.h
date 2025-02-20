#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GeneticsComponent;
struct GeneDefinition;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeneticsDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6a83da;
    ::ll::UntypedStorage<8, 24> mUnk5906e9;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneticsDefinition& operator=(GeneticsDefinition const&);
    GeneticsDefinition(GeneticsDefinition const&);
    GeneticsDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addGeneDefinition(::GeneDefinition const& geneDefinition);

    MCAPI void initialize(::EntityContext& entity, ::GeneticsComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeneticsDefinition>>& root
    );
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

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
    ::ll::TypedStorage<4, 4, float>                            mMutationRate;
    ::ll::TypedStorage<8, 24, ::std::vector<::GeneDefinition>> mGeneDefinitions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addGeneDefinition(::GeneDefinition const& geneDefinition);

    MCNAPI void initialize(::EntityContext& entity, ::GeneticsComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeneticsDefinition>>& root
    );
    // NOLINTEND
};

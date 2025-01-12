#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ExplodeComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExplodeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk82719a;
    ::ll::UntypedStorage<4, 4> mUnk2f18c1;
    ::ll::UntypedStorage<4, 4> mUnkd3b901;
    ::ll::UntypedStorage<1, 1> mUnk886363;
    ::ll::UntypedStorage<1, 1> mUnk31d5f0;
    ::ll::UntypedStorage<4, 4> mUnk4fb8b7;
    ::ll::UntypedStorage<1, 1> mUnk5aeca6;
    ::ll::UntypedStorage<1, 1> mUnk3f66a3;
    ::ll::UntypedStorage<1, 1> mUnkeffd91;
    ::ll::UntypedStorage<1, 1> mUnk4b9529;
    ::ll::UntypedStorage<4, 4> mUnkfff79c;
    ::ll::UntypedStorage<2, 2> mUnk20681a;
    ::ll::UntypedStorage<4, 4> mUnk456eda;
    ::ll::UntypedStorage<1, 1> mUnk729fed;
    ::ll::UntypedStorage<1, 1> mUnk1b2d1c;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplodeDefinition& operator=(ExplodeDefinition const&);
    ExplodeDefinition(ExplodeDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExplodeDefinition();

    MCAPI void initialize(::EntityContext& entity, ::ExplodeComponent& component) const;

    MCAPI void setParticleDefinitionByName(::std::string const& name);

    MCAPI void setSoundDefinitionByName(::std::string const& name);

    MCFOLD void uninitialize(::EntityContext& entity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ExplodeDefinition>>& root);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

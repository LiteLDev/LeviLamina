#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TimerComponent;
struct WeightChoiceEntry;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TimerDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk6fb0ff;
    ::ll::UntypedStorage<1, 1>   mUnk1be68c;
    ::ll::UntypedStorage<4, 8>   mUnk219ada;
    ::ll::UntypedStorage<8, 104> mUnk941273;
    ::ll::UntypedStorage<8, 24>  mUnkb2a6e5;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerDefinition& operator=(TimerDefinition const&);
    TimerDefinition(TimerDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TimerDefinition();

    MCAPI void addWeightedChoiceEntry(::WeightChoiceEntry const& entry);

    MCAPI void initialize(::EntityContext& entity, ::TimerComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TimerDefinition>>& root);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

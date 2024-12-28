#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class FertilizeFarmBlockGoal;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FertilizeFarmBlockDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk61f32a;
    ::ll::UntypedStorage<4, 4> mUnkb92e5f;
    ::ll::UntypedStorage<4, 4> mUnke365e6;
    ::ll::UntypedStorage<4, 4> mUnkf893be;
    ::ll::UntypedStorage<4, 4> mUnka8913a;
    ::ll::UntypedStorage<4, 4> mUnkd3b309;
    ::ll::UntypedStorage<4, 4> mUnk99e513;
    // NOLINTEND

public:
    // prevent constructor by default
    FertilizeFarmBlockDefinition& operator=(FertilizeFarmBlockDefinition const&);
    FertilizeFarmBlockDefinition(FertilizeFarmBlockDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FertilizeFarmBlockDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FertilizeFarmBlockDefinition();

    MCAPI void initialize(::EntityContext& entity, ::FertilizeFarmBlockGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const& name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FertilizeFarmBlockDefinition>>&
            root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

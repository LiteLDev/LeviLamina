#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
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
    FertilizeFarmBlockDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FertilizeFarmBlockDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const& name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FertilizeFarmBlockDefinition>>&
            root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

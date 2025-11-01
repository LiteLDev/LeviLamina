#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HarvestFarmBlockDefinition : public ::BaseGoalDefinition {
public:
    // HarvestFarmBlockDefinition inner types define
    using self = ::HarvestFarmBlockDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMaximumSecondsUntilSearch;
    ::ll::TypedStorage<4, 4, float> mSearchCooldownMaximumSeconds;
    ::ll::TypedStorage<4, 4, float> mTaskCooldownSeconds;
    ::ll::TypedStorage<4, 4, int>   mSearchCount;
    ::ll::TypedStorage<4, 4, int>   mSearchHeight;
    ::ll::TypedStorage<4, 4, int>   mSearchRange;
    ::ll::TypedStorage<4, 4, float> mGoalRadius;
    ::ll::TypedStorage<4, 4, float> mSpeedModifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HarvestFarmBlockDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                       name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HarvestFarmBlockDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

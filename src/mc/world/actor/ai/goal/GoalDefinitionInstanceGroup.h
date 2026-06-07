#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
struct GoalId;
// clang-format on

class GoalDefinitionInstanceGroup {
public:
    // GoalDefinitionInstanceGroup inner types define
    using DefinitionId = ::GoalId;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::dense_map<ushort, ::std::shared_ptr<::IDefinitionInstance>>> mUniqueDefinitionMap;
    ::ll::TypedStorage<1, 0, ::entt::dense_map<::GoalId, ::std::shared_ptr<::IDefinitionInstance>>>
        mGenericDefinitionMap;
    // NOLINTEND
};

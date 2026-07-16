#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
struct GoalId;
// clang-format on

class GoalDefinitionInstanceGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkad56d0;
    ::ll::UntypedStorage<8, 72> mUnk756c08;
    // NOLINTEND

public:
    // prevent constructor by default
    GoalDefinitionInstanceGroup& operator=(GoalDefinitionInstanceGroup const&);
    GoalDefinitionInstanceGroup(GoalDefinitionInstanceGroup const&);
    GoalDefinitionInstanceGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(::GoalId const& id, ::std::shared_ptr<::IDefinitionInstance> const& definition);

    MCNAPI void combine(::GoalDefinitionInstanceGroup const& other);

    MCNAPI bool contains(::GoalDefinitionInstanceGroup const& other) const;

    MCNAPI bool overlaps(::GoalDefinitionInstanceGroup const& other) const;

    MCNAPI void remove(::GoalId const& id, ::std::shared_ptr<::IDefinitionInstance> const& definition);
    // NOLINTEND
};

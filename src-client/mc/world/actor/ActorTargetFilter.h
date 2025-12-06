#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
// clang-format on

struct ActorTargetFilter {
public:
    // ActorTargetFilter inner types define
    enum class ConditionType : int {
        Leaf    = 0,
        And     = 1,
        Or      = 2,
        Invalid = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorTargetFilter::ConditionType>  mType;
    ::ll::TypedStorage<8, 32, ::std::string>                      mKey;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>      mConditions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorTargetFilter>> mChildrenConditions;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<
        ::std::unordered_map<::HashedString, bool (*)(::ActorTargetFilter const&, ::Actor&)>>
    ConditionPredicates();
    // NOLINTEND
};

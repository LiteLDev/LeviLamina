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
    ::ll::UntypedStorage<4, 4>  mUnk7cfec4;
    ::ll::UntypedStorage<8, 32> mUnk3eb4d5;
    ::ll::UntypedStorage<8, 24> mUnk101989;
    ::ll::UntypedStorage<8, 24> mUnkf6a79d;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorTargetFilter& operator=(ActorTargetFilter const&);
    ActorTargetFilter(ActorTargetFilter const&);
    ActorTargetFilter();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<
        ::std::unordered_map<::HashedString, bool (*)(::ActorTargetFilter const&, ::Actor&)>>
    ConditionPredicates();
    // NOLINTEND
};

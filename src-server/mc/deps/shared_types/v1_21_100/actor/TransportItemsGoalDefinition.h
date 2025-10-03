#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct TransportItemsGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // TransportItemsGoalDefinition inner types define
    enum class SearchStrategy : int {
        Nearest = 0,
        Random  = 1,
    };

    enum class PlaceStrategy : int {
        Any                 = 0,
        WithMatching        = 1,
        WithMatchingOrEmpty = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf89a5b;
    ::ll::UntypedStorage<8, 24> mUnk1aea4a;
    ::ll::UntypedStorage<4, 4>  mUnkfc48cb;
    ::ll::UntypedStorage<4, 4>  mUnk1a3881;
    ::ll::UntypedStorage<1, 1>  mUnk8bb02d;
    ::ll::UntypedStorage<4, 4>  mUnk42aeb8;
    ::ll::UntypedStorage<4, 8>  mUnkf08f48;
    ::ll::UntypedStorage<4, 4>  mUnkbd2c3e;
    ::ll::UntypedStorage<4, 4>  mUnk8d6e39;
    ::ll::UntypedStorage<4, 4>  mUnkd7b3cb;
    ::ll::UntypedStorage<4, 4>  mUnk43df3e;
    ::ll::UntypedStorage<8, 24> mUnk29bf78;
    ::ll::UntypedStorage<8, 24> mUnk79bee2;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportItemsGoalDefinition& operator=(TransportItemsGoalDefinition const&);
    TransportItemsGoalDefinition(TransportItemsGoalDefinition const&);
    TransportItemsGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransportItemsGoalDefinition(::SharedTypes::v1_21_100::TransportItemsGoalDefinition&&);

    MCNAPI ::SharedTypes::v1_21_100::TransportItemsGoalDefinition&
    operator=(::SharedTypes::v1_21_100::TransportItemsGoalDefinition&&);

    MCNAPI ~TransportItemsGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& ALLOW_SIMULTANEOUS_INTERACTION();

    MCNAPI static uint const& IDLE_COOLDOWN();

    MCNAPI static uint const& INITIAL_COOLDOWN();

    MCNAPI static float const& INTERACTION_TIME();

    MCNAPI static uint const& MAX_STACK_SIZE();

    MCNAPI static uint const& MAX_VISITED_CONTAINERS();

    MCNAPI static ::std::string_view const& NAME();

    MCNAPI static ::Vec2 const& SEARCH_DISTANCE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_100::TransportItemsGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100

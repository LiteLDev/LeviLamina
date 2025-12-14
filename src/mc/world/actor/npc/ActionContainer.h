#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

namespace npc {

struct ActionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>> mActions;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                                                 mButtons;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionContainer& operator=(ActionContainer const&);
    ActionContainer(ActionContainer const&);
    ActionContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::npc::ActionContainer& operator=(::npc::ActionContainer&&);

    MCAPI void push(::std::variant<::npc::CommandAction, ::npc::UrlAction>&& action);

    MCAPI_C void remove(uint64 index);

    MCAPI void reset(::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>&& data);

    MCAPI ~ActionContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace npc

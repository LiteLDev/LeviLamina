#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/CommandAction.h"
#include "mc/world/actor/npc/UrlAction.h"

namespace npc {

struct ActionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>> mActions;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                                                 mButtons;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void push(::std::variant<::npc::CommandAction, ::npc::UrlAction>&& action);

#ifdef LL_PLAT_C
    MCAPI void remove(uint64 index);
#endif

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

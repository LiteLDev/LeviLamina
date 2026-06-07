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
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::variant<::npc::CommandAction, ::npc::UrlAction> const* at(uint64 i) const;

    MCFOLD ::std::variant<::npc::CommandAction, ::npc::UrlAction>* at(uint64 i);

#ifdef LL_PLAT_C
    MCAPI uint64 countButtons() const;
#endif

    MCAPI uint64 countUrl() const;

    MCFOLD ::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>> const& data() const;

    MCAPI void push(::std::variant<::npc::CommandAction, ::npc::UrlAction>&& action);

#ifdef LL_PLAT_C
    MCAPI void remove(uint64 index);
#endif

    MCAPI void reset(::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>&& data);

    MCAPI uint64 size() const;

#ifdef LL_PLAT_C
    MCAPI uint64 toIndex(uint64 buttonIndex) const;
#endif

    MCAPI ~ActionContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace npc

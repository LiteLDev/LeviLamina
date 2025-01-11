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
    ::ll::UntypedStorage<8, 24> mUnke14f11;
    ::ll::UntypedStorage<8, 24> mUnk8bc2fe;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionContainer& operator=(ActionContainer const&);
    ActionContainer(ActionContainer const&);
    ActionContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::variant<::npc::CommandAction, ::npc::UrlAction> const* at(uint64) const;

    MCFOLD ::std::variant<::npc::CommandAction, ::npc::UrlAction>* at(uint64 i);

    MCAPI uint64 countUrl() const;

    MCFOLD ::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>> const& data() const;

    MCAPI ::npc::ActionContainer& operator=(::npc::ActionContainer&&);

    MCAPI void push(::std::variant<::npc::CommandAction, ::npc::UrlAction>&& action);

    MCAPI void reset(::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>&& data);

    MCFOLD uint64 size() const;

    MCAPI ~ActionContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace npc

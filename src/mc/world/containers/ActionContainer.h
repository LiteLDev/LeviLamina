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
    // prevent constructor by default
    ActionContainer& operator=(ActionContainer const&);
    ActionContainer(ActionContainer const&);
    ActionContainer();

public:
    // NOLINTBEGIN
    MCAPI std::variant<struct npc::CommandAction, struct npc::UrlAction>* at(uint64 i);

    MCAPI std::variant<struct npc::CommandAction, struct npc::UrlAction> const* at(uint64 i) const;

    MCAPI uint64 countUrl() const;

    MCAPI std::vector<std::variant<struct npc::CommandAction, struct npc::UrlAction>> const& data() const;

    MCAPI void push(std::variant<struct npc::CommandAction, struct npc::UrlAction>&& action);

    MCAPI void reset(std::vector<std::variant<struct npc::CommandAction, struct npc::UrlAction>>&& data);

    MCAPI uint64 size() const;

    MCAPI ~ActionContainer();

    // NOLINTEND
};

}; // namespace npc

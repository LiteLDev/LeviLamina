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
    // symbol: ?at@ActionContainer@npc@@QEAAPEAV?$variant@UCommandAction@npc@@UUrlAction@2@@std@@_K@Z
    MCAPI std::variant<struct npc::CommandAction, struct npc::UrlAction>* at(uint64 i);

    // symbol: ?at@ActionContainer@npc@@QEBAPEBV?$variant@UCommandAction@npc@@UUrlAction@2@@std@@_K@Z
    MCAPI std::variant<struct npc::CommandAction, struct npc::UrlAction> const* at(uint64 i) const;

    // symbol: ?countUrl@ActionContainer@npc@@QEBA_KXZ
    MCAPI uint64 countUrl() const;

    // symbol:
    // ?data@ActionContainer@npc@@QEBAAEBV?$vector@V?$variant@UCommandAction@npc@@UUrlAction@2@@std@@V?$allocator@V?$variant@UCommandAction@npc@@UUrlAction@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::variant<struct npc::CommandAction, struct npc::UrlAction>> const& data() const;

    // symbol: ?push@ActionContainer@npc@@QEAAX$$QEAV?$variant@UCommandAction@npc@@UUrlAction@2@@std@@@Z
    MCAPI void push(std::variant<struct npc::CommandAction, struct npc::UrlAction>&& action);

    // symbol:
    // ?reset@ActionContainer@npc@@QEAAX$$QEAV?$vector@V?$variant@UCommandAction@npc@@UUrlAction@2@@std@@V?$allocator@V?$variant@UCommandAction@npc@@UUrlAction@2@@std@@@2@@std@@@Z
    MCAPI void reset(std::vector<std::variant<struct npc::CommandAction, struct npc::UrlAction>>&& data);

    // symbol: ?size@ActionContainer@npc@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ??1ActionContainer@npc@@QEAA@XZ
    MCAPI ~ActionContainer();

    // NOLINTEND
};

}; // namespace npc

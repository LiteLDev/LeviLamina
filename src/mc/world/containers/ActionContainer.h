#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

namespace npc {

struct ActionContainer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC_ACTIONCONTAINER
public:
    ActionContainer& operator=(ActionContainer const&) = delete;
    ActionContainer(ActionContainer const&)            = delete;
    ActionContainer()                                  = delete;
#endif

public:
    /**
     * @symbol ?at\@ActionContainer\@npc\@\@QEAAPEAV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@_K\@Z
     */
    MCAPI class std::variant<struct npc::CommandAction, struct npc::UrlAction>* at(unsigned __int64);
    /**
     * @symbol ?at\@ActionContainer\@npc\@\@QEBAPEBV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@_K\@Z
     */
    MCAPI class std::variant<struct npc::CommandAction, struct npc::UrlAction> const* at(unsigned __int64) const;
    /**
     * @symbol ?countUrl\@ActionContainer\@npc\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 countUrl() const;
    /**
     * @symbol
     * ?data\@ActionContainer\@npc\@\@QEBAAEBV?$vector\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@V?$allocator\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::variant<struct npc::CommandAction, struct npc::UrlAction>> const& data() const;
    /**
     * @symbol ?push\@ActionContainer\@npc\@\@QEAAX$$QEAV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@Z
     */
    MCAPI void push(class std::variant<struct npc::CommandAction, struct npc::UrlAction>&&);
    /**
     * @symbol
     * ?reset\@ActionContainer\@npc\@\@QEAAX$$QEAV?$vector\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@V?$allocator\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void reset(std::vector<class std::variant<struct npc::CommandAction, struct npc::UrlAction>>&&);
    /**
     * @symbol ?size\@ActionContainer\@npc\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @symbol ??1ActionContainer\@npc\@\@QEAA\@XZ
     */
    MCAPI ~ActionContainer();
};

}; // namespace npc

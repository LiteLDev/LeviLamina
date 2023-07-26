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
    ActionContainer& operator=(ActionContainer const&) = delete;
    ActionContainer(ActionContainer const&)            = delete;
    ActionContainer()                                  = delete;

public:
    /**
     * @symbol ?at\@ActionContainer\@npc\@\@QEAAPEAV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@_K\@Z
     */
    MCAPI class std::variant<struct npc::CommandAction, struct npc::UrlAction>* at(unsigned __int64); // NOLINT
    /**
     * @symbol ?at\@ActionContainer\@npc\@\@QEBAPEBV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@_K\@Z
     */
    MCAPI class std::variant<struct npc::CommandAction, struct npc::UrlAction> const* at(unsigned __int64
    ) const; // NOLINT
    /**
     * @symbol ?countUrl\@ActionContainer\@npc\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 countUrl() const; // NOLINT
    /**
     * @symbol
     * ?data\@ActionContainer\@npc\@\@QEBAAEBV?$vector\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@V?$allocator\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::variant<struct npc::CommandAction, struct npc::UrlAction>> const&
          data() const; // NOLINT
    /**
     * @symbol ?push\@ActionContainer\@npc\@\@QEAAX$$QEAV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@Z
     */
    MCAPI void push(class std::variant<struct npc::CommandAction, struct npc::UrlAction>&&); // NOLINT
    /**
     * @symbol
     * ?reset\@ActionContainer\@npc\@\@QEAAX$$QEAV?$vector\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@V?$allocator\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void reset(std::vector<class std::variant<struct npc::CommandAction, struct npc::UrlAction>>&&); // NOLINT
    /**
     * @symbol ?size\@ActionContainer\@npc\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const; // NOLINT
    /**
     * @symbol ??1ActionContainer\@npc\@\@QEAA\@XZ
     */
    MCAPI ~ActionContainer(); // NOLINT
};

}; // namespace npc

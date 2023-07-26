#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftApp;
namespace Automation { class AutomationClient; }
namespace CodeBuilder { class IMessenger; }
// clang-format on

namespace CodeBuilder {

class Manager {

public:
    // prevent constructor by default
    Manager& operator=(Manager const&) = delete;
    Manager(Manager const&)            = delete;
    Manager()                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getAutomationClient\@Manager\@CodeBuilder\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VAutomationClient\@Automation\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class Automation::AutomationClient>>
    getAutomationClient() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getEventing\@Manager\@CodeBuilder\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VIMessenger\@CodeBuilder\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class CodeBuilder::IMessenger>>
    getEventing() const; // NOLINT
    /**
     * @symbol ??0Manager\@CodeBuilder\@\@QEAA\@AEAVIMinecraftApp\@\@\@Z
     */
    MCAPI Manager(class IMinecraftApp&); // NOLINT
};

}; // namespace CodeBuilder

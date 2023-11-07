#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IManager.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftApp;
namespace Automation { class AutomationClient; }
namespace CodeBuilder { class IManager; }
namespace CodeBuilder { class IMessenger; }
// clang-format on

namespace CodeBuilder {

class Manager : public ::CodeBuilder::IManager {
public:
    // prevent constructor by default
    Manager& operator=(Manager const&);
    Manager(Manager const&);
    Manager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Manager@CodeBuilder@@UEAA@XZ
    virtual ~Manager() = default;

    // vIndex: 1, symbol:
    // ?getAutomationClient@Manager@CodeBuilder@@UEBA?AV?$not_null@V?$NonOwnerPointer@VAutomationClient@Automation@@@Bedrock@@@gsl@@XZ
    virtual Bedrock::NotNullNonOwnerPtr<class Automation::AutomationClient> getAutomationClient() const;

    // vIndex: 2, symbol:
    // ?getEventing@Manager@CodeBuilder@@UEBA?AV?$not_null@V?$NonOwnerPointer@VIMessenger@CodeBuilder@@@Bedrock@@@gsl@@XZ
    virtual Bedrock::NotNullNonOwnerPtr<class CodeBuilder::IMessenger> getEventing() const;

    // symbol: ??0Manager@CodeBuilder@@QEAA@AEAVIMinecraftApp@@@Z
    MCAPI explicit Manager(class IMinecraftApp&);

    // NOLINTEND
};

}; // namespace CodeBuilder

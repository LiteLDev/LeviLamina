#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
    // vIndex: 0
    virtual ~Manager() = default;

    // vIndex: 1
    virtual Bedrock::NotNullNonOwnerPtr<class Automation::AutomationClient> getAutomationClient() const;

    // vIndex: 2
    virtual Bedrock::NotNullNonOwnerPtr<class CodeBuilder::IMessenger> getEventing() const;

    MCAPI explicit Manager(class IMinecraftApp& minecraftApp);

    // NOLINTEND
};

}; // namespace CodeBuilder

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace CodeBuilder { class IMessenger; }
// clang-format on

namespace CodeBuilder {

class IManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CodeBuilder::IMessenger> getEventing() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder

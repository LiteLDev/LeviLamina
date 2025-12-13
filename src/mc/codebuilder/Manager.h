#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace CodeBuilder { class IMessenger; }
// clang-format on

namespace CodeBuilder {

class Manager : public ::CodeBuilder::IManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk60b204;
    ::ll::UntypedStorage<8, 8> mUnk89b328;
    // NOLINTEND

public:
    // prevent constructor by default
    Manager& operator=(Manager const&);
    Manager(Manager const&);
    Manager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Manager() /*override*/ = default;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CodeBuilder::IMessenger> getEventing() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> $getAutomationClient() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::CodeBuilder::IMessenger> $getEventing() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace CodeBuilder

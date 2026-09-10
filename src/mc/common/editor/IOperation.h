#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Transactions {

class IOperation {
public:
    // IOperation inner types define
    enum class ProcessingState : int {
        NotRequired = 0,
        NotStarted  = 1,
        InProgress  = 2,
        Completed   = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOperation() = default;

    virtual ::std::string_view getName() = 0;

    virtual ::Scripting::Result_deprecated<void> _processUndo(::Editor::ServiceProviderCollection& services) = 0;

    virtual ::Scripting::Result_deprecated<void> _processRedo(::Editor::ServiceProviderCollection& services) = 0;

    virtual ::Editor::Transactions::IOperation::ProcessingState _getProcessingState() const;

    virtual ::Scripting::Result_deprecated<void> _clearActiveProcess();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::Transactions::IOperation::ProcessingState $_getProcessingState() const;

    MCNAPI ::Scripting::Result_deprecated<void> $_clearActiveProcess();


    // NOLINTEND
};

} // namespace Editor::Transactions

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
    // IOperation inner types declare
    // clang-format off
    struct EventData;
    struct ProcessResult;
    // clang-format on

    // IOperation inner types define
    enum class ProcessingState : int {
        NotRequired = 0,
        NotStarted  = 1,
        InProgress  = 2,
        Completed   = 3,
    };

    struct EventData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk9d67e1;
        ::ll::UntypedStorage<8, 64> mUnk4e921d;
        // NOLINTEND

    public:
        // prevent constructor by default
        EventData& operator=(EventData const&);
        EventData(EventData const&);
        EventData();
    };

    struct ProcessResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88>  mUnk57d60b;
        ::ll::UntypedStorage<8, 224> mUnk3fa93a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProcessResult& operator=(ProcessResult const&);
        ProcessResult(ProcessResult const&);
        ProcessResult();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOperation() = default;

    virtual ::std::string_view getName() = 0;

    virtual ::Editor::Transactions::IOperation::ProcessResult
    _processUndo(::Editor::ServiceProviderCollection& services) = 0;

    virtual ::Editor::Transactions::IOperation::ProcessResult
    _processRedo(::Editor::ServiceProviderCollection& services) = 0;

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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IOperation.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Transactions {

class UserDefinedOperation : public ::Editor::Transactions::IOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk641da6;
    ::ll::UntypedStorage<8, 32> mUnke6a087;
    ::ll::UntypedStorage<8, 32> mUnk7c8200;
    ::ll::UntypedStorage<8, 16> mUnk74970f;
    // NOLINTEND

public:
    // prevent constructor by default
    UserDefinedOperation& operator=(UserDefinedOperation const&);
    UserDefinedOperation(UserDefinedOperation const&);
    UserDefinedOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getName() /*override*/;

    virtual ::Editor::Transactions::IOperation::ProcessResult
    _processUndo(::Editor::ServiceProviderCollection& services) /*override*/;

    virtual ::Editor::Transactions::IOperation::ProcessResult
    _processRedo(::Editor::ServiceProviderCollection& services) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getName();

    MCNAPI ::Editor::Transactions::IOperation::ProcessResult
    $_processUndo(::Editor::ServiceProviderCollection& services);

    MCNAPI ::Editor::Transactions::IOperation::ProcessResult
    $_processRedo(::Editor::ServiceProviderCollection& services);


    // NOLINTEND
};

} // namespace Editor::Transactions

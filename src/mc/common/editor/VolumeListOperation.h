#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IOperation.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Transactions {

class VolumeListOperation : public ::Editor::Transactions::IOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1f5a52;
    ::ll::UntypedStorage<8, 24> mUnkc6a483;
    ::ll::UntypedStorage<8, 16> mUnk7c5e8a;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeListOperation& operator=(VolumeListOperation const&);
    VolumeListOperation(VolumeListOperation const&);
    VolumeListOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VolumeListOperation() /*override*/ = default;

    virtual ::std::string_view getName() /*override*/;

    virtual ::Editor::Transactions::IOperation::ProcessResult
    _processUndo(::Editor::ServiceProviderCollection& services) /*override*/;

    virtual ::Editor::Transactions::IOperation::ProcessResult
    _processRedo(::Editor::ServiceProviderCollection& services) /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& DEFAULT_OPERATION_NAME();
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

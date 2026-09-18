#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IOperation.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 { struct InstanceData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Transactions {

class PrefabInstanceOperation : public ::Editor::Transactions::IOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkafc4be;
    ::ll::UntypedStorage<8, 40> mUnk15ff1b;
    ::ll::UntypedStorage<8, 40> mUnk16df35;
    ::ll::UntypedStorage<8, 16> mUnkd9320f;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabInstanceOperation& operator=(PrefabInstanceOperation const&);
    PrefabInstanceOperation(PrefabInstanceOperation const&);
    PrefabInstanceOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabInstanceOperation() /*override*/ = default;

    virtual ::std::string_view getName() /*override*/;

    virtual ::Editor::Transactions::IOperation::ProcessResult
    _processUndo(::Editor::ServiceProviderCollection& services) /*override*/;

    virtual ::Editor::Transactions::IOperation::ProcessResult
    _processRedo(::Editor::ServiceProviderCollection& services) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PrefabInstanceOperation(
        ::mce::UUID const&             instanceId,
        ::std::optional<::std::string> oldPayload,
        ::std::optional<::std::string> newPayload,
        ::mce::UUID                    eventHandlerId
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    _applyPayload(::Editor::ServiceProviderCollection& services, ::std::optional<::std::string> const& payload) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::Result_deprecated<::std::string>
    serializeSnapshot(::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData const& data);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& DEFAULT_OPERATION_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::UUID const&             instanceId,
        ::std::optional<::std::string> oldPayload,
        ::std::optional<::std::string> newPayload,
        ::mce::UUID                    eventHandlerId
    );
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

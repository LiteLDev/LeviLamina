#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IPendingOperation.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { class IOperation; }
// clang-format on

namespace Editor::Transactions {

class PrefabInstancePendingOperation : public ::Editor::Transactions::IPendingOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4402af;
    ::ll::UntypedStorage<8, 16> mUnk3f9f24;
    ::ll::UntypedStorage<8, 16> mUnkb45866;
    ::ll::UntypedStorage<8, 40> mUnkf6481f;
    ::ll::UntypedStorage<8, 40> mUnka9e5b2;
    ::ll::UntypedStorage<1, 1>  mUnkdc1520;
    ::ll::UntypedStorage<8, 16> mUnk9c0f65;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabInstancePendingOperation& operator=(PrefabInstancePendingOperation const&);
    PrefabInstancePendingOperation(PrefabInstancePendingOperation const&);
    PrefabInstancePendingOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::Editor::Transactions::IOperation>
    _commit(::Editor::ServiceProviderCollection&) /*override*/;

    virtual ::Scripting::Result_deprecated<bool> _discard(::Editor::ServiceProviderCollection&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::string> _createCurrentSnapshotPayload();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Editor::Transactions::IOperation> $_commit(::Editor::ServiceProviderCollection&);

    MCNAPI ::Scripting::Result_deprecated<bool> $_discard(::Editor::ServiceProviderCollection&);


    // NOLINTEND
};

} // namespace Editor::Transactions

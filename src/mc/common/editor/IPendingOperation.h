#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { class IOperation; }
// clang-format on

namespace Editor::Transactions {

class IPendingOperation {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPendingOperation() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::Editor::Transactions::IOperation> _commit(::Editor::ServiceProviderCollection&) = 0;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<bool> _discard(::Editor::ServiceProviderCollection&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Transactions

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPendingTransaction
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPendingTransaction> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk35d33c;
    ::ll::UntypedStorage<8, 32> mUnkf87103;
    ::ll::UntypedStorage<8, 16> mUnk93e4de;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPendingTransaction& operator=(ScriptPendingTransaction const&);
    ScriptPendingTransaction(ScriptPendingTransaction const&);
    ScriptPendingTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> commitTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<void> discard();

    MCNAPI ::Scripting::Result_deprecated<int> discardTrackedChanges();

    MCNAPI ::std::optional<::mce::UUID> getUUID() const;

    MCNAPI ::Scripting::Result_deprecated<void> submit();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::Error getInvalidPendingTransactionError();

    MCNAPI static ::Scripting::Error getInvalidTransactionManagerError();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

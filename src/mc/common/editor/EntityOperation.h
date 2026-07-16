#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IOperation.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::Transactions {

class EntityOperation : public ::Editor::Transactions::IOperation {
public:
    // EntityOperation inner types define
    enum class OperationType : int {
        Create = 0,
        Delete = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd7236d;
    ::ll::UntypedStorage<8, 8> mUnk52c0aa;
    ::ll::UntypedStorage<8, 8> mUnk4a2873;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityOperation& operator=(EntityOperation const&);
    EntityOperation(EntityOperation const&);
    EntityOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntityOperation() /*override*/ = default;

    virtual ::std::string_view getName() /*override*/;

    virtual ::Scripting::Result_deprecated<void> _undo(::Editor::ServiceProviderCollection&) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _redo(::Editor::ServiceProviderCollection&) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindOperationType();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Transactions

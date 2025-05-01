#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IOperation.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Editor { class ServiceProviderCollection; }
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
    ::ll::UntypedStorage<8, 8> mUnkf68a91;
    ::ll::UntypedStorage<8, 8> mUnk6cbeac;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityOperation& operator=(EntityOperation const&);
    EntityOperation(EntityOperation const&);
    EntityOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityOperation() /*override*/ = default;

    // vIndex: 1
    virtual ::std::string_view getName() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> _undo(::Editor::ServiceProviderCollection& services) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> _redo(::Editor::ServiceProviderCollection& services) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> _loadEntity(::Level* level);

    MCNAPI ::Scripting::Result<void> _performOperation(::Editor::ServiceProviderCollection& services, bool isUndo);

    MCNAPI ::Scripting::Result<void> _saveEntity(::Level* level);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<
        ::Editor::Transactions::EntityOperation::OperationType,
        ::Editor::Transactions::EntityOperation::OperationType>
    bindOperationType();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_OPERATION_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getName();

    MCNAPI ::Scripting::Result<void> $_undo(::Editor::ServiceProviderCollection& services);

    MCNAPI ::Scripting::Result<void> $_redo(::Editor::ServiceProviderCollection& services);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Transactions

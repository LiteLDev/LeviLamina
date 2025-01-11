#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Selection { class SelectionContainer; }
namespace Editor::Services { struct SelectionEvent; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class SelectionServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionServiceProvider() = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>> createContainer() = 0;

    // vIndex: 2
    virtual ::Scripting::Result<void> destroyContainer(::WeakRef<::Editor::Selection::SelectionContainer>) = 0;

    // vIndex: 3
    virtual ::StackRefResult<::Editor::Selection::SelectionContainer> getPrimaryContainer() const = 0;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>>
    findContainer(::mce::UUID const&) const = 0;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<::std::vector<::mce::UUID>> getContainerIdList() const = 0;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        registerSelectionEventListener(::std::function<void(::Editor::Services::SelectionEvent const&)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PersistenceGroupItemChangeAction.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Services { class PersistenceItem; }
// clang-format on

namespace Editor::Services {

class PersistenceGroup : public ::EnableGetWeakRef<::Editor::Services::PersistenceGroup>, public ::std::enable_shared_from_this<::Editor::Services::PersistenceGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9f4a0b;
    ::ll::UntypedStorage<4, 4> mUnk941631;
    ::ll::UntypedStorage<8, 32> mUnk68c2ae;
    ::ll::UntypedStorage<8, 32> mUnkc3cac7;
    ::ll::UntypedStorage<8, 32> mUnkdcc59d;
    ::ll::UntypedStorage<4, 4> mUnk8a3069;
    ::ll::UntypedStorage<8, 64> mUnk514497;
    ::ll::UntypedStorage<8, 64> mUnkeca406;
    ::ll::UntypedStorage<8, 8> mUnk5c88f2;
    ::ll::UntypedStorage<8, 48> mUnkf66f23;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroup& operator=(PersistenceGroup const&);
    PersistenceGroup(PersistenceGroup const&);
    PersistenceGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadItems();

    MCNAPI void _notifyItemChanged(::Editor::Services::PersistenceItem const& item);

    MCNAPI ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceItem>> createItem(::std::string const& itemName, ::std::optional<::std::string> defaultJsonValue);

    MCNAPI ::Scripting::Result_deprecated<void> deleteItem(::std::string const& itemName);

    MCNAPI ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceItem>> fetchItem(::std::string const& itemName) const;

    MCNAPI ::std::string getNamespaceVersionedName() const;

    MCNAPI ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceItem>> getOrCreateItem(::std::string const& itemName, ::std::optional<::std::string> defaultJsonValue);

    MCNAPI ::std::vector<::std::string> listItems() const;

    MCNAPI ::Bedrock::PubSub::Subscription onItemChange(::std::function<void(::Editor::Services::PersistenceGroupItemChangeAction, ::StackRefResult<::Editor::Services::PersistenceItem>&)> callback);

    MCNAPI bool operator==(::Editor::Services::PersistenceGroup const& other) const;

    MCNAPI ~PersistenceGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}

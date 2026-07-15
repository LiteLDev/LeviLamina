#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IContentBadgeContainer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/datastore/container/Container.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::DataStore { class PayloadEventDispatcher; }
namespace Editor::DataStore { struct PayloadDescription; }
namespace Editor::Services { class PersistenceGroup; }
namespace Json { class Value; }
// clang-format on

namespace Editor::DataStore {

class ContentBadgeContainer : public ::Editor::DataStore::Container,
                              public ::Editor::DataStore::IContentBadgeContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk193185;
    ::ll::UntypedStorage<8, 48> mUnkcd5303;
    ::ll::UntypedStorage<1, 1>  mUnk134b97;
    ::ll::UntypedStorage<8, 16> mUnk7c976a;
    ::ll::UntypedStorage<8, 16> mUnk6486ed;
    ::ll::UntypedStorage<8, 16> mUnk18e5ef;
    ::ll::UntypedStorage<8, 16> mUnkc81421;
    ::ll::UntypedStorage<1, 1>  mUnk5e36f6;
    ::ll::UntypedStorage<8, 64> mUnkea6c9f;
    ::ll::UntypedStorage<8, 64> mUnk7a32ad;
    ::ll::UntypedStorage<8, 64> mUnk7a266c;
    ::ll::UntypedStorage<8, 64> mUnk489bd6;
    ::ll::UntypedStorage<8, 64> mUnk4ec788;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentBadgeContainer& operator=(ContentBadgeContainer const&);
    ContentBadgeContainer(ContentBadgeContainer const&);
    ContentBadgeContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentBadgeContainer() /*override*/ = default;

    virtual ::Editor::DataStore::IContentBadgeContainer::Config const& getConfig() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> setSuppressNewBadges(bool) /*override*/;

    virtual ::Scripting::Result_deprecated<void> clearBadge(::HashedString const&) /*override*/;

    virtual ::Scripting::Result_deprecated<void> clearAllRegisteredBadges() /*override*/;

    virtual ::Scripting::Result_deprecated<void> restoreAllRegisteredBadges() /*override*/;

    virtual ::Bedrock::PubSub::Subscription
        onVisibleBadgesChanged(::std::function<void(::std::unordered_set<::HashedString> const&)>) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
        onConfigChanged(::std::function<void(::Editor::DataStore::IContentBadgeContainer::Config const&)>) /*override*/;

    virtual ::std::unordered_set<::HashedString> const& getVisibleBadges() /*override*/;

    virtual void clear() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentBadgeContainer(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);

    MCNAPI ::Scripting::Result_deprecated<void> handleDataEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

#ifdef LL_PLAT_C
    MCNAPI void initialize(
        ::WeakRef<::Editor::Services::PersistenceGroup> persistence,
        ::std::unordered_map<::HashedString, int>       defaultBadges,
        bool                                            ignoreEditorBadges
    );
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_DATA();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::DataStore

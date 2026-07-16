#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace Editor::DataStore {

class IContentBadgeContainer {
public:
    // IContentBadgeContainer inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // IContentBadgeContainer inner types define
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk26b909;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Editor::DataStore::IContentBadgeContainer::Config const& getConfig() const = 0;

    virtual ::Scripting::Result_deprecated<void> setSuppressNewBadges(bool) = 0;

    virtual ::Scripting::Result_deprecated<void> clearBadge(::HashedString const&) = 0;

    virtual ::Scripting::Result_deprecated<void> clearAllRegisteredBadges() = 0;

    virtual ::Scripting::Result_deprecated<void> restoreAllRegisteredBadges() = 0;

    virtual ::std::unordered_set<::HashedString> const& getVisibleBadges() = 0;

    virtual ::Bedrock::PubSub::Subscription
        onVisibleBadgesChanged(::std::function<void(::std::unordered_set<::HashedString> const&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription
        onConfigChanged(::std::function<void(::Editor::DataStore::IContentBadgeContainer::Config const&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::DataStore

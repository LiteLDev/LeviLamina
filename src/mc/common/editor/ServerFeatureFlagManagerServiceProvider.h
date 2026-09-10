#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/FeatureFlagSource.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { struct FeatureFlagEntry; }
// clang-format on

namespace Editor::Services {

class ServerFeatureFlagManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerFeatureFlagManagerServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void> registerGlobalFlag(
        ::std::string const&        name,
        bool                        defaultValue,
        ::Editor::FeatureFlagSource source,
        ::std::string const&        description,
        bool                        readOnly
    ) = 0;

    virtual ::Scripting::Result_deprecated<void> setGlobalFlag(::std::string const& name, bool value) = 0;

    virtual ::std::optional<bool> getGlobalFlag(::std::string const& name) const = 0;

    virtual bool hasGlobalFlag(::std::string const& name) const = 0;

    virtual ::std::vector<::Editor::FeatureFlagEntry> getSnapshot() const = 0;

    virtual ::Bedrock::PubSub::Subscription
    listenForGlobalFlagChanged(::std::function<void(::Editor::FeatureFlagEntry const&)> func) = 0;
    // NOLINTEND
};

} // namespace Editor::Services

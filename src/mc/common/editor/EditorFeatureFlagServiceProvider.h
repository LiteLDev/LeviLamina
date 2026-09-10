#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/FeatureFlagCategory.h"
#include "mc/common/editor/FeatureFlagSource.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { struct FeatureFlagEntry; }
// clang-format on

namespace Editor::Services {

class EditorFeatureFlagServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorFeatureFlagServiceProvider() = default;

    virtual ::std::optional<bool> getFlag(::std::string const& name) const = 0;

    virtual ::Scripting::Result_deprecated<void> setFlag(::std::string const& name, bool value) = 0;

    virtual ::Scripting::Result_deprecated<void> registerFlag(
        ::std::string const&          name,
        bool                          defaultValue,
        ::Editor::FeatureFlagCategory category,
        ::Editor::FeatureFlagSource   source,
        ::std::string const&          description,
        bool                          readOnly
    ) = 0;

    virtual bool hasFlag(::std::string const& name) const = 0;

    virtual ::std::unordered_map<::std::string, ::Editor::FeatureFlagEntry> const& getAllFlags() const = 0;

    virtual bool isHost() const = 0;

    virtual ::Bedrock::PubSub::Subscription
    listenForFlagChanged(::std::function<void(::std::string const&, bool, ::Editor::FeatureFlagCategory)> func) = 0;
    // NOLINTEND
};

} // namespace Editor::Services

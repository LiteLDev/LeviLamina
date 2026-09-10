#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorFeatureFlagServiceProvider.h"
#include "mc/common/editor/FeatureFlagCategory.h"
#include "mc/common/editor/FeatureFlagSource.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct FeatureFlagEntry; }
namespace Editor::Network { class FeatureFlagBulkSyncPayload; }
namespace Editor::Network { class FeatureFlagChangedPayload; }
// clang-format on

namespace Editor::Services {

class EditorFeatureFlagService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::EditorFeatureFlagServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc8710c;
    ::ll::UntypedStorage<8, 16> mUnka80bd5;
    ::ll::UntypedStorage<8, 16> mUnk1ae6c8;
    ::ll::UntypedStorage<8, 48> mUnkf1abd1;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorFeatureFlagService& operator=(EditorFeatureFlagService const&);
    EditorFeatureFlagService(EditorFeatureFlagService const&);
    EditorFeatureFlagService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorFeatureFlagService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::optional<bool> getFlag(::std::string const& name) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> setFlag(::std::string const& name, bool value) /*override*/;

    virtual ::Scripting::Result_deprecated<void> registerFlag(
        ::std::string const&          name,
        bool                          defaultValue,
        ::Editor::FeatureFlagCategory category,
        ::Editor::FeatureFlagSource   source,
        ::std::string const&          description,
        bool                          readOnly
    ) /*override*/;

    virtual bool hasFlag(::std::string const& name) const /*override*/;

    virtual ::std::unordered_map<::std::string, ::Editor::FeatureFlagEntry> const& getAllFlags() const /*override*/;

    virtual ::Bedrock::PubSub::Subscription listenForFlagChanged(
        ::std::function<void(::std::string const&, bool, ::Editor::FeatureFlagCategory)> func
    ) /*override*/;

#ifdef LL_PLAT_S
    virtual void _handleFeatureFlagChangedPayload(::Editor::Network::FeatureFlagChangedPayload const&);
#else // LL_PLAT_C
    virtual void _handleFeatureFlagChangedPayload(::Editor::Network::FeatureFlagChangedPayload const& payload);
#endif

    virtual void _handleFeatureFlagBulkSyncPayload(::Editor::Network::FeatureFlagBulkSyncPayload const& payload);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorFeatureFlagService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::optional<bool> $getFlag(::std::string const& name) const;

    MCNAPI ::Scripting::Result_deprecated<void> $setFlag(::std::string const& name, bool value);

    MCNAPI ::Scripting::Result_deprecated<void> $registerFlag(
        ::std::string const&          name,
        bool                          defaultValue,
        ::Editor::FeatureFlagCategory category,
        ::Editor::FeatureFlagSource   source,
        ::std::string const&          description,
        bool                          readOnly
    );

    MCNAPI bool $hasFlag(::std::string const& name) const;

    MCNAPI ::std::unordered_map<::std::string, ::Editor::FeatureFlagEntry> const& $getAllFlags() const;

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForFlagChanged(::std::function<void(::std::string const&, bool, ::Editor::FeatureFlagCategory)> func);

#ifdef LL_PLAT_S
    MCNAPI void $_handleFeatureFlagChangedPayload(::Editor::Network::FeatureFlagChangedPayload const&);
#else // LL_PLAT_C
    MCNAPI void $_handleFeatureFlagChangedPayload(::Editor::Network::FeatureFlagChangedPayload const& payload);
#endif

    MCNAPI void $_handleFeatureFlagBulkSyncPayload(::Editor::Network::FeatureFlagBulkSyncPayload const& payload);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorFeatureFlagServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services

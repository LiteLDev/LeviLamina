#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/FeatureFlagSource.h"
#include "mc/common/editor/ServerFeatureFlagManagerServiceProvider.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct FeatureFlagEntry; }
// clang-format on

namespace Editor::Services {

class ServerFeatureFlagManagerService : public ::Editor::Services::IEditorService,
                                        public ::Editor::Services::ServerFeatureFlagManagerServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk729047;
    ::ll::UntypedStorage<8, 64> mUnkddc0e2;
    ::ll::UntypedStorage<8, 48> mUnk2d5463;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerFeatureFlagManagerService& operator=(ServerFeatureFlagManagerService const&);
    ServerFeatureFlagManagerService(ServerFeatureFlagManagerService const&);
    ServerFeatureFlagManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerFeatureFlagManagerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> registerGlobalFlag(
        ::std::string const&        name,
        bool                        defaultValue,
        ::Editor::FeatureFlagSource source,
        ::std::string const&        description,
        bool                        readOnly
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> setGlobalFlag(::std::string const& name, bool value) /*override*/;

    virtual ::std::optional<bool> getGlobalFlag(::std::string const& name) const /*override*/;

    virtual bool hasGlobalFlag(::std::string const& name) const /*override*/;

    virtual ::std::vector<::Editor::FeatureFlagEntry> getSnapshot() const /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    listenForGlobalFlagChanged(::std::function<void(::Editor::FeatureFlagEntry const&)> func) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerFeatureFlagManagerService(::Editor::ServiceProviderCollection& providers, bool isDedicatedServer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ServiceName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers, bool isDedicatedServer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<void> $registerGlobalFlag(
        ::std::string const&        name,
        bool                        defaultValue,
        ::Editor::FeatureFlagSource source,
        ::std::string const&        description,
        bool                        readOnly
    );

    MCNAPI ::Scripting::Result_deprecated<void> $setGlobalFlag(::std::string const& name, bool value);

    MCNAPI ::std::optional<bool> $getGlobalFlag(::std::string const& name) const;

    MCNAPI bool $hasGlobalFlag(::std::string const& name) const;

    MCNAPI ::std::vector<::Editor::FeatureFlagEntry> $getSnapshot() const;

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForGlobalFlagChanged(::std::function<void(::Editor::FeatureFlagEntry const&)> func);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForServerFeatureFlagManagerServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services

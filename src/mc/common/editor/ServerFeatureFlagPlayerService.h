#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorFeatureFlagService.h"
#include "mc/common/editor/FeatureFlagCategory.h"
#include "mc/common/editor/FeatureFlagSource.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class FeatureFlagBulkSyncPayload; }
// clang-format on

namespace Editor::Services {

class ServerFeatureFlagPlayerService : public ::Editor::Services::EditorFeatureFlagService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3a26e1;
    ::ll::UntypedStorage<8, 16> mUnke693f2;
    ::ll::UntypedStorage<1, 1>  mUnkd84ee7;
    ::ll::UntypedStorage<1, 1>  mUnkfa4135;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerFeatureFlagPlayerService& operator=(ServerFeatureFlagPlayerService const&);
    ServerFeatureFlagPlayerService(ServerFeatureFlagPlayerService const&);
    ServerFeatureFlagPlayerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerFeatureFlagPlayerService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> preStartTick() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> setFlag(::std::string const& name, bool value) /*override*/;

    virtual ::Scripting::Result_deprecated<void> registerFlag(
        ::std::string const&          name,
        bool                          defaultValue,
        ::Editor::FeatureFlagCategory category,
        ::Editor::FeatureFlagSource   source,
        ::std::string const&          description,
        bool                          readOnly
    ) /*override*/;

    virtual bool isHost() const /*override*/;

    virtual void
    _handleFeatureFlagBulkSyncPayload(::Editor::Network::FeatureFlagBulkSyncPayload const& payload) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _sendFlagChangedToClient(::std::string const& name, bool value, ::Editor::FeatureFlagCategory category);

    MCNAPI void _sendGlobalFlagsToClient();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ServiceName();
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

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $preStartTick();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<void> $setFlag(::std::string const& name, bool value);

    MCNAPI ::Scripting::Result_deprecated<void> $registerFlag(
        ::std::string const&          name,
        bool                          defaultValue,
        ::Editor::FeatureFlagCategory category,
        ::Editor::FeatureFlagSource   source,
        ::std::string const&          description,
        bool                          readOnly
    );

    MCNAPI bool $isHost() const;

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

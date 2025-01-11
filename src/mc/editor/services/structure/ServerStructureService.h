#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/serviceproviders/ServerStructureServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class StructureCopyToClipboardPayload; }
namespace Editor::Network { class StructureFromClipboardPayload; }
namespace Editor::Network { class StructureQueryPayload; }
// clang-format on

namespace Editor::Services {

class ServerStructureService : public ::Editor::Services::IEditorService,
                               public ::Editor::Services::ServerStructureServiceProvider,
                               public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd54e7f;
    ::ll::UntypedStorage<8, 24> mUnk60d695;
    ::ll::UntypedStorage<8, 24> mUnkb9858c;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerStructureService& operator=(ServerStructureService const&);
    ServerStructureService(ServerStructureService const&);
    ServerStructureService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerStructureService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::Editor::EditorStructureTemplate> loadStructure(::std::string const& id) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ServerStructureService(::Editor::ServiceProviderCollection& serviceProviders);

    MCAPI ::std::vector<::std::string> _getStructureIdList();

    MCAPI void _handleCopyToClipboardPayload(::Editor::Network::StructureCopyToClipboardPayload const& payload);

    MCAPI void _handleQueryPayload(::Editor::Network::StructureQueryPayload const& evt);

    MCAPI void _handleStructureFromClipboardPayload(::Editor::Network::StructureFromClipboardPayload const& payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCFOLD ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::std::optional<::Editor::EditorStructureTemplate> $loadStructure(::std::string const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForServerStructureServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/ServerStructureServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::Network { class StructureCopyToClipboardPayload; }
namespace Editor::Network { class StructureDeletePayload; }
namespace Editor::Network { class StructureDuplicatePayload; }
namespace Editor::Network { class StructureEditPayload; }
namespace Editor::Network { class StructureFromClipboardPayload; }
namespace Editor::Network { class StructureFromSelectionPayload; }
namespace Editor::Network { class StructureQueryPayload; }
namespace Editor::Network { class StructureReplaceFromClipboardPayload; }
// clang-format on

namespace Editor::Services {

class ServerStructureService : public ::Editor::Services::IEditorService,
                               public ::Editor::Services::ServerStructureServiceProvider,
                               public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk8a3486;
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
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::Editor::EditorStructureTemplate> loadStructure(::std::string const& id) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _dispatchMetadataToClients();

    MCNAPI void _handleCopyToClipboardPayload(::Editor::Network::StructureCopyToClipboardPayload const& payload);

    MCNAPI void _handleDeletePayload(::Editor::Network::StructureDeletePayload const& evt);

    MCNAPI void _handleDuplicatePayload(::Editor::Network::StructureDuplicatePayload const& payload);

    MCNAPI void _handleEditPayload(::Editor::Network::StructureEditPayload const& evt);

    MCNAPI void _handleQueryPayload(::Editor::Network::StructureQueryPayload const& evt);

    MCNAPI void _handleStructureFromClipboardPayload(::Editor::Network::StructureFromClipboardPayload const& payload);

    MCNAPI void _handleStructureFromSelectionPayload(::Editor::Network::StructureFromSelectionPayload const& payload);

    MCNAPI void
    _handleStructureReplaceFromClipboardPayload(::Editor::Network::StructureReplaceFromClipboardPayload const& payload);

    MCNAPI void _makeStructureTemplateFromVolume(
        ::Editor::EditorStructureTemplate&             structureTemplate,
        ::BlockSource*                                 region,
        ::Editor::RelativeVolumeListBlockVolume const& volume
    );
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

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::optional<::Editor::EditorStructureTemplate> $loadStructure(::std::string const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForServerStructureServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services

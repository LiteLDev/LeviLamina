#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/serviceproviders/ServerStructureServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct EditorStructureDBMetadata; }
namespace Editor { struct EditorStructureMetadataDeleteEditResult; }
namespace Editor { struct EditorStructureMetadataEditParams; }
namespace Editor { struct EditorStructureMetadataQueryParams; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ServerStructureService : public ::Editor::Services::IEditorService,
                               public ::Editor::Services::ServerStructureServiceProvider,
                               public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk8a3486;
    ::ll::UntypedStorage<8, 24>  mUnka964a5;
    ::ll::UntypedStorage<8, 520> mUnked4f75;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerStructureService& operator=(ServerStructureService const&);
    ServerStructureService(ServerStructureService const&);
    ServerStructureService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerStructureService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::std::optional<::Editor::EditorStructureTemplate> loadStructure(::std::string const& id) /*override*/;

    virtual ::std::optional<::std::string> createNewEditorProjectStructure(
        ::Editor::EditorStructureTemplate const& editorStructure,
        ::mce::UUID const&                       guid,
        ::std::string const&                     structureName
    ) /*override*/;

    virtual ::std::vector<::Editor::EditorStructureDBMetadata> queryDB(
        ::Editor::EditorStructureMetadataQueryParams const& params,
        bool const                                          reprocessLevelStructures
    ) /*override*/;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    editStructureMetadata(::Editor::EditorStructureMetadataEditParams& params) /*override*/;

    virtual bool replaceMCStructureFromTemplate(
        ::mce::UUID const&                       guid,
        ::Editor::EditorStructureTemplate const& structureTemplate
    ) /*override*/;

    virtual ::std::optional<::Editor::EditorStructureTemplate> load(::mce::UUID const& guid) /*override*/;

    virtual ::std::optional<::Editor::EditorStructureDBMetadata> const
    getMetadataByGuid(::mce::UUID const& guid) /*override*/;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    deleteEditorStructure(::mce::UUID const& guid) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerStructureService(::Editor::ServiceProviderCollection& serviceProviders, bool isHostInstance);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders, bool isHostInstance);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::optional<::Editor::EditorStructureTemplate> $loadStructure(::std::string const& id);

    MCNAPI ::std::optional<::std::string> $createNewEditorProjectStructure(
        ::Editor::EditorStructureTemplate const& editorStructure,
        ::mce::UUID const&                       guid,
        ::std::string const&                     structureName
    );

    MCNAPI ::std::vector<::Editor::EditorStructureDBMetadata>
    $queryDB(::Editor::EditorStructureMetadataQueryParams const& params, bool const reprocessLevelStructures);

    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult const
    $editStructureMetadata(::Editor::EditorStructureMetadataEditParams& params);

    MCNAPI bool $replaceMCStructureFromTemplate(
        ::mce::UUID const&                       guid,
        ::Editor::EditorStructureTemplate const& structureTemplate
    );

    MCNAPI ::std::optional<::Editor::EditorStructureTemplate> $load(::mce::UUID const& guid);

    MCNAPI ::std::optional<::Editor::EditorStructureDBMetadata> const $getMetadataByGuid(::mce::UUID const& guid);

    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult const $deleteEditorStructure(::mce::UUID const& guid);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForServerStructureServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services

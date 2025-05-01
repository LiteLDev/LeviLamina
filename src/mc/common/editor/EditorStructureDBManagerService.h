#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorStructureDBManagerServiceProvider.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ServerInstance;
namespace Core { class Path; }
namespace Editor { class EditorStructureSourceDataItem; }
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct EditorStructureDBMetadata; }
namespace Editor { struct EditorStructureMetadataDeleteEditResult; }
namespace Editor { struct EditorStructureMetadataEditParams; }
namespace Editor { struct EditorStructureMetadataQueryParams; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorStructureDBManagerService : public ::Editor::Services::IEditorService,
                                        public ::Editor::Services::EditorStructureDBManagerServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8386e8;
    ::ll::UntypedStorage<8, 64> mUnk7d9b3a;
    ::ll::UntypedStorage<8, 24> mUnk9916fb;
    ::ll::UntypedStorage<8, 8>  mUnk478604;
    ::ll::UntypedStorage<8, 32> mUnk7c250a;
    ::ll::UntypedStorage<8, 8>  mUnke1fb46;
    ::ll::UntypedStorage<8, 8>  mUnkfbbcb2;
    ::ll::UntypedStorage<8, 8>  mUnkd2ea0d;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureDBManagerService& operator=(EditorStructureDBManagerService const&);
    EditorStructureDBManagerService(EditorStructureDBManagerService const&);
    EditorStructureDBManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorStructureDBManagerService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::std::string> createNewEditorProjectStructure(
        ::Editor::EditorStructureTemplate&    templateData,
        ::std::optional<::std::string> const& id,
        ::std::optional<::std::string> const& fullName
    ) /*override*/;

    // vIndex: 2
    virtual bool replaceMCStructureFromTemplate(
        ::mce::UUID const&                       guid,
        ::Editor::EditorStructureTemplate const& structureTemplate,
        bool                                     isHost
    ) /*override*/;

    // vIndex: 3
    virtual ::std::optional<::Editor::EditorStructureTemplate> load(::mce::UUID const& guid) /*override*/;

    // vIndex: 4
    virtual ::std::vector<::HashedString> const getEditorStructureGuids() const /*override*/;

    // vIndex: 5
    virtual ::std::vector<::Editor::EditorStructureDBMetadata> const
    queryEditorStructureDBMetadata(::Editor::EditorStructureMetadataQueryParams const& params) const /*override*/;

    // vIndex: 6
    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    deleteEditorStructureDBMetadataByGuid(::mce::UUID const& guid, bool isHost) /*override*/;

    // vIndex: 7
    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    editEditorStructureDBMetadata(::Editor::EditorStructureMetadataEditParams const& params, bool isHost) /*override*/;

    // vIndex: 8
    virtual ::std::optional<::Editor::EditorStructureDBMetadata> const
    getEditorStructureMetadataByGuid(::mce::UUID const& guid) const /*override*/;

    // vIndex: 9
    virtual void processLevelStructures() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    EditorStructureDBManagerService(::Editor::ServiceProviderCollection& providers, ::ServerInstance& serverInstance);

    MCNAPI ::std::optional<::mce::UUID> _addToEditorStructureDB(
        ::Editor::EditorStructureDBMetadata const& metaData,
        ::Editor::EditorStructureSourceDataItem&   mcStructureData
    );

    MCNAPI ::std::pair<::std::optional<::mce::UUID>, ::std::optional<::std::string>> _addToEditorStructureDB(
        ::Editor::EditorStructureSourceDataItem const& mcStructureData,
        ::std::optional<::std::string> const&          id
    );

    MCNAPI void _addToMetadataEntries(
        ::mce::UUID const&                             guid,
        ::Editor::EditorStructureSourceDataItem const& mcStructureData,
        ::Editor::EditorStructureDBMetadata const&     metaData
    );

    MCNAPI ::std::string _createNewEditorStructureTemplateName();

    MCNAPI ::std::string const _getJsonStringFromMetadata(::Editor::EditorStructureDBMetadata const& metaData) const;

    MCNAPI ::std::string _getNameFromStructurePath(::Core::Path const& path) const;

    MCNAPI ::std::string _getNamespaceFromStructurePath(::Core::Path const& path) const;

    MCNAPI ::std::string _handleDupeDisplayName(::std::string const& displayName);

    MCNAPI ::std::string _handleDupeName(::std::string const& name);

    MCNAPI ::std::optional<::Editor::EditorStructureSourceDataItem> const
    _parseJsonToMetadata(::std::string& jsonString, ::Editor::EditorStructureDBMetadata& metaData);

    MCNAPI void _processBPStructures();

    MCNAPI void _processInProjectStructures();

    MCNAPI void _processPersistentEditorStructures();

    MCNAPI bool _writeMetaData(::Core::Path const& path, ::Editor::EditorStructureDBMetadata& metaData) const;

    MCNAPI void buildManifests();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_EDITOR_NAMESPACE();

    MCAPI static ::std::string const& EDITOR_PROJECT_STRUCTUREDB_FOLDER();

    MCAPI static ::std::string const& LEVELDB_STRUCTURE_TAG_PREFIX();

    MCAPI static ::std::string const& STRUCTURE_EXT();

    MCAPI static ::std::string const& STRUCTURE_FOLDER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers, ::ServerInstance& serverInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $init();

    MCNAPI ::Scripting::Result<void> $quit();

    MCNAPI ::Scripting::Result<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::optional<::std::string> $createNewEditorProjectStructure(
        ::Editor::EditorStructureTemplate&    templateData,
        ::std::optional<::std::string> const& id,
        ::std::optional<::std::string> const& fullName
    );

    MCNAPI bool $replaceMCStructureFromTemplate(
        ::mce::UUID const&                       guid,
        ::Editor::EditorStructureTemplate const& structureTemplate,
        bool                                     isHost
    );

    MCNAPI ::std::optional<::Editor::EditorStructureTemplate> $load(::mce::UUID const& guid);

    MCNAPI ::std::vector<::HashedString> const $getEditorStructureGuids() const;

    MCNAPI ::std::vector<::Editor::EditorStructureDBMetadata> const
    $queryEditorStructureDBMetadata(::Editor::EditorStructureMetadataQueryParams const& params) const;

    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult const
    $deleteEditorStructureDBMetadataByGuid(::mce::UUID const& guid, bool isHost);

    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult const
    $editEditorStructureDBMetadata(::Editor::EditorStructureMetadataEditParams const& params, bool isHost);

    MCNAPI ::std::optional<::Editor::EditorStructureDBMetadata> const
    $getEditorStructureMetadataByGuid(::mce::UUID const& guid) const;

    MCNAPI void $processLevelStructures();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorStructureDBManagerServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services

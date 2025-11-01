#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorStructureDBManagerServiceProvider.h"
#include "mc/common/editor/IStructureDataProvider.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class StructureTemplate;
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

class EditorStructureDBManagerService : public ::Editor::Services::IEditorService, public ::Editor::Services::EditorStructureDBManagerServiceProvider, public ::Editor::StructureDataCache::IStructureDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8386e8;
    ::ll::UntypedStorage<8, 64> mUnk7d9b3a;
    ::ll::UntypedStorage<8, 24> mUnk9916fb;
    ::ll::UntypedStorage<8, 8> mUnk478604;
    ::ll::UntypedStorage<8, 32> mUnk7c250a;
    ::ll::UntypedStorage<8, 8> mUnkfbbcb2;
    ::ll::UntypedStorage<8, 8> mUnkd2ea0d;
    ::ll::UntypedStorage<8, 16> mUnke5e032;
    ::ll::UntypedStorage<8, 16> mUnk827501;
    ::ll::UntypedStorage<8, 8> mUnk2a6ce4;
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
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::std::string> createNewEditorProjectStructure(::Editor::EditorStructureTemplate const& templateData, ::std::string const& id, ::std::optional<::std::string> const& fullName, ::std::optional<::std::string> const& displayName) /*override*/;

    // vIndex: 2
    virtual bool replaceMCStructureFromTemplate(::mce::UUID const& guid, ::Editor::EditorStructureTemplate const& structureTemplate, bool isHost) /*override*/;

    // vIndex: 3
    virtual ::std::optional<::Editor::EditorStructureTemplate> load(::mce::UUID const& guid) const /*override*/;

    // vIndex: 4
    virtual ::std::vector<::HashedString> const getEditorStructureGuids() const /*override*/;

    // vIndex: 5
    virtual ::std::vector<::Editor::EditorStructureDBMetadata> const queryEditorStructureDBMetadata(::Editor::EditorStructureMetadataQueryParams const& params) const /*override*/;

    // vIndex: 6
    virtual ::Editor::EditorStructureMetadataDeleteEditResult const deleteEditorStructureDBMetadataByGuid(::mce::UUID const& guid, bool isHost) /*override*/;

    // vIndex: 7
    virtual ::Editor::EditorStructureMetadataDeleteEditResult const editEditorStructureDBMetadata(::Editor::EditorStructureMetadataEditParams const& params, bool isHost) /*override*/;

    // vIndex: 8
    virtual ::std::optional<::Editor::EditorStructureDBMetadata> const getEditorStructureMetadataByGuid(::mce::UUID const& guid) const /*override*/;

    // vIndex: 9
    virtual void processLevelStructures() /*override*/;

    // vIndex: 0
    virtual bool hasStructureData(::mce::UUID const& id) const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<::std::variant<::StructureTemplate const*, ::Editor::EditorStructureTemplate const*, ::std::shared_ptr<::StructureTemplate const>, ::std::shared_ptr<::Editor::EditorStructureTemplate const>>> getStructureData(::mce::UUID const& id) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorStructureDBManagerService(::Editor::ServiceProviderCollection& providers);

    MCNAPI ::std::optional<::mce::UUID> _addToEditorStructureDB(::Editor::EditorStructureDBMetadata& metaData, ::Editor::EditorStructureSourceDataItem& mcStructureData);

    MCNAPI ::std::pair<::std::optional<::mce::UUID>, ::std::optional<::std::string>> _addToEditorStructureDB(::Editor::EditorStructureSourceDataItem const& mcStructureData, ::std::optional<::std::string> const& id, ::std::optional<::std::string> const& displayName);

    MCNAPI void _addToMetadataEntries(::mce::UUID const& guid, ::Editor::EditorStructureSourceDataItem const& mcStructureData, ::Editor::EditorStructureDBMetadata& metaData);

    MCNAPI ::std::string const _getJsonStringFromMetadata(::Editor::EditorStructureDBMetadata const& metaData) const;

    MCNAPI ::std::string _getNameFromStructurePath(::Core::Path const& path) const;

    MCNAPI ::std::string _getNamespaceFromStructurePath(::Core::Path const& path) const;

    MCNAPI ::std::string _handleDupeDisplayName(::std::string_view displayName);

    MCNAPI ::std::string _handleDupeName(::std::string_view name);

    MCNAPI ::std::optional<::Editor::EditorStructureSourceDataItem> const _parseJsonToMetadata(::std::string& jsonString, ::Editor::EditorStructureDBMetadata& metaData);

    MCNAPI void _processBPStructures();

    MCNAPI void _processInProjectStructures();

    MCNAPI void _processPersistentEditorStructures();

    MCNAPI bool _writeMetaData(::Core::Path const& path, ::Editor::EditorStructureDBMetadata& metaData) const;

    MCNAPI void buildManifests();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& DEFAULT_EDITOR_NAMESPACE();

    MCNAPI static ::std::string const& EDITOR_PROJECT_STRUCTUREDB_FOLDER();

    MCNAPI static ::std::string const& LEVELDB_STRUCTURE_TAG_PREFIX();

    MCNAPI static ::std::string const& STRUCTURE_EXT();

    MCNAPI static ::std::string const& STRUCTURE_FOLDER();
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

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::optional<::std::string> $createNewEditorProjectStructure(::Editor::EditorStructureTemplate const& templateData, ::std::string const& id, ::std::optional<::std::string> const& fullName, ::std::optional<::std::string> const& displayName);

    MCNAPI bool $replaceMCStructureFromTemplate(::mce::UUID const& guid, ::Editor::EditorStructureTemplate const& structureTemplate, bool isHost);

    MCNAPI ::std::optional<::Editor::EditorStructureTemplate> $load(::mce::UUID const& guid) const;

    MCNAPI ::std::vector<::HashedString> const $getEditorStructureGuids() const;

    MCNAPI ::std::vector<::Editor::EditorStructureDBMetadata> const $queryEditorStructureDBMetadata(::Editor::EditorStructureMetadataQueryParams const& params) const;

    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult const $deleteEditorStructureDBMetadataByGuid(::mce::UUID const& guid, bool isHost);

    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult const $editEditorStructureDBMetadata(::Editor::EditorStructureMetadataEditParams const& params, bool isHost);

    MCNAPI ::std::optional<::Editor::EditorStructureDBMetadata> const $getEditorStructureMetadataByGuid(::mce::UUID const& guid) const;

    MCNAPI void $processLevelStructures();

    MCNAPI bool $hasStructureData(::mce::UUID const& id) const;

    MCNAPI ::Scripting::Result_deprecated<::std::variant<::StructureTemplate const*, ::Editor::EditorStructureTemplate const*, ::std::shared_ptr<::StructureTemplate const>, ::std::shared_ptr<::Editor::EditorStructureTemplate const>>> $getStructureData(::mce::UUID const& id) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorStructureDBManagerServiceProvider();

    MCNAPI static void** $vftableForIStructureDataProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND

};

}

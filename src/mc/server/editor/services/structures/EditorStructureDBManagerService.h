#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/serviceproviders/EditorStructureDBManagerServiceProvider.h"
#include "mc/server/editor/services/structures/IStructureDataProvider.h"

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

class EditorStructureDBManagerService : public ::Editor::Services::IEditorService,
                                        public ::Editor::Services::EditorStructureDBManagerServiceProvider,
                                        public ::Editor::StructureDataCache::IStructureDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8386e8;
    ::ll::UntypedStorage<8, 64> mUnk7d9b3a;
    ::ll::UntypedStorage<8, 24> mUnk44234b;
    ::ll::UntypedStorage<8, 8>  mUnk3a5675;
    ::ll::UntypedStorage<8, 32> mUnk6b32ca;
    ::ll::UntypedStorage<8, 8>  mUnkfbbcb2;
    ::ll::UntypedStorage<8, 8>  mUnkd2ea0d;
    ::ll::UntypedStorage<8, 16> mUnke5e032;
    ::ll::UntypedStorage<8, 16> mUnk8a5e13;
    ::ll::UntypedStorage<8, 16> mUnk827501;
    ::ll::UntypedStorage<8, 8>  mUnka6f4a4;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureDBManagerService& operator=(EditorStructureDBManagerService const&);
    EditorStructureDBManagerService(EditorStructureDBManagerService const&);
    EditorStructureDBManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorStructureDBManagerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::std::optional<::std::string> createNewEditorProjectStructure(
        ::Editor::EditorStructureTemplate const& templateData,
        ::std::string const&                     id,
        ::std::optional<::std::string> const&    fullName,
        ::std::optional<::std::string> const&    displayName
    ) /*override*/;

    virtual bool replaceMCStructureFromTemplate(
        ::mce::UUID const&                       guid,
        ::Editor::EditorStructureTemplate const& structureTemplate,
        bool                                     isHost
    ) /*override*/;

    virtual ::std::optional<::Editor::EditorStructureTemplate> load(::mce::UUID const& guid) const /*override*/;

    virtual ::std::vector<::HashedString> const getEditorStructureGuids() const /*override*/;

    virtual ::std::vector<::Editor::EditorStructureDBMetadata> const
    queryEditorStructureDBMetadata(::Editor::EditorStructureMetadataQueryParams const& params) const /*override*/;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    deleteEditorStructureDBMetadataByGuid(::mce::UUID const& guid, bool isHost) /*override*/;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    editEditorStructureDBMetadata(::Editor::EditorStructureMetadataEditParams const& params, bool isHost) /*override*/;

    virtual ::std::optional<::Editor::EditorStructureDBMetadata> const
    getEditorStructureMetadataByGuid(::mce::UUID const& guid) const /*override*/;

    virtual void processLevelStructures() /*override*/;

    virtual bool hasStructureData(::mce::UUID const& id) const /*override*/;

    virtual ::Scripting::Result_deprecated<::std::variant<
        ::StructureTemplate const*,
        ::Editor::EditorStructureTemplate const*,
        ::std::shared_ptr<::StructureTemplate const>,
        ::std::shared_ptr<::Editor::EditorStructureTemplate const>>>
    getStructureData(::mce::UUID const& id) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorStructureDBManagerService(::Editor::ServiceProviderCollection& providers);

    MCNAPI ::std::optional<::mce::UUID> _addToEditorStructureDB(
        ::Editor::EditorStructureDBMetadata&     metaData,
        ::Editor::EditorStructureSourceDataItem& mcStructureData
    );

    MCNAPI ::std::pair<::std::optional<::mce::UUID>, ::std::optional<::std::string>> _addToEditorStructureDB(
        ::Editor::EditorStructureSourceDataItem const& mcStructureData,
        ::std::optional<::std::string> const&          id,
        ::std::optional<::std::string> const&          displayName
    );

    MCNAPI void _addToMetadataEntries(
        ::mce::UUID const&                             guid,
        ::Editor::EditorStructureSourceDataItem const& mcStructureData,
        ::Editor::EditorStructureDBMetadata&           metaData
    );

    MCNAPI ::std::string _getNamespaceFromStructurePath(::Core::Path const& path) const;

    MCNAPI ::std::optional<::Editor::EditorStructureSourceDataItem> const
    _parseJsonToMetadata(::std::string& jsonString, ::Editor::EditorStructureDBMetadata& metaData);

    MCNAPI bool _writeMetaData(::Core::Path const& path, ::Editor::EditorStructureDBMetadata& metaData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services

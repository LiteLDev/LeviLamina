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
        ::Editor::EditorStructureTemplate const&,
        ::std::string const&,
        ::std::optional<::std::string> const&,
        ::std::optional<::std::string> const&
    ) /*override*/;

    virtual bool
    replaceMCStructureFromTemplate(::mce::UUID const&, ::Editor::EditorStructureTemplate const&, bool) /*override*/;

    virtual ::std::optional<::Editor::EditorStructureTemplate> load(::mce::UUID const&) const /*override*/;

    virtual ::std::vector<::HashedString> const getEditorStructureGuids() const /*override*/;

    virtual ::std::vector<::Editor::EditorStructureDBMetadata> const
    queryEditorStructureDBMetadata(::Editor::EditorStructureMetadataQueryParams const&) const /*override*/;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    deleteEditorStructureDBMetadataByGuid(::mce::UUID const&, bool) /*override*/;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    editEditorStructureDBMetadata(::Editor::EditorStructureMetadataEditParams const&, bool) /*override*/;

    virtual ::std::optional<::Editor::EditorStructureDBMetadata> const
    getEditorStructureMetadataByGuid(::mce::UUID const&) const /*override*/;

    virtual void processLevelStructures() /*override*/;

    virtual bool hasStructureData(::mce::UUID const&) const /*override*/;

    virtual ::Scripting::Result_deprecated<::std::variant<
        ::StructureTemplate const*,
        ::Editor::EditorStructureTemplate const*,
        ::std::shared_ptr<::StructureTemplate const>,
        ::std::shared_ptr<::Editor::EditorStructureTemplate const>>>
    getStructureData(::mce::UUID const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorStructureDBManagerService(::Editor::ServiceProviderCollection& providers);
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

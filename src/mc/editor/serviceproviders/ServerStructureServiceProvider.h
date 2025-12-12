#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorStructureTemplate; }
namespace Editor { struct EditorStructureDBMetadata; }
namespace Editor { struct EditorStructureMetadataDeleteEditResult; }
namespace Editor { struct EditorStructureMetadataEditParams; }
namespace Editor { struct EditorStructureMetadataQueryParams; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ServerStructureServiceProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerStructureServiceProvider() /*override*/;

    virtual ::std::optional<::Editor::EditorStructureTemplate> loadStructure(::std::string const&) = 0;

    virtual ::std::optional<::std::string> createNewEditorProjectStructure(
        ::Editor::EditorStructureTemplate const&,
        ::mce::UUID const&,
        ::std::string const&
    ) = 0;

    virtual ::std::vector<::Editor::EditorStructureDBMetadata>
    queryDB(::Editor::EditorStructureMetadataQueryParams const&, bool const) = 0;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    editStructureMetadata(::Editor::EditorStructureMetadataEditParams&) = 0;

    virtual bool replaceMCStructureFromTemplate(::mce::UUID const&, ::Editor::EditorStructureTemplate const&) = 0;

    virtual ::std::optional<::Editor::EditorStructureTemplate> load(::mce::UUID const&) = 0;

    virtual ::std::optional<::Editor::EditorStructureDBMetadata> const getMetadataByGuid(::mce::UUID const&) = 0;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const deleteEditorStructure(::mce::UUID const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services

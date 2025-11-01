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
    // vIndex: 0
    virtual ~ServerStructureServiceProvider() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::Editor::EditorStructureTemplate> loadStructure(::std::string const&) = 0;

    // vIndex: 2
    virtual ::std::optional<::std::string> createNewEditorProjectStructure(::Editor::EditorStructureTemplate const&, ::mce::UUID const&, ::std::string const&) = 0;

    // vIndex: 3
    virtual ::std::vector<::Editor::EditorStructureDBMetadata> queryDB(::Editor::EditorStructureMetadataQueryParams const&, bool const) = 0;

    // vIndex: 4
    virtual ::Editor::EditorStructureMetadataDeleteEditResult const editStructureMetadata(::Editor::EditorStructureMetadataEditParams&) = 0;

    // vIndex: 5
    virtual bool replaceMCStructureFromTemplate(::mce::UUID const&, ::Editor::EditorStructureTemplate const&) = 0;

    // vIndex: 6
    virtual ::std::optional<::Editor::EditorStructureTemplate> load(::mce::UUID const&) = 0;

    // vIndex: 7
    virtual ::std::optional<::Editor::EditorStructureDBMetadata> const getMetadataByGuid(::mce::UUID const&) = 0;

    // vIndex: 8
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

}

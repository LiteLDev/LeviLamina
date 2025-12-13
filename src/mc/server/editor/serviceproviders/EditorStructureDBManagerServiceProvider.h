#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class EditorStructureTemplate; }
namespace Editor { struct EditorStructureDBMetadata; }
namespace Editor { struct EditorStructureMetadataDeleteEditResult; }
namespace Editor { struct EditorStructureMetadataEditParams; }
namespace Editor { struct EditorStructureMetadataQueryParams; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorStructureDBManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorStructureDBManagerServiceProvider() = default;

    virtual ::std::optional<::std::string> createNewEditorProjectStructure(
        ::Editor::EditorStructureTemplate const&,
        ::std::string const&,
        ::std::optional<::std::string> const&,
        ::std::optional<::std::string> const&
    ) = 0;

    virtual bool replaceMCStructureFromTemplate(::mce::UUID const&, ::Editor::EditorStructureTemplate const&, bool) = 0;

    virtual ::std::optional<::Editor::EditorStructureTemplate> load(::mce::UUID const&) const = 0;

    virtual ::std::vector<::HashedString> const getEditorStructureGuids() const = 0;

    virtual ::std::vector<::Editor::EditorStructureDBMetadata> const
    queryEditorStructureDBMetadata(::Editor::EditorStructureMetadataQueryParams const&) const = 0;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    deleteEditorStructureDBMetadataByGuid(::mce::UUID const&, bool) = 0;

    virtual ::Editor::EditorStructureMetadataDeleteEditResult const
    editEditorStructureDBMetadata(::Editor::EditorStructureMetadataEditParams const&, bool) = 0;

    virtual ::std::optional<::Editor::EditorStructureDBMetadata> const
    getEditorStructureMetadataByGuid(::mce::UUID const&) const = 0;

    virtual void processLevelStructures() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services

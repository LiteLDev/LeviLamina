#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class ResourcePackStack;
namespace Editor { class EditorStructureTemplate; }
namespace Editor { struct EditorBPStructureData; }
namespace Editor { struct EditorFileStructureData; }
namespace Editor { struct EditorLevelStructureData; }
namespace Editor { struct EditorProjectStructureData; }
namespace Editor { struct EditorStructureDBMetadata; }
namespace mce { class UUID; }
// clang-format on

namespace Editor {

class EditorStructureSourceDataItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 480> mUnk61b0e9;
    ::ll::UntypedStorage<4, 4> mUnk64fd7a;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureSourceDataItem& operator=(EditorStructureSourceDataItem const&);
    EditorStructureSourceDataItem(EditorStructureSourceDataItem const&);
    EditorStructureSourceDataItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorStructureSourceDataItem(::std::variant<::Editor::EditorFileStructureData, ::Editor::EditorBPStructureData, ::Editor::EditorLevelStructureData, ::Editor::EditorProjectStructureData> const& dataSource);

    MCNAPI ::std::string getFullStructureName() const;

    MCNAPI ::std::optional<::Editor::EditorStructureTemplate> load(::ResourcePackStack const& packStack, ::LevelStorage& levelStorage) const;

    MCNAPI void markMetaDataWithSourceInfo(::Editor::EditorStructureDBMetadata& metaData, ::ResourcePackStack const& packStack, ::LevelStorage& levelStorage) const;

    MCNAPI bool renameMCStructureFile(::std::string const& name, ::mce::UUID const& guid, ::LevelStorage& levelStorage);

    MCNAPI bool rewriteMCStructureFile(::Editor::EditorStructureTemplate const& structureTemplate, ::mce::UUID const& guid, ::LevelStorage& levelStorage);

    MCNAPI bool verifyResource(::mce::UUID const& guid, ::ResourcePackStack const& packStack, ::LevelStorage& levelStorage);

    MCNAPI ~EditorStructureSourceDataItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::variant<::Editor::EditorFileStructureData, ::Editor::EditorBPStructureData, ::Editor::EditorLevelStructureData, ::Editor::EditorProjectStructureData> const& dataSource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}

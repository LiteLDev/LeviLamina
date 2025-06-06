#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class ResourcePackStack;
namespace Editor { struct EditorBPStructureData; }
namespace Editor { struct EditorFileStructureData; }
namespace Editor { struct EditorLevelStructureData; }
namespace Editor { struct EditorProjectStructureData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor {

class EditorStructureSourceDataItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 608> mUnk61b0e9;
    ::ll::UntypedStorage<4, 4>   mUnk64fd7a;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureSourceDataItem& operator=(EditorStructureSourceDataItem const&);
    EditorStructureSourceDataItem(EditorStructureSourceDataItem const&);
    EditorStructureSourceDataItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorStructureSourceDataItem(
        ::std::variant<
            ::Editor::EditorFileStructureData,
            ::Editor::EditorBPStructureData,
            ::Editor::EditorLevelStructureData,
            ::Editor::EditorProjectStructureData> const& dataSource
    );

    MCNAPI ::std::string getFullStructureName() const;

    MCNAPI bool renameMCStructureFile(::std::string const& name, ::mce::UUID const& guid, ::LevelStorage& levelStorage);

    MCNAPI bool
    verifyResource(::mce::UUID const& guid, ::ResourcePackStack const& packStack, ::LevelStorage& levelStorage);

    MCNAPI ~EditorStructureSourceDataItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::variant<
            ::Editor::EditorFileStructureData,
            ::Editor::EditorBPStructureData,
            ::Editor::EditorLevelStructureData,
            ::Editor::EditorProjectStructureData> const& dataSource
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

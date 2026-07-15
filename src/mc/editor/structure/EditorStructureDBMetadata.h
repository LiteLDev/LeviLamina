#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Structures::PUVLoader::CurrentVersion { struct FileDataContainer; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct EditorStructureDBMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnke85d2d;
    ::ll::UntypedStorage<8, 32> mUnkfc88b4;
    ::ll::UntypedStorage<8, 24> mUnk97b469;
    ::ll::UntypedStorage<8, 32> mUnk4c9be3;
    ::ll::UntypedStorage<8, 32> mUnke53785;
    ::ll::UntypedStorage<8, 32> mUnk15178f;
    ::ll::UntypedStorage<8, 32> mUnke2a387;
    ::ll::UntypedStorage<8, 32> mUnk1aadea;
    ::ll::UntypedStorage<1, 1>  mUnkc265e3;
    ::ll::UntypedStorage<4, 12> mUnkdc5b0c;
    ::ll::UntypedStorage<4, 12> mUnka6b0d7;
    ::ll::UntypedStorage<4, 12> mUnk6f7f73;
    ::ll::UntypedStorage<4, 12> mUnk1eaafc;
    ::ll::UntypedStorage<4, 4>  mUnk84ee08;
    ::ll::UntypedStorage<4, 4>  mUnk28f160;
    ::ll::UntypedStorage<1, 1>  mUnk7f82c5;
    ::ll::UntypedStorage<4, 4>  mUnkd53cea;
    ::ll::UntypedStorage<4, 4>  mUnk910ade;
    ::ll::UntypedStorage<4, 4>  mUnk17e3e4;
    ::ll::UntypedStorage<8, 40> mUnk2b15a7;
    ::ll::UntypedStorage<8, 40> mUnk589864;
    ::ll::UntypedStorage<8, 40> mUnkd7a049;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureDBMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorStructureDBMetadata(::Editor::EditorStructureDBMetadata&&);

    MCNAPI EditorStructureDBMetadata(::Editor::EditorStructureDBMetadata const&);

    MCNAPI void fromFileDataContainer(::Editor::Structures::PUVLoader::CurrentVersion::FileDataContainer&& loadedData);

    MCNAPI ::Editor::EditorStructureDBMetadata& operator=(::Editor::EditorStructureDBMetadata&&);

    MCNAPI ::Editor::EditorStructureDBMetadata& operator=(::Editor::EditorStructureDBMetadata const&);

    MCNAPI ::Editor::Structures::PUVLoader::CurrentVersion::FileDataContainer toFileDataContainer() const;

    MCNAPI ~EditorStructureDBMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::EditorStructureDBMetadata&&);

    MCNAPI void* $ctor(::Editor::EditorStructureDBMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct EditorStructureMetadataEditParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk767d1d;
    ::ll::UntypedStorage<8, 32> mUnk3ddaaa;
    ::ll::UntypedStorage<8, 40> mUnk5b730e;
    ::ll::UntypedStorage<8, 40> mUnkef156f;
    ::ll::UntypedStorage<8, 40> mUnkcd13db;
    ::ll::UntypedStorage<4, 16> mUnk9e39b1;
    ::ll::UntypedStorage<8, 40> mUnka302ed;
    ::ll::UntypedStorage<8, 40> mUnk269005;
    ::ll::UntypedStorage<1, 2>  mUnk42dd03;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureMetadataEditParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorStructureMetadataEditParams(::Editor::EditorStructureMetadataEditParams const&);

    MCNAPI ::Editor::EditorStructureMetadataEditParams& operator=(::Editor::EditorStructureMetadataEditParams&&);

    MCNAPI ::Editor::EditorStructureMetadataEditParams& operator=(::Editor::EditorStructureMetadataEditParams const&);

    MCNAPI ~EditorStructureMetadataEditParams();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::EditorStructureMetadataEditParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

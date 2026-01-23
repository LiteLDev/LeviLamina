#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct EditorStructureMetadataDeleteEditResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk96d95f;
    ::ll::UntypedStorage<8, 40> mUnkbcccc8;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureMetadataDeleteEditResult& operator=(EditorStructureMetadataDeleteEditResult const&);
    EditorStructureMetadataDeleteEditResult(EditorStructureMetadataDeleteEditResult const&);
    EditorStructureMetadataDeleteEditResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult&
    operator=(::Editor::EditorStructureMetadataDeleteEditResult&&);

    MCNAPI ~EditorStructureMetadataDeleteEditResult();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

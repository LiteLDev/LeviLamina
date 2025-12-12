#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorJigsawSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk490ef7;
    ::ll::UntypedStorage<8, 32> mUnk7b8770;
    ::ll::UntypedStorage<4, 24> mUnk8a67b2;
    ::ll::UntypedStorage<1, 1>  mUnk3b1636;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorJigsawSection& operator=(EditorJigsawSection const&);
    EditorJigsawSection(EditorJigsawSection const&);
    EditorJigsawSection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::EditorJigsawSection& operator=(::Editor::Services::EditorJigsawSection&&);

    MCNAPI ~EditorJigsawSection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services

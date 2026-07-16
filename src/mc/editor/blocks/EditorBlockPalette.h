#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
// clang-format on

namespace Editor {

struct EditorBlockPalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk79915c;
    ::ll::UntypedStorage<8, 648> mUnkeae374;
    ::ll::UntypedStorage<8, 40>  mUnk107c5a;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPalette& operator=(EditorBlockPalette const&);
    EditorBlockPalette(EditorBlockPalette const&);
    EditorBlockPalette();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorBlockPalette(
        ::HashedString                                                                                           id,
        ::std::array<::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>, 9> items,
        ::std::optional<::std::string> displayName
    );

    MCNAPI ~EditorBlockPalette();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Editor::EditorBlockPalette createDefault();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> DEFAULT_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HashedString                                                                                           id,
        ::std::array<::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>, 9> items,
        ::std::optional<::std::string> displayName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

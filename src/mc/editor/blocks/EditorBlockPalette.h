#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct EditorBlockPalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk79915c;
    ::ll::UntypedStorage<8, 648> mUnkeae374;
    ::ll::UntypedStorage<8, 40>  mUnk503dde;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPalette();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorBlockPalette(::Editor::EditorBlockPalette const&);

    MCNAPI EditorBlockPalette(
        ::HashedString                                                                                           id,
        ::std::array<::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>, 9> items,
        ::std::optional<::std::string> displayName
    );

    MCNAPI ::Editor::EditorBlockPalette& operator=(::Editor::EditorBlockPalette&&);

    MCNAPI ::Editor::EditorBlockPalette& operator=(::Editor::EditorBlockPalette const&);

    MCNAPI ~EditorBlockPalette();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Editor::EditorBlockPalette createDefault();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> DEFAULT_DISPLAY_NAME();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> DEFAULT_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::EditorBlockPalette const&);

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

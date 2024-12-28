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
    EditorBlockPalette(EditorBlockPalette const&);
    EditorBlockPalette();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EditorBlockPalette(
        ::HashedString                                                                                           id,
        ::std::array<::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>, 9> items,
        ::std::optional<::std::string> displayName
    );

    MCAPI ::Editor::EditorBlockPalette& operator=(::Editor::EditorBlockPalette&&);

    MCAPI ::Editor::EditorBlockPalette& operator=(::Editor::EditorBlockPalette const&);

    MCAPI ~EditorBlockPalette();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Editor::EditorBlockPalette createDefault();

    MCAPI static bool isValidIndex(int index);
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
    MCAPI void* $ctor(
        ::HashedString                                                                                           id,
        ::std::array<::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>, 9> items,
        ::std::optional<::std::string> displayName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

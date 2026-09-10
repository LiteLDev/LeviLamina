#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class EditorAllowList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk27cb36;
    ::ll::UntypedStorage<1, 1>  mUnk7a50ef;
    ::ll::UntypedStorage<8, 16> mUnka5ff9c;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EditorAllowList& operator=(EditorAllowList const&);
    EditorAllowList(EditorAllowList const&);
    EditorAllowList();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EditorAllowList& operator=(EditorAllowList const&);
    EditorAllowList(EditorAllowList const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EditorAllowList();
#endif

#ifdef LL_PLAT_S
    MCNAPI explicit EditorAllowList(::Core::Path const& filePath);

    MCNAPI void _loadFromFile();
#endif

    MCNAPI bool isAllowed(::std::string_view xuid) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::EditorAllowList loadFromDefaultLocation();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif

#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Core::Path const& filePath);
#endif
    // NOLINTEND
};

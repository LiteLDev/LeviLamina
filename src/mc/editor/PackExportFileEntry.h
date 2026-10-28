#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct PackExportFileEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk78769d;
    ::ll::UntypedStorage<8, 32> mUnkaf924d;
    ::ll::UntypedStorage<8, 32> mUnke1f9db;
    // NOLINTEND

public:
    // prevent constructor by default
    PackExportFileEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackExportFileEntry(::Editor::PackExportFileEntry const&);

#ifdef LL_PLAT_C
    MCNAPI ::Editor::PackExportFileEntry& operator=(::Editor::PackExportFileEntry&&);
#endif

    MCNAPI ::Editor::PackExportFileEntry& operator=(::Editor::PackExportFileEntry const&);

    MCNAPI ~PackExportFileEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::PackExportFileEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct LocalizationEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf0713b;
    ::ll::UntypedStorage<8, 32> mUnk418ca2;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalizationEntry(LocalizationEntry const&);
    LocalizationEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::LocalizationEntry& operator=(::Editor::LocalizationEntry&&);

    MCNAPI ::Editor::LocalizationEntry& operator=(::Editor::LocalizationEntry const&);

    MCNAPI ~LocalizationEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

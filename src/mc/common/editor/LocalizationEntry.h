#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct LocalizationEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2985dc;
    ::ll::UntypedStorage<8, 32> mUnk2614f9;
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

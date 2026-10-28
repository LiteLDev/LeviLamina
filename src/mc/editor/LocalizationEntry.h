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
    ::ll::UntypedStorage<8, 32> mUnkf0713b;
    ::ll::UntypedStorage<8, 32> mUnk418ca2;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalizationEntry& operator=(LocalizationEntry const&);
    LocalizationEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalizationEntry(::Editor::LocalizationEntry const&);

    MCNAPI ::Editor::LocalizationEntry& operator=(::Editor::LocalizationEntry&&);

    MCNAPI bool operator==(::Editor::LocalizationEntry const& rhs) const;

    MCNAPI ~LocalizationEntry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::LocalizationEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

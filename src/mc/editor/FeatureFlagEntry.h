#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct FeatureFlagEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3252be;
    ::ll::UntypedStorage<1, 1>  mUnkd46d18;
    ::ll::UntypedStorage<1, 1>  mUnk4c4577;
    ::ll::UntypedStorage<4, 4>  mUnka3bd71;
    ::ll::UntypedStorage<4, 4>  mUnkacfed0;
    ::ll::UntypedStorage<8, 32> mUnk1a318a;
    ::ll::UntypedStorage<1, 1>  mUnkf1300d;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureFlagEntry& operator=(FeatureFlagEntry const&);
    FeatureFlagEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeatureFlagEntry(::Editor::FeatureFlagEntry const&);

    MCNAPI ::Editor::FeatureFlagEntry& operator=(::Editor::FeatureFlagEntry&&);

    MCNAPI bool operator==(::Editor::FeatureFlagEntry const& other) const;

    MCNAPI ~FeatureFlagEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::FeatureFlagEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor

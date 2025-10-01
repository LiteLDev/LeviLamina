#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct TrialSpawnerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb399a8;
    ::ll::UntypedStorage<4, 4>  mUnkabe3fc;
    ::ll::UntypedStorage<4, 4>  mUnk2cb48a;
    ::ll::UntypedStorage<4, 4>  mUnkcf8360;
    ::ll::UntypedStorage<8, 8>  mUnkdf2560;
    ::ll::UntypedStorage<4, 4>  mUnk188813;
    ::ll::UntypedStorage<4, 4>  mUnkda4028;
    ::ll::UntypedStorage<8, 24> mUnka535e4;
    ::ll::UntypedStorage<8, 24> mUnk7f6d66;
    ::ll::UntypedStorage<8, 32> mUnk220541;
    ::ll::UntypedStorage<8, 32> mUnkaca159;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrialSpawnerConfig();

    MCAPI TrialSpawnerConfig(::TrialSpawnerConfig const&);

    MCAPI ::std::unique_ptr<::CompoundTag> asInlineConfig() const;

    MCAPI void loadConfig(::CompoundTag const* data);

    MCAPI ::TrialSpawnerConfig& operator=(::TrialSpawnerConfig const&);

    MCAPI ~TrialSpawnerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::TrialSpawnerConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

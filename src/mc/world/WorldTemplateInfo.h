#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WorldTemplatePackManifest;
// clang-format on

struct WorldTemplateInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk638d00;
    ::ll::UntypedStorage<8, 32> mUnkad9393;
    ::ll::UntypedStorage<8, 32> mUnk815ba7;
    ::ll::UntypedStorage<8, 32> mUnk92ad24;
    ::ll::UntypedStorage<8, 32> mUnk1ab424;
    ::ll::UntypedStorage<8, 32> mUnka466f6;
    ::ll::UntypedStorage<8, 32> mUnk5ec239;
    ::ll::UntypedStorage<1, 1>  mUnk414e39;
    ::ll::UntypedStorage<8, 96> mUnk960f64;
    ::ll::UntypedStorage<8, 8>  mUnk69726e;
    ::ll::UntypedStorage<8, 24> mUnkd3615e;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateInfo& operator=(WorldTemplateInfo const&);
    WorldTemplateInfo(WorldTemplateInfo const&);
    WorldTemplateInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldTemplateInfo(::WorldTemplatePackManifest const& manifest);

    MCAPI ~WorldTemplateInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorldTemplatePackManifest const& manifest);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

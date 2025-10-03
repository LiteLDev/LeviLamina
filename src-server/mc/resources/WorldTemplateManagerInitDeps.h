#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
// clang-format on

struct WorldTemplateManagerInitDeps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3aef9f;
    ::ll::UntypedStorage<8, 8>  mUnk7b51e6;
    ::ll::UntypedStorage<8, 24> mUnk7f9c4e;
    ::ll::UntypedStorage<8, 64> mUnk42fbad;
    ::ll::UntypedStorage<8, 24> mUnk63c776;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerInitDeps& operator=(WorldTemplateManagerInitDeps const&);
    WorldTemplateManagerInitDeps(WorldTemplateManagerInitDeps const&);
    WorldTemplateManagerInitDeps();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateManagerInitDeps();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

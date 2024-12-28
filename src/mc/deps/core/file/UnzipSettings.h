#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class UnzipSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk696362;
    ::ll::UntypedStorage<1, 1>  mUnk919738;
    ::ll::UntypedStorage<1, 1>  mUnk81b449;
    ::ll::UntypedStorage<8, 24> mUnk7cbd7d;
    ::ll::UntypedStorage<8, 32> mUnk6ddcb2;
    ::ll::UntypedStorage<8, 24> mUnkae95de;
    ::ll::UntypedStorage<8, 24> mUnkd64e4f;
    ::ll::UntypedStorage<8, 8>  mUnka76847;
    // NOLINTEND

public:
    // prevent constructor by default
    UnzipSettings& operator=(UnzipSettings const&);
    UnzipSettings(UnzipSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UnzipSettings();

    MCAPI ~UnzipSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::ZipUtils

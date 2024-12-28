#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipProgress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk80e410;
    ::ll::UntypedStorage<4, 4> mUnka99759;
    ::ll::UntypedStorage<4, 4> mUnk29d148;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipProgress& operator=(ZipProgress const&);
    ZipProgress(ZipProgress const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ZipProgress();

    // vIndex: 1
    virtual void clear();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ZipProgress();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clear();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::ZipUtils

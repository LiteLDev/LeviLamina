#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MakeCodeFileIO {

struct MakeCodeFileIOReadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk70adc2;
    ::ll::UntypedStorage<8, 32> mUnkfad2a8;
    // NOLINTEND

public:
    // prevent constructor by default
    MakeCodeFileIOReadResult& operator=(MakeCodeFileIOReadResult const&);
    MakeCodeFileIOReadResult(MakeCodeFileIOReadResult const&);
    MakeCodeFileIOReadResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MakeCodeFileIOReadResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace MakeCodeFileIO

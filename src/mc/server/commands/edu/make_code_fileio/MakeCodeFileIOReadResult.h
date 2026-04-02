#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/edu/make_code_fileio/MakeCodeFileResult.h"

namespace MakeCodeFileIO {

struct MakeCodeFileIOReadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MakeCodeFileIO::MakeCodeFileResult> mResult;
    ::ll::TypedStorage<8, 32, ::std::string>                       mFileContents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MakeCodeFileIOReadResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace MakeCodeFileIO

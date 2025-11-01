#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct FileReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkefc077;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReference& operator=(FileReference const&);
    FileReference(FileReference const&);
    FileReference();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CerealHelpers::FileReference& operator=(::CerealHelpers::FileReference&&);

    MCNAPI ~FileReference();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}

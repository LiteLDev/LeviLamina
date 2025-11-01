#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

class FileReferenceLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka30d41;
    ::ll::UntypedStorage<4, 4>  mUnk38ae0a;
    ::ll::UntypedStorage<8, 24> mUnke5bdfd;
    ::ll::UntypedStorage<8, 24> mUnk3b5ac6;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoader& operator=(FileReferenceLoader const&);
    FileReferenceLoader(FileReferenceLoader const&);
    FileReferenceLoader();
};

} // namespace CerealHelpers

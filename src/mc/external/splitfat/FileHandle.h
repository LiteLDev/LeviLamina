#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class FileHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc659db;
    // NOLINTEND

public:
    // prevent constructor by default
    FileHandle& operator=(FileHandle const&);
    FileHandle(FileHandle const&);
    FileHandle();
};

} // namespace SFAT

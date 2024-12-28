#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LibraryRepository {
public:
    // prevent constructor by default
    LibraryRepository& operator=(LibraryRepository const&);
    LibraryRepository(LibraryRepository const&);
    LibraryRepository();
};

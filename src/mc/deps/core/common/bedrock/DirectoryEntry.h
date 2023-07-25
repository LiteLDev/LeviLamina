#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DirectoryEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_DIRECTORYENTRY
public:
    DirectoryEntry& operator=(DirectoryEntry const&) = delete;
    DirectoryEntry(DirectoryEntry const&)            = delete;
    DirectoryEntry()                                 = delete;
#endif

public:
};

}; // namespace Bedrock

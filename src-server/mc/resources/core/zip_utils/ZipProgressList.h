#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

struct ZipProgressList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkff54df;
    ::ll::UntypedStorage<8, 80> mUnkdebe11;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipProgressList& operator=(ZipProgressList const&);
    ZipProgressList(ZipProgressList const&);
    ZipProgressList();
};

} // namespace Core::ZipUtils

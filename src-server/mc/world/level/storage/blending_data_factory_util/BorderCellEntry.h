#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlendingDataFactoryUtil {

struct BorderCellEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk51705f;
    ::ll::UntypedStorage<4, 4>  mUnkf32a1b;
    ::ll::UntypedStorage<4, 4>  mUnk336062;
    ::ll::UntypedStorage<8, 40> mUnk8996a8;
    ::ll::UntypedStorage<8, 24> mUnkea50aa;
    ::ll::UntypedStorage<4, 4>  mUnkbb7ad9;
    ::ll::UntypedStorage<1, 1>  mUnk92190e;
    // NOLINTEND

public:
    // prevent constructor by default
    BorderCellEntry& operator=(BorderCellEntry const&);
    BorderCellEntry(BorderCellEntry const&);
    BorderCellEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BorderCellEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BlendingDataFactoryUtil

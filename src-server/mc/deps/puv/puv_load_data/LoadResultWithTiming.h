#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PuvLoadData {

struct LoadResultWithTiming {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdd7cad;
    ::ll::UntypedStorage<8, 8> mUnk597bf6;
    ::ll::UntypedStorage<8, 8> mUnk28aaf7;
    ::ll::UntypedStorage<1, 1> mUnk429a99;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadResultWithTiming& operator=(LoadResultWithTiming const&);
    LoadResultWithTiming(LoadResultWithTiming const&);
    LoadResultWithTiming();

};

}

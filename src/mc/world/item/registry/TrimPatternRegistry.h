#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemRegistryRef;
// clang-format on

class TrimPatternRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc90b11;
    ::ll::UntypedStorage<8, 64> mUnk54fbf2;
    // NOLINTEND

public:
    // prevent constructor by default
    TrimPatternRegistry& operator=(TrimPatternRegistry const&);
    TrimPatternRegistry(TrimPatternRegistry const&);
    TrimPatternRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initializeServer(::ItemRegistryRef itemRegistry);
    // NOLINTEND
};

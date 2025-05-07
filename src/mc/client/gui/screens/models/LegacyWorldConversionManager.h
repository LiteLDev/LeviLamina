#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyWorldConversionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke67803;
    ::ll::UntypedStorage<4, 4>  mUnk80fe49;
    ::ll::UntypedStorage<4, 4>  mUnk1f73d6;
    ::ll::UntypedStorage<8, 16> mUnkd728f3;
    ::ll::UntypedStorage<8, 8>  mUnka9342b;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyWorldConversionManager& operator=(LegacyWorldConversionManager const&);
    LegacyWorldConversionManager(LegacyWorldConversionManager const&);
    LegacyWorldConversionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyWorldConversionManager() = default;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeatureParserContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk19a66b;
    ::ll::UntypedStorage<8, 8>   mUnkc286ce;
    ::ll::UntypedStorage<8, 120> mUnk1a0f48;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureParserContext& operator=(FeatureParserContext const&);
    FeatureParserContext(FeatureParserContext const&);
    FeatureParserContext();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureLoading {

struct FeatureRootParseContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk95b54a;
    ::ll::UntypedStorage<8, 8> mUnk936d18;
    ::ll::UntypedStorage<8, 8> mUnkfc0a43;
    ::ll::UntypedStorage<8, 8> mUnk11cebd;
    ::ll::UntypedStorage<8, 8> mUnkd4400f;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureRootParseContext& operator=(FeatureRootParseContext const&);
    FeatureRootParseContext(FeatureRootParseContext const&);
    FeatureRootParseContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FeatureRootParseContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace FeatureLoading

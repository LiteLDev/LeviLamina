#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class StaticOptimizedString; }
// clang-format on

class FeaturePlacementFailureLogProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7afa1b;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturePlacementFailureLogProxy& operator=(FeaturePlacementFailureLogProxy const&);
    FeaturePlacementFailureLogProxy(FeaturePlacementFailureLogProxy const&);
    FeaturePlacementFailureLogProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void logFailure(::Bedrock::StaticOptimizedString source, ::Bedrock::StaticOptimizedString message) const;
    // NOLINTEND
};

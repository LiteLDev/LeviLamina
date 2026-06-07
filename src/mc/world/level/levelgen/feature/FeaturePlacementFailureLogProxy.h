#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeaturePlacementFailureLog;
namespace Bedrock { class StaticOptimizedString; }
// clang-format on

class FeaturePlacementFailureLogProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FeaturePlacementFailureLog*> mLogger;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturePlacementFailureLogProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FeaturePlacementFailureLogProxy(::FeaturePlacementFailureLog& logger);

    MCAPI void logFailure(::Bedrock::StaticOptimizedString source, ::Bedrock::StaticOptimizedString message) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::FeaturePlacementFailureLog& logger);
    // NOLINTEND
};

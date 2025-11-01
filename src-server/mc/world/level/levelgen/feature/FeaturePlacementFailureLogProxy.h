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
    // member functions
    // NOLINTBEGIN
    MCAPI void logFailure(::Bedrock::StaticOptimizedString source, ::Bedrock::StaticOptimizedString message) const;
    // NOLINTEND

};

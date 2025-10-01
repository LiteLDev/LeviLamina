#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class StaticOptimizedString; }
// clang-format on

class FeaturePlacementFailureLog {
public:
    // FeaturePlacementFailureLog inner types declare
    // clang-format off
    struct SourceMessagePair;
    // clang-format on

    // FeaturePlacementFailureLog inner types define
    struct SourceMessagePair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk111c7e;
        ::ll::UntypedStorage<8, 8> mUnk897754;
        // NOLINTEND

    public:
        // prevent constructor by default
        SourceMessagePair& operator=(SourceMessagePair const&);
        SourceMessagePair(SourceMessagePair const&);
        SourceMessagePair();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SourceMessagePair();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk52d2f8;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturePlacementFailureLog& operator=(FeaturePlacementFailureLog const&);
    FeaturePlacementFailureLog(FeaturePlacementFailureLog const&);
    FeaturePlacementFailureLog();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void logFailure(::Bedrock::StaticOptimizedString source, ::Bedrock::StaticOptimizedString message);

    MCAPI ~FeaturePlacementFailureLog();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

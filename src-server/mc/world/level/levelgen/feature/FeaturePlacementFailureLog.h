#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"

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
        ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> source;
        ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> message;
        // NOLINTEND
    
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
    
    using Log = ::std::vector<::FeaturePlacementFailureLog::SourceMessagePair>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FeaturePlacementFailureLog::SourceMessagePair>> mFailureLog;
    // NOLINTEND

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

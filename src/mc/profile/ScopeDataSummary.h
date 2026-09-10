#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profile::Whisker::Diagnostics {

struct ScopeDataSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk85fd77;
    ::ll::UntypedStorage<8, 32> mUnk29e3f2;
    ::ll::UntypedStorage<8, 8>  mUnk5168a6;
    ::ll::UntypedStorage<8, 8>  mUnkde1660;
    ::ll::UntypedStorage<8, 8>  mUnk49620f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeDataSummary& operator=(ScopeDataSummary const&);
    ScopeDataSummary();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScopeDataSummary(::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary const&);

    MCNAPI ::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary&
    operator=(::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary&&);

    MCNAPI ~ScopeDataSummary();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker::Diagnostics

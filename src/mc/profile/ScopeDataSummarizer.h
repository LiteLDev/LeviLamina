#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker::Diagnostics { struct ScopeDataSummary; }
// clang-format on

namespace Bedrock::Profile::Whisker::Diagnostics {

class ScopeDataSummarizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk131844;
    ::ll::UntypedStorage<8, 16>  mUnk80870b;
    ::ll::UntypedStorage<1, 1>   mUnk8d1af2;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScopeDataSummarizer& operator=(ScopeDataSummarizer const&);
    ScopeDataSummarizer(ScopeDataSummarizer const&);
    ScopeDataSummarizer();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScopeDataSummarizer& operator=(ScopeDataSummarizer const&);
    ScopeDataSummarizer(ScopeDataSummarizer const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ScopeDataSummarizer();

    MCNAPI ::std::vector<::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary> collectWhiskerScopeDataSummaries();

    MCNAPI bool enableSummarization();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker::Diagnostics

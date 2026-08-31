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

public:
    // prevent constructor by default
    ScopeDataSummarizer& operator=(ScopeDataSummarizer const&);
    ScopeDataSummarizer(ScopeDataSummarizer const&);
    ScopeDataSummarizer();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::vector<::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary> collectWhiskerScopeDataSummaries();

    MCNAPI bool enableSummarization();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker::Diagnostics

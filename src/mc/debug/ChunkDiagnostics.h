#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct ChunkScoringContext; }
namespace Bedrock::ChunkDiag { struct CombinedChunkHealthScores; }
namespace Bedrock::ChunkDiag { struct TotalChunkHealthScore; }
namespace Bedrock::ChunkDiagnosticDetails { struct ChunkHealthScore; }
// clang-format on

namespace Bedrock {

class ChunkDiagnostics {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::ChunkDiag::CombinedChunkHealthScores calcCombinedLongTermScoreForAllFrames();

    MCNAPI static ::Bedrock::ChunkDiag::TotalChunkHealthScore calcCombinedScoreForAllFrames();

    MCNAPI static void startNewFrame();
#endif
    // NOLINTEND
};

} // namespace Bedrock

#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientChunkGenerationValidationData {
public:
    // prevent constructor by default
    ClientChunkGenerationValidationData& operator=(ClientChunkGenerationValidationData const&);
    ClientChunkGenerationValidationData(ClientChunkGenerationValidationData const&);
    ClientChunkGenerationValidationData();

public:
    // NOLINTBEGIN
    // symbol: ?captureServerChunkData@ClientChunkGenerationValidationData@@QEAAXAEAVChunkSource@@@Z
    MCAPI void captureServerChunkData(class ChunkSource&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_captureChunkData@ClientChunkGenerationValidationData@@IEAAXAEAV?$map@VChunkPos@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@U?$less@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@3@@std@@AEAVChunkSource@@@Z
    MCAPI void _captureChunkData(std::map<class ChunkPos, std::vector<std::string>>& data, class ChunkSource&);

    // NOLINTEND
};

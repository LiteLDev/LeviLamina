#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientChunkGenerationValidationData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTCHUNKGENERATIONVALIDATIONDATA
public:
    ClientChunkGenerationValidationData& operator=(ClientChunkGenerationValidationData const&) = delete;
    ClientChunkGenerationValidationData(ClientChunkGenerationValidationData const&)            = delete;
    ClientChunkGenerationValidationData()                                                      = delete;
#endif

public:
    /**
     * @symbol ?captureServerChunkData\@ClientChunkGenerationValidationData\@\@QEAAXAEAVChunkSource\@\@\@Z
     */
    MCAPI void captureServerChunkData(class ChunkSource&);

    // protected:
    /**
     * @symbol
     * ?_captureChunkData\@ClientChunkGenerationValidationData\@\@IEAAXAEAV?$map\@VChunkPos\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@U?$less\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@AEAVChunkSource\@\@\@Z
     */
    MCAPI void
    _captureChunkData(class std::map<class ChunkPos, std::vector<std::string>, struct std::less<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::vector<std::string>>>>&, class ChunkSource&);
};

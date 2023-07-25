#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BlockListSerializer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLISTSERIALIZER
public:
    BlockListSerializer& operator=(BlockListSerializer const&) = delete;
    BlockListSerializer(BlockListSerializer const&)            = delete;
    BlockListSerializer()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?loadJSON\@BlockListSerializer\@\@SAXVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void loadJSON(class Json::Value, class SemVersion const&, std::vector<class BlockDescriptor>&);
    /**
     * @symbol ?loadJSON\@BlockListSerializer\@\@SAXVValue\@Json\@\@AEBVSemVersion\@\@AEAVBlockDescriptor\@\@\@Z
     */
    MCAPI static void loadJSON(class Json::Value, class SemVersion const&, class BlockDescriptor&);
    /**
     * @symbol
     * ?saveJSON\@BlockListSerializer\@\@SAXAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI static void saveJSON(std::vector<class BlockDescriptor> const&, class Json::Value&);
};

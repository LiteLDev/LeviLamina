/**
 * @file  BlockListSerializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockListSerializer.
 *
 */
class BlockListSerializer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLISTSERIALIZER
public:
    class BlockListSerializer& operator=(class BlockListSerializer const &) = delete;
    BlockListSerializer(class BlockListSerializer const &) = delete;
    BlockListSerializer() = delete;
#endif

public:
    /**
     * @symbol  ?loadJSON\@BlockListSerializer\@\@SAXVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void loadJSON(class Json::Value, class SemVersion const &, std::vector<class BlockDescriptor> &);
    /**
     * @symbol  ?loadJSON\@BlockListSerializer\@\@SAXVValue\@Json\@\@AEBVSemVersion\@\@AEAVBlockDescriptor\@\@\@Z
     */
    MCAPI static void loadJSON(class Json::Value, class SemVersion const &, class BlockDescriptor &);
    /**
     * @symbol  ?saveJSON\@BlockListSerializer\@\@SAXAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI static void saveJSON(std::vector<class BlockDescriptor> const &, class Json::Value &);

};
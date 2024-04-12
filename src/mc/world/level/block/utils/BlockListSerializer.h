#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BlockListSerializer {
public:
    // prevent constructor by default
    BlockListSerializer& operator=(BlockListSerializer const&);
    BlockListSerializer(BlockListSerializer const&);
    BlockListSerializer();

public:
    // NOLINTBEGIN
    // symbol: ?loadJSON@BlockListSerializer@@SAXVValue@Json@@AEBVSemVersion@@AEAVBlockDescriptor@@@Z
    MCAPI static void
    loadJSON(class Json::Value value, class SemVersion const& engineVersion, class BlockDescriptor& blockDescriptor);

    // symbol:
    // ?loadJSON@BlockListSerializer@@SAXVValue@Json@@AEBVSemVersion@@AEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
    MCAPI static void loadJSON(
        class Json::Value                   value,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& blockDescriptors
    );

    // symbol:
    // ?saveJSON@BlockListSerializer@@SAXAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEAVValue@Json@@@Z
    MCAPI static void saveJSON(std::vector<class BlockDescriptor> const& blockDescriptors, class Json::Value& value);

    // NOLINTEND
};

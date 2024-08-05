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
    MCAPI static void
    loadJSON(class Json::Value value, class SemVersion const& engineVersion, class BlockDescriptor& blockDescriptor);

    MCAPI static void loadJSON(
        class Json::Value                   value,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& blockDescriptors
    );

    MCAPI static void saveJSON(std::vector<class BlockDescriptor> const& blockDescriptors, class Json::Value& value);

    // NOLINTEND
};

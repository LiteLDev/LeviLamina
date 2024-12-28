#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
namespace Json { class Value; }
// clang-format on

class BlockListSerializer {
public:
    // prevent constructor by default
    BlockListSerializer& operator=(BlockListSerializer const&);
    BlockListSerializer(BlockListSerializer const&);
    BlockListSerializer();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void loadJSON(::Json::Value value, ::MolangVersion molangVersion, ::BlockDescriptor& blockDescriptor);

    MCAPI static void
    loadJSON(::Json::Value value, ::MolangVersion molangVersion, ::std::vector<::BlockDescriptor>& blockDescriptors);

    MCAPI static void saveJSON(::std::vector<::BlockDescriptor> const& blockDescriptors, ::Json::Value& value);
    // NOLINTEND
};

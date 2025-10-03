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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    loadJSON(::Json::Value value, ::MolangVersion molangVersion, ::std::vector<::BlockDescriptor>& blockDescriptors);
    // NOLINTEND
};

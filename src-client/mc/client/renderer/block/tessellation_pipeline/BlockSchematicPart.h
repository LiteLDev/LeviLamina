#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BoxSchematic; }
// clang-format on

namespace ClientBlockPipeline {

struct BlockSchematicPart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::BoxSchematic>>         mBoxes;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mName;
    ::ll::TypedStorage<1, 1, uchar>                                                       mCullPart;
    ::ll::TypedStorage<1, 2, ::std::optional<::BlockCullingData::CullingRule::Condition>> mCullCondition;
    ::ll::TypedStorage<1, 1, bool>                                                        mCullAgainstFullAndOpaque;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSchematicPart& operator=(BlockSchematicPart const&);
    BlockSchematicPart(BlockSchematicPart const&);
    BlockSchematicPart();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ClientBlockPipeline::BlockSchematicPart& operator=(::ClientBlockPipeline::BlockSchematicPart&&);

    MCAPI ~BlockSchematicPart();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline

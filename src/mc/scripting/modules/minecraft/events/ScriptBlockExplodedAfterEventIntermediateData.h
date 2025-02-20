#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockExplodedAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk402313;
    ::ll::UntypedStorage<4, 12>  mUnk742de2;
    ::ll::UntypedStorage<8, 8>   mUnk484250;
    ::ll::UntypedStorage<8, 104> mUnk62bcc1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockExplodedAfterEventIntermediateData& operator=(ScriptBlockExplodedAfterEventIntermediateData const&);
    ScriptBlockExplodedAfterEventIntermediateData(ScriptBlockExplodedAfterEventIntermediateData const&);
    ScriptBlockExplodedAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockExplodedAfterEventIntermediateData(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Dimension& dimension, ::BlockPos const& blockPos, ::Block const& destroyedBlock, ::Actor* source);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

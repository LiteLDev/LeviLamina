#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class ChunkPos;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptChunkValidator {
public:
    // prevent constructor by default
    ScriptChunkValidator& operator=(ScriptChunkValidator const&);
    ScriptChunkValidator(ScriptChunkValidator const&);
    ScriptChunkValidator();

public:
    // NOLINTBEGIN
    MCAPI ScriptChunkValidator(std::set<class ChunkPos> const& chunkPositions, class BlockSource& region);

    MCAPI bool operator()(class BlockPos const& blockPos) const;

    MCAPI uint64 size() const;

    MCAPI ~ScriptChunkValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

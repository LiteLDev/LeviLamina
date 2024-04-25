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
    // symbol:
    // ??0ScriptChunkValidator@ScriptModuleMinecraft@@QEAA@AEBV?$set@VChunkPos@@U?$less@VChunkPos@@@std@@V?$allocator@VChunkPos@@@3@@std@@AEAVBlockSource@@@Z
    MCAPI ScriptChunkValidator(std::set<class ChunkPos> const&, class BlockSource&);

    // symbol: ??RScriptChunkValidator@ScriptModuleMinecraft@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool operator()(class BlockPos const&) const;

    // symbol: ?size@ScriptChunkValidator@ScriptModuleMinecraft@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ??1ScriptChunkValidator@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptChunkValidator();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockCustomComponentReader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptBlockCustomComponentReader() = default;

    // vIndex: 1
    virtual bool isValidComponentForBlock(::IBlockSource const&, ::BlockPos, ::std::string_view) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class FlushingIOController {
public:
    // prevent constructor by default
    FlushingIOController& operator=(FlushingIOController const&);
    FlushingIOController(FlushingIOController const&);
    FlushingIOController();

public:
    // NOLINTBEGIN
    // symbol: ?flush@FlushingIOController@Bedrock@@QEAA?AVResult@Core@@XZ
    MCAPI class Core::Result flush();

    // NOLINTEND
};

}; // namespace Bedrock

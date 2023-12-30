#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace Core {

class LoadTimeProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    LoadTimeProfiler& operator=(LoadTimeProfiler const&);
    LoadTimeProfiler(LoadTimeProfiler const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LoadTimeProfiler@Core@@UEAA@XZ
    virtual ~LoadTimeProfiler() = default;

    // symbol: ??0LoadTimeProfiler@Core@@QEAA@XZ
    MCAPI LoadTimeProfiler();

    // symbol: ?setEnabled@LoadTimeProfiler@Core@@QEAAX_N@Z
    MCAPI void setEnabled(bool enabled);

    // NOLINTEND
};

}; // namespace Core

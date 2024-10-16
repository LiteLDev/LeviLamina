#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ILevelListCache : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ILevelListCache& operator=(ILevelListCache const&);
    ILevelListCache(ILevelListCache const&);
    ILevelListCache();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelListCache();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

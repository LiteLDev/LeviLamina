#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace Bedrock {

class IApplicationDataStores : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IApplicationDataStores inner types define
    enum class DataStores {};

public:
    // prevent constructor by default
    IApplicationDataStores& operator=(IApplicationDataStores const&);
    IApplicationDataStores(IApplicationDataStores const&);
    IApplicationDataStores();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IApplicationDataStores();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock

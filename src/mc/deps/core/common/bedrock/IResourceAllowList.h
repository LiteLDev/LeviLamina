#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace OreUI {

class IResourceAllowList : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IResourceAllowList& operator=(IResourceAllowList const&);
    IResourceAllowList(IResourceAllowList const&);
    IResourceAllowList();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IResourceAllowList@OreUI@@UEAA@XZ
    virtual ~IResourceAllowList() = default;

    // NOLINTEND
};

}; // namespace OreUI

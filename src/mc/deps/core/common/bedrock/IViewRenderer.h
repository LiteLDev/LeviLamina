#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace OreUI {

class IViewRenderer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IViewRenderer& operator=(IViewRenderer const&);
    IViewRenderer(IViewRenderer const&);
    IViewRenderer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IViewRenderer@@@UEAA@XZ
    virtual ~IViewRenderer();

    // NOLINTEND
};

}; // namespace OreUI

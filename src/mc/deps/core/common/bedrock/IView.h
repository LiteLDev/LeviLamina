#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace OreUI {

class IView : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IView& operator=(IView const&);
    IView(IView const&);
    IView();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IView@@@UEAA@XZ
    virtual ~IView();

    // NOLINTEND
};

}; // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace OreUI {

class ILibrary : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ILibrary& operator=(ILibrary const&);
    ILibrary(ILibrary const&);
    ILibrary();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ILibrary@OreUI@@UEAA@XZ
    virtual ~ILibrary() = default;

    // NOLINTEND
};

}; // namespace OreUI

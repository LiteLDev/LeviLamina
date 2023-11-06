#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace ClientBlockPipeline {

class Material : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);
    Material();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Material@@@UEAA@XZ
    virtual ~Material();

    // NOLINTEND
};

}; // namespace ClientBlockPipeline

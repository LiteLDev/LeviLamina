#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace mce {

class IGraphicsFeatureQuery : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IGraphicsFeatureQuery& operator=(IGraphicsFeatureQuery const&);
    IGraphicsFeatureQuery(IGraphicsFeatureQuery const&);
    IGraphicsFeatureQuery();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IGraphicsFeatureQuery@mce@@UEAA@XZ
    virtual ~IGraphicsFeatureQuery() = default;

    // NOLINTEND
};

}; // namespace mce

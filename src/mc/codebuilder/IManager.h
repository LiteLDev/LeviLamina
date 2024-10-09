#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace CodeBuilder {

class IManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IManager& operator=(IManager const&);
    IManager(IManager const&);
    IManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IManager();

    // NOLINTEND
};

}; // namespace CodeBuilder

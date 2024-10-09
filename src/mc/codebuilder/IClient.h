#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace CodeBuilder {

class IClient : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IClient& operator=(IClient const&);
    IClient(IClient const&);
    IClient();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IClient();

    // NOLINTEND
};

}; // namespace CodeBuilder

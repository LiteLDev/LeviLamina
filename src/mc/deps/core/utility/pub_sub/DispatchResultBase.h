#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DispatchResultCode.h"

namespace Bedrock::PubSub::Detail {

struct DispatchResultBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::Bedrock::PubSub::DispatchResultCode>> mResultCode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DispatchResultBase() = default;
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail

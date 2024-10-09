#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class IPacketObserver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IPacketObserver& operator=(IPacketObserver const&);
    IPacketObserver(IPacketObserver const&);
    IPacketObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPacketObserver();

    // NOLINTEND
};

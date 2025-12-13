#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SharedLock.h"

// auto generated forward declare list
// clang-format off
struct RopePoints;
// clang-format on

struct RopePointsRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RopePoints const&>                                    mPoints;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedLock<::std::shared_mutex>> mPointsSharedLock;
    // NOLINTEND

public:
    // prevent constructor by default
    RopePointsRef& operator=(RopePointsRef const&);
    RopePointsRef(RopePointsRef const&);
    RopePointsRef();
};

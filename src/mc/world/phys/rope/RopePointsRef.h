#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct RopePoints;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

struct RopePointsRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RopePoints const&>          mPoints;
    ::ll::TypedStorage<8, 8, ::Bedrock::Threading::Mutex&> mPointMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    RopePointsRef& operator=(RopePointsRef const&);
    RopePointsRef(RopePointsRef const&);
    RopePointsRef();
};

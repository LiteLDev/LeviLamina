#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class GeometryGroup : public ::Bedrock::EnableNonOwnerReferences, public ::std::enable_shared_from_this<::GeometryGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk69fa9e;
    ::ll::UntypedStorage<8, 80> mUnk15a0e0;
    ::ll::UntypedStorage<8, 8> mUnk89a968;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryGroup& operator=(GeometryGroup const&);
    GeometryGroup(GeometryGroup const&);
    GeometryGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GeometryGroup() /*override*/ = default;
    // NOLINTEND

};

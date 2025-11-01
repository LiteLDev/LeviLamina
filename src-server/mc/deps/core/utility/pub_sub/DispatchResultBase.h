#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::Detail {

struct DispatchResultBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnkd5cc7f;
    // NOLINTEND

public:
    // prevent constructor by default
    DispatchResultBase& operator=(DispatchResultBase const&);
    DispatchResultBase(DispatchResultBase const&);
    DispatchResultBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DispatchResultBase() = default;
    // NOLINTEND

};

}

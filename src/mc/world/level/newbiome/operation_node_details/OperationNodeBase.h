#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class OperationNodeBase {
public:
    // prevent constructor by default
    OperationNodeBase& operator=(OperationNodeBase const&);
    OperationNodeBase(OperationNodeBase const&);
    OperationNodeBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OperationNodeBase() = default;

    // vIndex: 1
    virtual void init(int64 seed);

    // NOLINTEND
};

}; // namespace OperationNodeDetails

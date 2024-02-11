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
    // vIndex: 0, symbol: __gen_??1OperationNodeBase@OperationNodeDetails@@UEAA@XZ
    virtual ~OperationNodeBase() = default;

    // vIndex: 1, symbol: ?init@OperationNodeBase@OperationNodeDetails@@UEAAX_J@Z
    virtual void init(int64 seed);

    // NOLINTEND
};

}; // namespace OperationNodeDetails

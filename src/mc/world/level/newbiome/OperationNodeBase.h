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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?init@OperationNodeBase@OperationNodeDetails@@UEAAX_J@Z
    virtual void init(int64);

    // NOLINTEND
};

}; // namespace OperationNodeDetails

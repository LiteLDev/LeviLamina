#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class OperationNodeBase {

public:
    // prevent constructor by default
    OperationNodeBase& operator=(OperationNodeBase const&) = delete;
    OperationNodeBase(OperationNodeBase const&)            = delete;
    OperationNodeBase()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@OperationNodeBase\@OperationNodeDetails\@\@UEAAX_J\@Z
     */
    virtual void init(int64_t);
    // NOLINTEND
};

}; // namespace OperationNodeDetails

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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?init\@OperationNodeBase\@OperationNodeDetails\@\@UEAAX_J\@Z
     */
    virtual void init(__int64); // NOLINT
};

}; // namespace OperationNodeDetails

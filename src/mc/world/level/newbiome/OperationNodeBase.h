#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class OperationNodeBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEDETAILS_OPERATIONNODEBASE
public:
    OperationNodeBase& operator=(OperationNodeBase const&) = delete;
    OperationNodeBase(OperationNodeBase const&)            = delete;
    OperationNodeBase()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@OperationNodeBase\@OperationNodeDetails\@\@UEAAX_J\@Z
     */
    virtual void init(__int64);
};

}; // namespace OperationNodeDetails

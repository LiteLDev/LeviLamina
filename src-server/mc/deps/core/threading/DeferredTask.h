#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class DeferredTask {
public:
    // DeferredTask inner types define
    enum class State : int {
        Ready = 0,
        Executing = 1,
        Done = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9c24c0;
    ::ll::UntypedStorage<8, 72> mUnk93634c;
    ::ll::UntypedStorage<8, 80> mUnkabda4f;
    ::ll::UntypedStorage<8, 64> mUnk7bd5bd;
    ::ll::UntypedStorage<1, 1> mUnk7583e3;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredTask& operator=(DeferredTask const&);
    DeferredTask(DeferredTask const&);
    DeferredTask();

};

}

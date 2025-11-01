#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RewindSimulation {

struct RewindSimulationInfo {
public:
    // RewindSimulationInfo inner types declare
    // clang-format off
    struct ConstHistory;
    struct History;
    // clang-format on
    
    // RewindSimulationInfo inner types define
    struct History {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk82dc3f;
        ::ll::UntypedStorage<8, 8> mUnk310db5;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        History& operator=(History const&);
        History(History const&);
        History();
    
    };
    
    struct ConstHistory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk19b865;
        ::ll::UntypedStorage<8, 8> mUnkf356b8;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ConstHistory& operator=(ConstHistory const&);
        ConstHistory(ConstHistory const&);
        ConstHistory();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkde174f;
    ::ll::UntypedStorage<8, 24> mUnk23deea;
    ::ll::UntypedStorage<8, 8> mUnk81c4c8;
    ::ll::UntypedStorage<8, 8> mUnk25511a;
    ::ll::UntypedStorage<8, 8> mUnk6132e3;
    ::ll::UntypedStorage<8, 8> mUnk9f0057;
    ::ll::UntypedStorage<8, 8> mUnkaa6ec9;
    // NOLINTEND

public:
    // prevent constructor by default
    RewindSimulationInfo& operator=(RewindSimulationInfo const&);
    RewindSimulationInfo(RewindSimulationInfo const&);
    RewindSimulationInfo();

};

}

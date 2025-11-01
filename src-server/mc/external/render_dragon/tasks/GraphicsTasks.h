#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkQueue.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading::Burst::Strategy { class Console; }
namespace Bedrock::Threading::Burst::Strategy::Execution { class GreedyExecution; }
// clang-format on

namespace dragon::tasks {

class GraphicsTasks {
public:
    // GraphicsTasks inner types declare
    // clang-format off
    struct InitBegin;
    struct InitBgfx;
    struct InitEnd;
    struct InitFinalize;
    struct InitPending;
    struct InitializationState;
    // clang-format on
    
    // GraphicsTasks inner types define
    enum class ExecutionMode : int {
        Immediate = 0,
        Deferred = 1,
        RenderThreadLocked = 2,
        Unconstrained = 3,
    };
    
    struct InitBgfx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk1e1d05;
        ::ll::UntypedStorage<1, 1> mUnk6d4637;
        ::ll::UntypedStorage<4, 8> mUnka149d7;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        InitBgfx& operator=(InitBgfx const&);
        InitBgfx(InitBgfx const&);
        InitBgfx();
    
    };
    
    struct InitBegin : public ::dragon::tasks::GraphicsTasks::InitBgfx {
    };
    
    struct InitPending : public ::dragon::tasks::GraphicsTasks::InitBgfx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk28428c;
        ::ll::UntypedStorage<8, 16> mUnk835481;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        InitPending& operator=(InitPending const&);
        InitPending(InitPending const&);
        InitPending();
    
    };
    
    struct InitFinalize {
    };
    
    struct InitEnd {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkf9c94e;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        InitEnd& operator=(InitEnd const&);
        InitEnd(InitEnd const&);
        InitEnd();
    
    };
    
    struct InitializationState : public ::std::variant<::std::monostate, ::dragon::tasks::GraphicsTasks::InitBegin, ::dragon::tasks::GraphicsTasks::InitPending, ::dragon::tasks::GraphicsTasks::InitFinalize, ::dragon::tasks::GraphicsTasks::InitEnd> {
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6a18a6;
    ::ll::UntypedStorage<1, 1> mUnk8a7358;
    ::ll::UntypedStorage<1, 1> mUnkcd79c5;
    ::ll::UntypedStorage<4, 4> mUnk430d7c;
    ::ll::UntypedStorage<8, 8> mUnk408564;
    ::ll::UntypedStorage<8, 24> mUnk81ab20;
    ::ll::UntypedStorage<8, 8> mUnkc29824;
    ::ll::UntypedStorage<8, 16> mUnk98af7b;
    ::ll::UntypedStorage<8, 16> mUnke9e17e;
    ::ll::UntypedStorage<8, 16> mUnk540e7a;
    ::ll::UntypedStorage<8, 16> mUnke12cd2;
    ::ll::UntypedStorage<8, 16> mUnk58e5f1;
    ::ll::UntypedStorage<8, 16> mUnkc8a6de;
    ::ll::UntypedStorage<8, 16> mUnk9bafe7;
    ::ll::UntypedStorage<8, 88> mUnk6f2218;
    ::ll::UntypedStorage<8, 16> mUnka908bc;
    ::ll::UntypedStorage<8, 16> mUnk2c8251;
    ::ll::UntypedStorage<8, 8> mUnk79ea81;
    ::ll::UntypedStorage<4, 4> mUnk20cffb;
    ::ll::UntypedStorage<8, 8> mUnkb1d24c;
    ::ll::UntypedStorage<8, 8> mUnk6421c7;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsTasks& operator=(GraphicsTasks const&);
    GraphicsTasks(GraphicsTasks const&);
    GraphicsTasks();

};

}

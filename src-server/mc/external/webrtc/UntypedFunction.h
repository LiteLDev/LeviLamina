#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class UntypedFunction {
public:
    // UntypedFunction inner types declare
    // clang-format off
    struct FunctionPointerUntypedFunctionArgs;
    struct NontrivialUntypedFunctionArgs;
    // clang-format on
    
    // UntypedFunction inner types define
    struct NontrivialUntypedFunctionArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnke220ec;
        ::ll::UntypedStorage<8, 8> mUnk5a11a4;
        ::ll::UntypedStorage<8, 8> mUnk70eaf6;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        NontrivialUntypedFunctionArgs& operator=(NontrivialUntypedFunctionArgs const&);
        NontrivialUntypedFunctionArgs(NontrivialUntypedFunctionArgs const&);
        NontrivialUntypedFunctionArgs();
    
    };
    
    struct FunctionPointerUntypedFunctionArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk9d6db5;
        ::ll::UntypedStorage<8, 8> mUnk207fc2;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        FunctionPointerUntypedFunctionArgs& operator=(FunctionPointerUntypedFunctionArgs const&);
        FunctionPointerUntypedFunctionArgs(FunctionPointerUntypedFunctionArgs const&);
        FunctionPointerUntypedFunctionArgs();
    
    };
    
    enum : uint64 {
        // bitfield representation
        KInlineStorageSize = 1ull << 5,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk162c30;
    ::ll::UntypedStorage<8, 8> mUnkfa7cce;
    ::ll::UntypedStorage<8, 8> mUnk5b4e9b;
    // NOLINTEND

public:
    // prevent constructor by default
    UntypedFunction& operator=(UntypedFunction const&);
    UntypedFunction(UntypedFunction const&);
    UntypedFunction();

};

}

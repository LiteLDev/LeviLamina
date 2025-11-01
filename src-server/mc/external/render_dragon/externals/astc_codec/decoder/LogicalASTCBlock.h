#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

class LogicalASTCBlock {
public:
    // LogicalASTCBlock inner types declare
    // clang-format off
    struct DualPlaneData;
    // clang-format on
    
    // LogicalASTCBlock inner types define
    struct DualPlaneData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5cb817;
        ::ll::UntypedStorage<8, 24> mUnkb77b15;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        DualPlaneData& operator=(DualPlaneData const&);
        DualPlaneData(DualPlaneData const&);
        DualPlaneData();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk425886;
    ::ll::UntypedStorage<8, 24> mUnkf7631b;
    ::ll::UntypedStorage<8, 48> mUnk36c6cf;
    ::ll::UntypedStorage<8, 40> mUnk60f23e;
    // NOLINTEND

public:
    // prevent constructor by default
    LogicalASTCBlock& operator=(LogicalASTCBlock const&);
    LogicalASTCBlock(LogicalASTCBlock const&);
    LogicalASTCBlock();

};

}

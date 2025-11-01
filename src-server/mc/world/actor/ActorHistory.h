#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IMovementCorrection;
// clang-format on

class ActorHistory {
public:
    // ActorHistory inner types declare
    // clang-format off
    struct Snapshot;
    // clang-format on
    
    // ActorHistory inner types define
    struct Snapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkbab8be;
        ::ll::UntypedStorage<8, 24> mUnk4712e3;
        ::ll::UntypedStorage<8, 8> mUnk9d9e50;
        ::ll::UntypedStorage<1, 1> mUnked986d;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Snapshot& operator=(Snapshot const&);
        Snapshot(Snapshot const&);
        Snapshot();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb333c9;
    ::ll::UntypedStorage<8, 40> mUnkb07939;
    ::ll::UntypedStorage<8, 8> mUnkf30cca;
    ::ll::UntypedStorage<4, 4> mUnke9658f;
    ::ll::UntypedStorage<8, 24> mUnkb8d0de;
    ::ll::UntypedStorage<8, 8> mUnka27fb0;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHistory& operator=(ActorHistory const&);
    ActorHistory(ActorHistory const&);
    ActorHistory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addCorrectionToFrame(::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);

    MCNAPI void queueCorrection(::std::shared_ptr<::IMovementCorrection> correction);
    // NOLINTEND

};

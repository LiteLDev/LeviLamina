#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class Rackspace {
public:
    // Rackspace inner types declare
    // clang-format off
    struct RackspaceOperation;
    // clang-format on
    
    // Rackspace inner types define
    struct RackspaceOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk6b7959;
        ::ll::UntypedStorage<8, 136> mUnk679649;
        ::ll::UntypedStorage<1, 1> mUnk564fba;
        ::ll::UntypedStorage<8, 8> mUnkb68378;
        ::ll::UntypedStorage<8, 8> mUnk29ea93;
        ::ll::UntypedStorage<8, 8> mUnk6b4c46;
        ::ll::UntypedStorage<8, 8> mUnkc8b06b;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        RackspaceOperation& operator=(RackspaceOperation const&);
        RackspaceOperation(RackspaceOperation const&);
        RackspaceOperation();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk52abb1;
    ::ll::UntypedStorage<8, 8> mUnk83d2fb;
    ::ll::UntypedStorage<8, 16> mUnkbba7ef;
    ::ll::UntypedStorage<8, 8> mUnkc6399b;
    ::ll::UntypedStorage<8, 8> mUnk138b58;
    ::ll::UntypedStorage<8, 8> mUnk64b99f;
    ::ll::UntypedStorage<8, 8> mUnkca919f;
    ::ll::UntypedStorage<8, 8> mUnk211541;
    ::ll::UntypedStorage<8, 8> mUnk964d18;
    ::ll::UntypedStorage<8, 8> mUnk152aca;
    ::ll::UntypedStorage<8, 8> mUnk270542;
    ::ll::UntypedStorage<8, 8> mUnk19cd28;
    ::ll::UntypedStorage<8, 8> mUnk37db59;
    ::ll::UntypedStorage<8, 8> mUnkb42757;
    ::ll::UntypedStorage<8, 8> mUnkdf48f8;
    ::ll::UntypedStorage<8, 8> mUnka244d9;
    // NOLINTEND

public:
    // prevent constructor by default
    Rackspace& operator=(Rackspace const&);
    Rackspace(Rackspace const&);
    Rackspace();

};

}

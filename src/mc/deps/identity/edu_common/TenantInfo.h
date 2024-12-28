#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TenantInfo {
public:
    // TenantInfo inner types define
    enum class TokenState : int {
        Missing = 4294967294,
        Expired = 4294967295,
        Stale   = 0,
        Fresh   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk74ae02;
    ::ll::UntypedStorage<8, 32>  mUnk618156;
    ::ll::UntypedStorage<8, 32>  mUnk50d374;
    ::ll::UntypedStorage<8, 32>  mUnk5a7060;
    ::ll::UntypedStorage<8, 80>  mUnk506b20;
    ::ll::UntypedStorage<4, 4>   mUnk2576ba;
    ::ll::UntypedStorage<4, 4>   mUnk246934;
    ::ll::UntypedStorage<8, 136> mUnkc6beb3;
    // NOLINTEND

public:
    // prevent constructor by default
    TenantInfo& operator=(TenantInfo const&);
    TenantInfo(TenantInfo const&);
    TenantInfo();
};

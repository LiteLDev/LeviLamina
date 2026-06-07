#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/platform/Result.h"

class TransportProber : public ::Bedrock::Threading::AsyncResultBase<::Bedrock::Result<::std::string>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk29e78d;
    ::ll::UntypedStorage<8, 336> mUnk515969;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportProber& operator=(TransportProber const&);
    TransportProber(TransportProber const&);
    TransportProber();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransportProber() /*override*/ = default;
    // NOLINTEND
};

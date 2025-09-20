#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketLimitAlgorithm.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BucketPacketLimitAlgorithm : public ::IPacketLimitAlgorithm {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke601de;
    ::ll::UntypedStorage<4, 4>  mUnke51234;
    ::ll::UntypedStorage<8, 8>  mUnkf22008;
    ::ll::UntypedStorage<4, 4>  mUnkc65a29;
    ::ll::UntypedStorage<4, 4>  mUnk66956d;
    // NOLINTEND

public:
    // prevent constructor by default
    BucketPacketLimitAlgorithm& operator=(BucketPacketLimitAlgorithm const&);
    BucketPacketLimitAlgorithm();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::IPacketLimitAlgorithm> copy() const /*override*/;

    // vIndex: 2
    virtual uint checkPacket(::MinecraftPacketIds) /*override*/;

    // vIndex: 0
    virtual ~BucketPacketLimitAlgorithm() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BucketPacketLimitAlgorithm(::BucketPacketLimitAlgorithm const& other);

    MCNAPI BucketPacketLimitAlgorithm(float drainRatePerSec, uint maxBucketSize);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BucketPacketLimitAlgorithm> createFromJsonParams(::Json::Value& paramsNode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BucketPacketLimitAlgorithm const& other);

    MCNAPI void* $ctor(float drainRatePerSec, uint maxBucketSize);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::IPacketLimitAlgorithm> $copy() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

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
    BucketPacketLimitAlgorithm(BucketPacketLimitAlgorithm const&);
    BucketPacketLimitAlgorithm();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::IPacketLimitAlgorithm> copy() const /*override*/;

    virtual uint checkPacket(::MinecraftPacketIds packet) /*override*/;

#ifdef LL_PLAT_S
    virtual ~BucketPacketLimitAlgorithm() /*override*/;
#else // LL_PLAT_C
    virtual ~BucketPacketLimitAlgorithm() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI BucketPacketLimitAlgorithm(float drainRatePerSec, uint maxBucketSize);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::Bedrock::Result<::BucketPacketLimitAlgorithm> createFromJsonParams(::Json::Value& paramsNode);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(float drainRatePerSec, uint maxBucketSize);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::std::unique_ptr<::IPacketLimitAlgorithm> $copy() const;

    MCNAPI uint $checkPacket(::MinecraftPacketIds packet);
#endif


    // NOLINTEND
};

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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BucketPacketLimitAlgorithm& operator=(BucketPacketLimitAlgorithm const&);
    BucketPacketLimitAlgorithm();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    BucketPacketLimitAlgorithm& operator=(BucketPacketLimitAlgorithm const&);
    BucketPacketLimitAlgorithm(BucketPacketLimitAlgorithm const&);
    BucketPacketLimitAlgorithm();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::IPacketLimitAlgorithm> copy() const /*override*/;

    virtual uint checkPacket(::MinecraftPacketIds) /*override*/;

    virtual ~BucketPacketLimitAlgorithm() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI BucketPacketLimitAlgorithm(::BucketPacketLimitAlgorithm const& other);

    MCNAPI BucketPacketLimitAlgorithm(
        float                                                      drainRatePerSec,
        uint                                                       maxBucketSize,
        ::std::function<::std::chrono::steady_clock::time_point()> getTime
    );
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
    MCNAPI void* $ctor(::BucketPacketLimitAlgorithm const& other);

    MCNAPI void* $ctor(
        float                                                      drainRatePerSec,
        uint                                                       maxBucketSize,
        ::std::function<::std::chrono::steady_clock::time_point()> getTime
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::std::unique_ptr<::IPacketLimitAlgorithm> $copy() const;

    MCNAPI uint $checkPacket(::MinecraftPacketIds);
#endif


    // NOLINTEND
};

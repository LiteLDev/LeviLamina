#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
struct DlcId;
struct IDlcBatchModel;
// clang-format on

class IDlcBatcher {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IDlcBatcher() = default;
#else // LL_PLAT_C
    virtual ~IDlcBatcher();
#endif

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const&) = 0;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const&) = 0;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::PackIdVersion> const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

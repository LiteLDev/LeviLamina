#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IDlcBatchModel;
struct PackIdVersion;
// clang-format on

class IDlcBatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDlcBatcher();

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const& dlcIds) = 0;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const& productIds) = 0;

    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::PackIdVersion> const& packIds) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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

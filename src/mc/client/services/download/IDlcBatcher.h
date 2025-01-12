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
    // vIndex: 0
    virtual ~IDlcBatcher() = default;

    // vIndex: 3
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const&) = 0;

    // vIndex: 2
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const&) = 0;

    // vIndex: 1
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::PackIdVersion> const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

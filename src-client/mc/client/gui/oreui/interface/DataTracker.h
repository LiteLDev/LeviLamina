#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScopedActiveTracker.h"
#include "mc/client/gui/oreui/interface/ScopedFPSDataTracker.h"

namespace OreUI {

struct DataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                  mPreviousScreenName;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mScreenName;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>>    mContentfulPaint;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>>    mMeaningfulPaintWithRendering;
    ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::ScopedFPSDataTracker>> mLoading;
    ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::ScopedFPSDataTracker>> mAverage;
    ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::ScopedFPSDataTracker>> mIdle;
    ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::ScopedFPSDataTracker>> mInteraction;
    ::ll::TypedStorage<8, 64, ::std::optional<::OreUI::ScopedActiveTracker>>  mDataChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTracker& operator=(DataTracker const&);
    DataTracker(DataTracker const&);
    DataTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::DataTracker& operator=(::OreUI::DataTracker&&);

    MCAPI ~DataTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI

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
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                          mContentfulPaint;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                          mMeaningfulPaint;
    ::ll::TypedStorage<4, 20, ::std::optional<::OreUI::ScopedFPSDataTracker>> mLoading;
    ::ll::TypedStorage<4, 20, ::std::optional<::OreUI::ScopedFPSDataTracker>> mAverage;
    ::ll::TypedStorage<4, 20, ::std::optional<::OreUI::ScopedFPSDataTracker>> mIdle;
    ::ll::TypedStorage<4, 20, ::std::optional<::OreUI::ScopedFPSDataTracker>> mInteraction;
    ::ll::TypedStorage<8, 48, ::std::optional<::OreUI::ScopedActiveTracker>>  mDataChanged;
    ::ll::TypedStorage<4, 4, float>                                           mPercentTimeSpentInOreUIVM;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTracker& operator=(DataTracker const&);
    DataTracker(DataTracker const&);
    DataTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataTracker(::OreUI::DataTracker&&);

    MCAPI ::OreUI::DataTracker& operator=(::OreUI::DataTracker&&);

    MCAPI ~DataTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::DataTracker&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI

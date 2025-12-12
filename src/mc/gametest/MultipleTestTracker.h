#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class MultipleTestTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk75834b;
    // NOLINTEND

public:
    // prevent constructor by default
    MultipleTestTracker& operator=(MultipleTestTracker const&);
    MultipleTestTracker(MultipleTestTracker const&);
    MultipleTestTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addListener(::std::shared_ptr<::gametest::IGameTestListener> listener);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& sFailedOptionalTest();

    MCNAPI static ::std::string const& sFailedRequiredTest();

    MCNAPI static ::std::string const& sNotStartedTest();

    MCNAPI static ::std::string const& sOnGoingTest();

    MCNAPI static ::std::string const& sSuccessfulTest();
    // NOLINTEND
};

} // namespace gametest

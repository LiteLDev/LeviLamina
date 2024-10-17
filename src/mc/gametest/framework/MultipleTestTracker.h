#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class MultipleTestTracker {
public:
    // prevent constructor by default
    MultipleTestTracker& operator=(MultipleTestTracker const&);
    MultipleTestTracker(MultipleTestTracker const&);
    MultipleTestTracker();

public:
    // NOLINTBEGIN
    MCAPI void addListener(std::shared_ptr<class gametest::IGameTestListener> listener);

    MCAPI bool isDone() const;

    MCAPI void removeListener(std::shared_ptr<class gametest::IGameTestListener> listener);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string const& sFailedOptionalTest();

    MCAPI static std::string const& sFailedRequiredTest();

    MCAPI static std::string const& sNotStartedTest();

    MCAPI static std::string const& sOnGoingTest();

    MCAPI static std::string const& sSuccessfulTest();

    // NOLINTEND
};

}; // namespace gametest

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class MultipleTestTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3e513d;
    // NOLINTEND

public:
    // prevent constructor by default
    MultipleTestTracker& operator=(MultipleTestTracker const&);
    MultipleTestTracker(MultipleTestTracker const&);
    MultipleTestTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MultipleTestTracker(
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestInstance>> const& tests
    );

    MCNAPI void addListener(::std::shared_ptr<::gametest::IGameTestListener> listener);

    MCNAPI ~MultipleTestTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::std::shared_ptr<::gametest::BaseGameTestInstance>> const& tests);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest

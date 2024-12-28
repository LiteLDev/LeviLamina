#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class TestSummaryDisplayer : public ::gametest::IGameTestListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf27c23;
    ::ll::UntypedStorage<8, 8> mUnk36b5e9;
    // NOLINTEND

public:
    // prevent constructor by default
    TestSummaryDisplayer& operator=(TestSummaryDisplayer const&);
    TestSummaryDisplayer(TestSummaryDisplayer const&);
    TestSummaryDisplayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void onTestPassed(::gametest::BaseGameTestInstance&) /*override*/;

    // vIndex: 3
    virtual void onTestFailed(::gametest::BaseGameTestInstance&) /*override*/;

    // vIndex: 0
    virtual ~TestSummaryDisplayer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _say(::std::string const& text, ::std::string const& chatColor) const;

    MCAPI void _showTestSummaryIfAllDone() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onTestPassed(::gametest::BaseGameTestInstance&);

    MCAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

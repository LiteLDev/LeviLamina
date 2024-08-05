#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
// clang-format on

class TestSummaryDisplayer : public ::gametest::IGameTestListener {
public:
    // prevent constructor by default
    TestSummaryDisplayer& operator=(TestSummaryDisplayer const&);
    TestSummaryDisplayer(TestSummaryDisplayer const&);
    TestSummaryDisplayer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TestSummaryDisplayer() = default;

    // vIndex: 1
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);

    // vIndex: 2
    virtual void onTestPassed(class gametest::BaseGameTestInstance&);

    // vIndex: 3
    virtual void onTestFailed(class gametest::BaseGameTestInstance&);

    // vIndex: 4
    virtual void onTestStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 5
    virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 6
    virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _say(std::string const& text, std::string const&) const;

    MCAPI void _showTestSummaryIfAllDone() const;

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TestSummaryDisplayer;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestTicker; }
namespace gametest { class MultipleTestTracker; }
namespace gametest { struct TestParameters; }
// clang-format on

namespace gametest {

class BaseGameTestBatchRunner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk21b924;
    ::ll::UntypedStorage<8, 64> mUnk1b7674;
    ::ll::UntypedStorage<8, 24> mUnkf9be2e;
    ::ll::UntypedStorage<8, 24> mUnk8d0a12;
    ::ll::UntypedStorage<8, 8>  mUnk62d7f4;
    ::ll::UntypedStorage<4, 4>  mUnke52d45;
    ::ll::UntypedStorage<8, 8>  mUnkd25d6d;
    ::ll::UntypedStorage<1, 1>  mUnk763143;
    ::ll::UntypedStorage<8, 16> mUnkfa4478;
    ::ll::UntypedStorage<8, 16> mUnk26cd31;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestBatchRunner& operator=(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGameTestBatchRunner();

    virtual ::std::shared_ptr<::gametest::BaseGameTestInstance>
    _createGameTestInstance(::gametest::BaseGameTestFunction& function) = 0;

    virtual void
    _runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseGameTestBatchRunner(
        ::std::vector<::gametest::GameTestBatch>&& batches,
        ::gametest::GameTestTicker&                testTicker,
        ::gametest::TestParameters&&               params
    );

    MCNAPI void _resetBatchTracker();

    MCNAPI void _runBatch(int batchIndex);

    MCNAPI ::std::vector<::std::shared_ptr<::gametest::BaseGameTestInstance>> const& getTestInstances() const;

    MCNAPI void setBatchTestTracker(
        ::std::unique_ptr<::gametest::MultipleTestTracker> batchTestTracker,
        ::std::weak_ptr<::TestSummaryDisplayer>            testDisplayer
    );

    MCNAPI void start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::vector<::gametest::GameTestBatch>&& batches,
        ::gametest::GameTestTicker&                testTicker,
        ::gametest::TestParameters&&               params
    );
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

} // namespace gametest

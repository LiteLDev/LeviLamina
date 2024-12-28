#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestTicker; }
namespace gametest { struct TestParameters; }
// clang-format on

namespace gametest {

class BaseGameTestBatchRunner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk21b924;
    ::ll::UntypedStorage<8, 64> mUnk1b7674;
    ::ll::UntypedStorage<8, 24> mUnkba7c36;
    ::ll::UntypedStorage<8, 24> mUnka9ea43;
    ::ll::UntypedStorage<8, 8>  mUnk7103cd;
    ::ll::UntypedStorage<4, 4>  mUnke52d45;
    ::ll::UntypedStorage<8, 8>  mUnkff9d96;
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
    // vIndex: 0
    virtual ~BaseGameTestBatchRunner();

    // vIndex: 1
    virtual ::std::shared_ptr<::gametest::BaseGameTestInstance>
    _createGameTestInstance(::gametest::BaseGameTestFunction&) = 0;

    // vIndex: 2
    virtual void _runTest(::std::shared_ptr<::gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseGameTestBatchRunner(
        ::std::vector<::gametest::GameTestBatch>&& batches,
        ::gametest::GameTestTicker&                testTicker,
        ::gametest::TestParameters&&               params
    );

    MCAPI void _addTestInstanceWithRotation(
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestInstance>>& instances,
        ::std::shared_ptr<::gametest::BaseGameTestFunction>                 testFunction,
        ::Rotation                                                          rotation
    );

    MCAPI void _resetBatchTracker();

    MCAPI void _runBatch(int batchIndex);

    MCAPI void start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::gametest::GameTestBatch>&& batches,
        ::gametest::GameTestTicker&                testTicker,
        ::gametest::TestParameters&&               params
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest

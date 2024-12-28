#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace gametest {

class BaseGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd88a72;
    ::ll::UntypedStorage<8, 32> mUnkc38784;
    ::ll::UntypedStorage<8, 32> mUnk511710;
    ::ll::UntypedStorage<8, 32> mUnkede228;
    ::ll::UntypedStorage<4, 16> mUnk5533a3;
    ::ll::UntypedStorage<1, 1>  mUnk42288f;
    ::ll::UntypedStorage<4, 4>  mUnkf34e45;
    ::ll::UntypedStorage<4, 4>  mUnk8b439f;
    ::ll::UntypedStorage<4, 4>  mUnk3ffdca;
    ::ll::UntypedStorage<4, 4>  mUnkedce45;
    ::ll::UntypedStorage<4, 4>  mUnkb17bec;
    ::ll::UntypedStorage<1, 1>  mUnka1ced5;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestFunction& operator=(BaseGameTestFunction const&);
    BaseGameTestFunction(BaseGameTestFunction const&);
    BaseGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseGameTestFunction();

    // vIndex: 1
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionContext>
    createContext(::gametest::BaseGameTestHelper&) const = 0;

    // vIndex: 2
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseGameTestFunction(
        ::std::string                batchName,
        ::std::string                testName,
        ::std::string                structureName,
        int                          maxTicks,
        int                          setupTicks,
        int                          padding,
        bool                         rotate,
        bool                         required,
        int                          requiredSuccesses,
        int                          attempts,
        ::std::vector<::std::string> tags
    );

    MCAPI void _addTag(::std::string tag);

    MCAPI bool getRotate() const;

    MCAPI ::std::string const& getTestName() const;

    MCAPI bool hasTag(::std::string const& tag) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                batchName,
        ::std::string                testName,
        ::std::string                structureName,
        int                          maxTicks,
        int                          setupTicks,
        int                          padding,
        bool                         rotate,
        bool                         required,
        int                          requiredSuccesses,
        int                          attempts,
        ::std::vector<::std::string> tags
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

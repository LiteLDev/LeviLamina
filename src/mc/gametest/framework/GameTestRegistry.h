#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkfd6023;
    ::ll::UntypedStorage<8, 64> mUnkb19192;
    ::ll::UntypedStorage<8, 24> mUnk329014;
    ::ll::UntypedStorage<8, 24> mUnk9b0e1e;
    ::ll::UntypedStorage<8, 24> mUnkf4b42a;
    ::ll::UntypedStorage<1, 1>  mUnk67eda1;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestRegistry& operator=(GameTestRegistry const&);
    GameTestRegistry(GameTestRegistry const&);
    GameTestRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearAllTestMethods();

    MCNAPI void generateTagsList();

    MCNAPI ::std::function<void()> getAfterBatchFunction(::std::string const& batchName);

    MCNAPI ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> getAllTestFunctions();

    MCNAPI ::std::vector<::std::string> const& getAllTestTags() const;

    MCNAPI ::std::function<void()> getBeforeBatchFunction(::std::string const& batchName);

    MCNAPI ::std::shared_ptr<::gametest::BaseGameTestFunction> getTestFunction(::std::string const& testName);

    MCNAPI ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>>
    getTestFunctionsWithTag(::std::string const& tag);

#ifdef LL_PLAT_S
    MCNAPI bool isReady() const;
#endif

    MCNAPI bool isTestTag(::std::string const& tag) const;

    MCNAPI bool registerAfterBatchFunction(::std::string const& batchName, ::std::function<void()> fn);

    MCNAPI bool registerBeforeBatchFunction(::std::string const& batchName, ::std::function<void()> fn);

    MCNAPI bool
    registerTestMethod(::std::string const& className, ::std::shared_ptr<::gametest::BaseGameTestFunction> fn);

    MCNAPI void setReady();

    MCNAPI ~GameTestRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest

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
    ::ll::UntypedStorage<8, 64> mUnk6c0fb8;
    ::ll::UntypedStorage<8, 24> mUnkf818d8;
    ::ll::UntypedStorage<8, 24> mUnkd71d3b;
    ::ll::UntypedStorage<8, 24> mUnk69d09f;
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
    MCAPI void clearAllTestMethods();

    MCAPI void generateTagsList();

    MCAPI ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> getAllTestFunctions();

    MCAPI ::std::vector<::std::string> const& getAllTestTags() const;

    MCAPI ::std::shared_ptr<::gametest::BaseGameTestFunction> getTestFunction(::std::string const& testName);

    MCAPI ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>>
    getTestFunctionsWithTag(::std::string const& tag);

    MCAPI bool isReady() const;

    MCAPI bool isTestTag(::std::string const& tag) const;

    MCAPI bool
    registerTestMethod(::std::string const& className, ::std::shared_ptr<::gametest::BaseGameTestFunction> fn);

    MCAPI void setReady();
    // NOLINTEND
};

} // namespace gametest

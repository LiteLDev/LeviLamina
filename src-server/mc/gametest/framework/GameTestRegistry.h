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
    ::ll::UntypedStorage<8, 64> mUnkf7057e;
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
    MCNAPI void clearAllTestMethods();

    MCNAPI void generateTagsList();

    MCNAPI ::std::shared_ptr<::gametest::BaseGameTestFunction> getTestFunction(::std::string const& testName);

    MCNAPI bool
    registerTestMethod(::std::string const& className, ::std::shared_ptr<::gametest::BaseGameTestFunction> fn);
    // NOLINTEND
};

} // namespace gametest

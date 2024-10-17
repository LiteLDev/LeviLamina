#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestRegistry {
public:
    // prevent constructor by default
    GameTestRegistry& operator=(GameTestRegistry const&);
    GameTestRegistry(GameTestRegistry const&);
    GameTestRegistry();

public:
    // NOLINTBEGIN
    MCAPI void clearAllTestMethods();

    MCAPI void generateTagsList();

    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>> getAllTestFunctions();

    MCAPI std::vector<std::string> const& getAllTestTags() const;

    MCAPI std::function<void()> getBeforeBatchFunction(std::string const& batchName);

    MCAPI std::shared_ptr<class gametest::BaseGameTestFunction> getTestFunction(std::string const& testName);

    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>>
          getTestFunctionsWithTag(std::string const& tag);

    MCAPI bool isTestTag(std::string const& tag) const;

    MCAPI bool registerBeforeBatchFunction(std::string const& batchName, std::function<void()> fn);

    MCAPI bool
    registerTestMethod(std::string const& className, std::shared_ptr<class gametest::BaseGameTestFunction> fn);

    // NOLINTEND
};

}; // namespace gametest

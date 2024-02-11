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

public:
    // NOLINTBEGIN
    // symbol: ??0GameTestRegistry@gametest@@QEAA@XZ
    MCAPI GameTestRegistry();

    // symbol: ?clearAllTestMethods@GameTestRegistry@gametest@@QEAAXXZ
    MCAPI void clearAllTestMethods();

    // symbol: ?generateTagsList@GameTestRegistry@gametest@@QEAAXXZ
    MCAPI void generateTagsList();

    // symbol:
    // ?getAllTestFunctions@GameTestRegistry@gametest@@QEAA?AV?$vector@V?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@V?$allocator@V?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>> getAllTestFunctions();

    // symbol:
    // ?getAllTestTags@GameTestRegistry@gametest@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const& getAllTestTags() const;

    // symbol:
    // ?getBeforeBatchFunction@GameTestRegistry@gametest@@QEAA?AV?$function@$$A6AXXZ@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::function<void()> getBeforeBatchFunction(std::string const&);

    // symbol:
    // ?getTestFunction@GameTestRegistry@gametest@@QEAA?AV?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::shared_ptr<class gametest::BaseGameTestFunction> getTestFunction(std::string const&);

    // symbol:
    // ?getTestFunctionsWithTag@GameTestRegistry@gametest@@QEAA?AV?$vector@V?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@V?$allocator@V?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>>
          getTestFunctionsWithTag(std::string const& tag);

    // symbol:
    // ?isTestTag@GameTestRegistry@gametest@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isTestTag(std::string const& tag) const;

    // symbol:
    // ?registerBeforeBatchFunction@GameTestRegistry@gametest@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXXZ@4@@Z
    MCAPI bool registerBeforeBatchFunction(std::string const&, std::function<void()> fn);

    // symbol:
    // ?registerTestMethod@GameTestRegistry@gametest@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VBaseGameTestFunction@gametest@@@4@@Z
    MCAPI bool registerTestMethod(std::string const&, std::shared_ptr<class gametest::BaseGameTestFunction> fn);

    // NOLINTEND
};

}; // namespace gametest

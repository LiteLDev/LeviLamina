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
    GameTestRegistry& operator=(GameTestRegistry const&) = delete;
    GameTestRegistry(GameTestRegistry const&)            = delete;

public:
    /**
     * @symbol ??0GameTestRegistry\@gametest\@\@QEAA\@XZ
     */
    MCAPI GameTestRegistry(); // NOLINT
    /**
     * @symbol ?clearAllTestMethods\@GameTestRegistry\@gametest\@\@QEAAXXZ
     */
    MCAPI void clearAllTestMethods(); // NOLINT
    /**
     * @symbol ?generateTagsList\@GameTestRegistry\@gametest\@\@QEAAXXZ
     */
    MCAPI void generateTagsList(); // NOLINT
    /**
     * @symbol
     * ?getAllTestFunctions\@GameTestRegistry\@gametest\@\@QEAA?AV?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class gametest::BaseGameTestFunction>> getAllTestFunctions(); // NOLINT
    /**
     * @symbol
     * ?getAllTestTags\@GameTestRegistry\@gametest\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const& getAllTestTags() const; // NOLINT
    /**
     * @symbol
     * ?getBeforeBatchFunction\@GameTestRegistry\@gametest\@\@QEAA?AV?$function\@$$A6AXXZ\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI class std::function<void(void)> getBeforeBatchFunction(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getTestFunction\@GameTestRegistry\@gametest\@\@QEAA?AV?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI class std::shared_ptr<class gametest::BaseGameTestFunction> getTestFunction(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getTestFunctionsWithTag\@GameTestRegistry\@gametest\@\@QEAA?AV?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI std::vector<class std::shared_ptr<class gametest::BaseGameTestFunction>>
          getTestFunctionsWithTag(std::string const&); // NOLINT
    /**
     * @symbol
     * ?isTestTag\@GameTestRegistry\@gametest\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isTestTag(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?registerBeforeBatchFunction\@GameTestRegistry\@gametest\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXXZ\@4\@\@Z
     */
    MCAPI bool registerBeforeBatchFunction(std::string const&, class std::function<void(void)>); // NOLINT
    /**
     * @symbol
     * ?registerTestMethod\@GameTestRegistry\@gametest\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@4\@\@Z
     */
    MCAPI bool
    registerTestMethod(std::string const&, class std::shared_ptr<class gametest::BaseGameTestFunction>); // NOLINT
};

}; // namespace gametest

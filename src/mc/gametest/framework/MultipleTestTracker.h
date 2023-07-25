#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class MultipleTestTracker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_MULTIPLETESTTRACKER
public:
    MultipleTestTracker& operator=(MultipleTestTracker const&) = delete;
    MultipleTestTracker(MultipleTestTracker const&)            = delete;
    MultipleTestTracker()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ??0MultipleTestTracker\@gametest\@\@QEAA\@AEBV?$vector\@V?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI MultipleTestTracker(std::vector<class std::shared_ptr<class gametest::BaseGameTestInstance>> const&);
    /**
     * @symbol
     * ?addListener\@MultipleTestTracker\@gametest\@\@QEAAXV?$shared_ptr\@VIGameTestListener\@gametest\@\@\@std\@\@\@Z
     */
    MCAPI void addListener(class std::shared_ptr<class gametest::IGameTestListener>);
    /**
     * @symbol ?isDone\@MultipleTestTracker\@gametest\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @symbol
     * ?removeListener\@MultipleTestTracker\@gametest\@\@QEAAXV?$shared_ptr\@VIGameTestListener\@gametest\@\@\@std\@\@\@Z
     */
    MCAPI void removeListener(class std::shared_ptr<class gametest::IGameTestListener>);

    // private:

private:
    /**
     * @symbol
     * ?sFailedOptionalTest\@MultipleTestTracker\@gametest\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sFailedOptionalTest;
    /**
     * @symbol
     * ?sFailedRequiredTest\@MultipleTestTracker\@gametest\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sFailedRequiredTest;
    /**
     * @symbol
     * ?sNotStartedTest\@MultipleTestTracker\@gametest\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sNotStartedTest;
    /**
     * @symbol
     * ?sOnGoingTest\@MultipleTestTracker\@gametest\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sOnGoingTest;
    /**
     * @symbol
     * ?sSuccessfulTest\@MultipleTestTracker\@gametest\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sSuccessfulTest;
};

}; // namespace gametest

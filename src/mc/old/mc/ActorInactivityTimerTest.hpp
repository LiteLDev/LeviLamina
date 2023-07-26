/**
 * @file  ActorInactivityTimerTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInactivityTimerTest.
 *
 */
class ActorInactivityTimerTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINACTIVITYTIMERTEST
public:
    class ActorInactivityTimerTest& operator=(class ActorInactivityTimerTest const &) = delete;
    ActorInactivityTimerTest(class ActorInactivityTimerTest const &) = delete;
    ActorInactivityTimerTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorInactivityTimerTest();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@ActorInactivityTimerTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@ActorInactivityTimerTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
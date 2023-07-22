/**
 * @file  ActorIsImmobileTest.hpp
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
 * @brief MC class ActorIsImmobileTest.
 *
 */
class ActorIsImmobileTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISIMMOBILETEST
public:
    class ActorIsImmobileTest& operator=(class ActorIsImmobileTest const &) = delete;
    ActorIsImmobileTest(class ActorIsImmobileTest const &) = delete;
    ActorIsImmobileTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorIsImmobileTest();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@ActorIsImmobileTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@ActorIsImmobileTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
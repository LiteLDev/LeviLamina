/**
 * @file  ActorHasNameTagTest.hpp
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
 * @brief MC class ActorHasNameTagTest.
 *
 */
class ActorHasNameTagTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASNAMETAGTEST
public:
    class ActorHasNameTagTest& operator=(class ActorHasNameTagTest const &) = delete;
    ActorHasNameTagTest(class ActorHasNameTagTest const &) = delete;
    ActorHasNameTagTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorHasNameTagTest();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@ActorHasNameTagTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@ActorHasNameTagTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
/**
 * @file  ActorInCloudsTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInCloudsTest.
 *
 */
class ActorInCloudsTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINCLOUDSTEST
public:
    class ActorInCloudsTest& operator=(class ActorInCloudsTest const &) = delete;
    ActorInCloudsTest(class ActorInCloudsTest const &) = delete;
    ActorInCloudsTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorInCloudsTest();
    /**
     * @hash   -1593126580
     * @vftbl  2
     * @symbol  ?evaluate\@ActorInCloudsTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -912969402
     * @vftbl  4
     * @symbol  ?getName\@ActorInCloudsTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
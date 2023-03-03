/**
 * @file  ActorMissingHealthTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorMissingHealthTest.
 *
 */
class ActorMissingHealthTest : public FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMISSINGHEALTHTEST
public:
    class ActorMissingHealthTest& operator=(class ActorMissingHealthTest const &) = delete;
    ActorMissingHealthTest(class ActorMissingHealthTest const &) = delete;
    ActorMissingHealthTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorMissingHealthTest();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@ActorMissingHealthTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@ActorMissingHealthTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
/**
 * @file  IsOnHotBlockTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class IsOnHotBlockTest : public FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISONHOTBLOCKTEST
public:
    class IsOnHotBlockTest& operator=(class IsOnHotBlockTest const &) = delete;
    IsOnHotBlockTest(class IsOnHotBlockTest const &) = delete;
    IsOnHotBlockTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IsOnHotBlockTest();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@IsOnHotBlockTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@IsOnHotBlockTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
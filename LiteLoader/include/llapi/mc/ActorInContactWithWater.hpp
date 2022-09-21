/**
 * @file  MC/ActorInContactWithWater.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInContactWithWater.
 *
 */
class ActorInContactWithWater : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINCONTACTWITHWATER
public:
    class ActorInContactWithWater& operator=(class ActorInContactWithWater const &) = delete;
    ActorInContactWithWater(class ActorInContactWithWater const &) = delete;
    ActorInContactWithWater() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorInContactWithWater();
    /**
     * @hash   1630488813
     * @vftbl  2
     * @symbol ?evaluate@ActorInContactWithWater@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -788254043
     * @vftbl  4
     * @symbol ?getName@ActorInContactWithWater@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
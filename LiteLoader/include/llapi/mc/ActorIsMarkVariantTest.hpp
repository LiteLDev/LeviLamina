/**
 * @file  ActorIsMarkVariantTest.hpp
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
 * @brief MC class ActorIsMarkVariantTest.
 *
 */
class ActorIsMarkVariantTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISMARKVARIANTTEST
public:
    class ActorIsMarkVariantTest& operator=(class ActorIsMarkVariantTest const &) = delete;
    ActorIsMarkVariantTest(class ActorIsMarkVariantTest const &) = delete;
    ActorIsMarkVariantTest() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorIsMarkVariantTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorIsMarkVariantTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORISMARKVARIANTTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorIsMarkVariantTest();
#endif

};

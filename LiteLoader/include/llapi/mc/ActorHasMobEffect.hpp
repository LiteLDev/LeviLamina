/**
 * @file  ActorHasMobEffect.hpp
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
 * @brief MC class ActorHasMobEffect.
 *
 */
class ActorHasMobEffect : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASMOBEFFECT
public:
    class ActorHasMobEffect& operator=(class ActorHasMobEffect const &) = delete;
    ActorHasMobEffect(class ActorHasMobEffect const &) = delete;
    ActorHasMobEffect() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorHasMobEffect();
    /**
     * @hash   975512334
     * @vftbl  1
     * @symbol  ?setup\@ActorHasMobEffect\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @hash   -839261890
     * @vftbl  2
     * @symbol  ?evaluate\@ActorHasMobEffect\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   1697505956
     * @vftbl  4
     * @symbol  ?getName\@ActorHasMobEffect\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @hash   1611245187
     * @vftbl  6
     * @symbol  ?_serializeValue\@ActorHasMobEffect\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;

};
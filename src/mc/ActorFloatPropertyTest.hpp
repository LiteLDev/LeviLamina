/**
 * @file  ActorFloatPropertyTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorFloatPropertyTest.
 *
 */
class ActorFloatPropertyTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFLOATPROPERTYTEST
public:
    class ActorFloatPropertyTest& operator=(class ActorFloatPropertyTest const &) = delete;
    ActorFloatPropertyTest(class ActorFloatPropertyTest const &) = delete;
    ActorFloatPropertyTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorFloatPropertyTest();
    /**
     * @vftbl  1
     * @symbol  ?setup\@ActorFloatPropertyTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@ActorFloatPropertyTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?getName\@ActorFloatPropertyTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @vftbl  5
     * @symbol  ?_serializeDomain\@ActorFloatPropertyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl  6
     * @symbol  ?_serializeValue\@ActorFloatPropertyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;

};
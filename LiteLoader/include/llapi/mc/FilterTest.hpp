/**
 * @file  FilterTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTest.
 *
 */
class FilterTest {

#define AFTER_EXTRA
// Add Member There
public:
struct Definition {
    Definition() = delete;
    Definition(Definition const&) = delete;
    Definition(Definition const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTEST
public:
    class FilterTest& operator=(class FilterTest const &) = delete;
    FilterTest(class FilterTest const &) = delete;
    FilterTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FilterTest();
    /**
     * @vftbl  1
     * @symbol  ?setup\@FilterTest\@\@UEAA_NAEBUDefinition\@1\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@TargetDistanceTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const = 0;
    /**
     * @vftbl  3
     * @symbol  ?finalizeParsedValue\@FilterTest\@\@UEAAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    virtual void finalizeParsedValue(class IWorldRegistriesProvider &);
    /**
     * @vftbl  4
     * @symbol  ?getName\@TargetDistanceTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const = 0;
    /**
     * @vftbl  5
     * @symbol  ?_serializeDomain\@FilterTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl  6
     * @symbol  ?_serializeValue\@FilterTestDimensionWeather\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const = 0;
    /**
     * @symbol  ?serialize\@FilterTest\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value serialize() const;

//protected:
    /**
     * @symbol  ?_testValuesWithOperator\@FilterTest\@\@IEBA_NAEBVHashedString\@\@0\@Z
     */
    MCAPI bool _testValuesWithOperator(class HashedString const &, class HashedString const &) const;
    /**
     * @symbol  ?_testValuesWithOperator\@FilterTest\@\@IEBA_NHH\@Z
     */
    MCAPI bool _testValuesWithOperator(int, int) const;
    /**
     * @symbol  ?_testValuesWithOperator\@FilterTest\@\@IEBA_NMM\@Z
     */
    MCAPI bool _testValuesWithOperator(float, float) const;
    /**
     * @symbol  ?_testValuesWithOperator\@FilterTest\@\@IEBA_N_N0\@Z
     */
    MCAPI bool _testValuesWithOperator(bool, bool) const;

protected:

};
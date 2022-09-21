/**
 * @file  MC/FilterTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~FilterTest();
    /**
     * @hash   -427456672
     * @vftbl  1
     * @symbol ?setup@FilterTest@@UEAA_NAEBUDefinition@1@AEBUFilterInputs@@@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @hash   460340007
     * @vftbl  2
     * @symbol ?evaluate@IsWaterLoggedTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const = 0;
    /**
     * @hash   854997568
     * @vftbl  3
     * @symbol ?finalizeParsedValue@FilterTest@@UEAAXAEAVIWorldRegistriesProvider@@@Z
     */
    virtual void finalizeParsedValue(class IWorldRegistriesProvider &);
    /**
     * @hash   924608449
     * @vftbl  4
     * @symbol ?getName@IsWaterLoggedTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const = 0;
    /**
     * @hash   1425803066
     * @vftbl  5
     * @symbol ?_serializeDomain@FilterTest@@MEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @hash   1244360112
     * @vftbl  6
     * @symbol ?_serializeValue@FilterTestDimensionWeather@@MEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value _serializeValue() const = 0;
    /**
     * @hash   692767934
     * @symbol ?serialize@FilterTest@@QEBA?AVValue@Json@@XZ
     */
    MCAPI class Json::Value serialize() const;

//protected:
    /**
     * @hash   652045839
     * @symbol ?_testValuesWithOperator@FilterTest@@IEBA_NHH@Z
     */
    MCAPI bool _testValuesWithOperator(int, int) const;
    /**
     * @hash   1579703519
     * @symbol ?_testValuesWithOperator@FilterTest@@IEBA_NMM@Z
     */
    MCAPI bool _testValuesWithOperator(float, float) const;
    /**
     * @hash   -1236997313
     * @symbol ?_testValuesWithOperator@FilterTest@@IEBA_N_N0@Z
     */
    MCAPI bool _testValuesWithOperator(bool, bool) const;

protected:

};
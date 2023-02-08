/**
 * @file  ActorHasEquipmentTest.hpp
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
 * @brief MC class ActorHasEquipmentTest.
 *
 */
class ActorHasEquipmentTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASEQUIPMENTTEST
public:
    class ActorHasEquipmentTest& operator=(class ActorHasEquipmentTest const &) = delete;
    ActorHasEquipmentTest(class ActorHasEquipmentTest const &) = delete;
    ActorHasEquipmentTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorHasEquipmentTest();
    /**
     * @hash   1789677935
     * @vftbl  1
     * @symbol  ?setup\@ActorHasEquipmentTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @hash   -1388667315
     * @vftbl  2
     * @symbol  ?evaluate\@ActorHasEquipmentTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -172385147
     * @vftbl  4
     * @symbol  ?getName\@ActorHasEquipmentTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @hash   -1756439447
     * @vftbl  5
     * @symbol  ?_serializeDomain\@ActorHasEquipmentTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @hash   54903924
     * @vftbl  6
     * @symbol  ?_serializeValue\@ActorHasEquipmentTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;

};
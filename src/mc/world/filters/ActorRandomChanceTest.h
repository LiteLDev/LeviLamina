#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorRandomChanceTest : public ::SimpleIntFilterTest {

public:
    // prevent constructor by default
    ActorRandomChanceTest& operator=(ActorRandomChanceTest const&) = delete;
    ActorRandomChanceTest(ActorRandomChanceTest const&)            = delete;
    ActorRandomChanceTest()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setup\@ActorHasAnySlotEmptyTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorRandomChanceTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const;
    /**
     * @vftbl 3
     * @symbol ?finalizeParsedValue\@FilterTest\@\@UEAAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorRandomChanceTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual std::string_view getName() const;
    /**
     * @vftbl 5
     * @symbol ?_serializeDomain\@ActorHasEquipmentTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl 6
     * @symbol ?_serializeValue\@ActorHasAllSlotsEmptyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;
    // NOLINTEND
};

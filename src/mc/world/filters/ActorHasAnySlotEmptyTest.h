#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasAnySlotEmptyTest : public ::FilterTest {

public:
    // prevent constructor by default
    ActorHasAnySlotEmptyTest& operator=(ActorHasAnySlotEmptyTest const&) = delete;
    ActorHasAnySlotEmptyTest(ActorHasAnySlotEmptyTest const&)            = delete;
    ActorHasAnySlotEmptyTest()                                           = delete;

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
     * @symbol ?evaluate\@ActorHasAnySlotEmptyTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const;
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorHasAnySlotEmptyTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual std::string_view getName() const;
    /**
     * @vftbl 6
     * @symbol ?_serializeValue\@ActorHasAnySlotEmptyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORHASANYSLOTEMPTYTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorHasAnySlotEmptyTest();
#endif
    // NOLINTEND
};

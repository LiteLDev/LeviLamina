#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasPropertyTest : public ::FilterTest {

public:
    // prevent constructor by default
    ActorHasPropertyTest& operator=(ActorHasPropertyTest const&) = delete;
    ActorHasPropertyTest(ActorHasPropertyTest const&)            = delete;
    ActorHasPropertyTest()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setup\@ActorHasPropertyTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorHasPropertyTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const;
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorHasPropertyTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual std::string_view getName() const;
    /**
     * @vftbl 6
     * @symbol ?_serializeValue\@ActorHasPropertyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORHASPROPERTYTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorHasPropertyTest();
#endif
    // NOLINTEND
};

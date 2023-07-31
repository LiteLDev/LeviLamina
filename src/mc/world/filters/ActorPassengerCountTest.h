#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorPassengerCountTest : public ::FilterTest {

public:
    // prevent constructor by default
    ActorPassengerCountTest& operator=(ActorPassengerCountTest const&) = delete;
    ActorPassengerCountTest(ActorPassengerCountTest const&)            = delete;
    ActorPassengerCountTest()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorPassengerCountTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const;
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorPassengerCountTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual std::string_view getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORPASSENGERCOUNTTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorPassengerCountTest();
#endif
    // NOLINTEND
};

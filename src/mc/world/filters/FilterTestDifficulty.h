#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestDifficulty : public ::FilterTest {

public:
    // prevent constructor by default
    FilterTestDifficulty& operator=(FilterTestDifficulty const&) = delete;
    FilterTestDifficulty(FilterTestDifficulty const&)            = delete;
    FilterTestDifficulty()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?evaluate\@FilterTestDifficulty\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const;
    /**
     * @vftbl 4
     * @symbol ?getName\@FilterTestDifficulty\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual std::string_view getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILTERTESTDIFFICULTY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FilterTestDifficulty();
#endif
    // NOLINTEND
};

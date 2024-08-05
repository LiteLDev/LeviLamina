#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestDifficulty : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    FilterTestDifficulty& operator=(FilterTestDifficulty const&);
    FilterTestDifficulty(FilterTestDifficulty const&);
    FilterTestDifficulty();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FilterTestDifficulty();

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND
};

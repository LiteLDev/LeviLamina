#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestLightLevel : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    FilterTestLightLevel& operator=(FilterTestLightLevel const&);
    FilterTestLightLevel(FilterTestLightLevel const&);
    FilterTestLightLevel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FilterTestLightLevel() = default;

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND
};

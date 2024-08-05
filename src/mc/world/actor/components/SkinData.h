#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct SkinData {
public:
    // prevent constructor by default
    SkinData& operator=(SkinData const&);
    SkinData(SkinData const&);
    SkinData();

public:
    // NOLINTBEGIN
    MCAPI explicit SkinData(class Actor const& actor);

    MCAPI explicit SkinData(class Json::Value const& skinDataJson);

    MCAPI void applyToActor(class Actor& actor) const;

    MCAPI bool softMatch(struct SkinData const& skinRef, bool& perfectMatch) const;

    // NOLINTEND
};

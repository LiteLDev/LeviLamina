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
    // symbol: ??0SkinData@@QEAA@AEBVActor@@@Z
    MCAPI explicit SkinData(class Actor const& actor);

    // symbol: ??0SkinData@@QEAA@AEBVValue@Json@@@Z
    MCAPI explicit SkinData(class Json::Value const& skinDataJson);

    // symbol: ?applyToActor@SkinData@@QEBAXAEAVActor@@@Z
    MCAPI void applyToActor(class Actor& actor) const;

    // symbol: ?softMatch@SkinData@@QEBA_NAEBU1@AEA_N@Z
    MCAPI bool softMatch(struct SkinData const& skinRef, bool& perfectMatch) const;

    // NOLINTEND
};

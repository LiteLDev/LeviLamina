#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

struct IHitResultContainer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IHitResultContainer() = default;

    virtual void addHitResult(::HitResult, ::HitResult) = 0;

    virtual void clear() = 0;

    virtual ::gsl::span<::std::pair<::HitResult, ::HitResult> const> getHits() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

struct IHitResultContainer {
public:
    // prevent constructor by default
    IHitResultContainer& operator=(IHitResultContainer const&);
    IHitResultContainer(IHitResultContainer const&);
    IHitResultContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IHitResultContainer() = default;

    // vIndex: 1
    virtual void addHitResult(::HitResult, ::HitResult) = 0;

    // vIndex: 2
    virtual void clear() = 0;

    // vIndex: 3
    virtual ::gsl::span<::std::pair<::HitResult, ::HitResult> const> getHits() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IHitResultContainer.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

namespace HitResultContainer {

struct LocalPlayerContainer : public ::IHitResultContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk68999c;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerContainer& operator=(LocalPlayerContainer const&);
    LocalPlayerContainer(LocalPlayerContainer const&);
    LocalPlayerContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void addHitResult(::HitResult, ::HitResult) /*override*/;

    // vIndex: 2
    virtual void clear() /*override*/;

    // vIndex: 3
    virtual ::gsl::span<::std::pair<::HitResult, ::HitResult> const> getHits() const /*override*/;

    // vIndex: 0
    virtual ~LocalPlayerContainer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace HitResultContainer

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
    virtual void addHitResult(::HitResult solidHit, ::HitResult liquidHit) /*override*/;

    virtual void clear() /*override*/;

    virtual ::gsl::span<::std::pair<::HitResult, ::HitResult> const> getHits() const /*override*/;

    virtual ~LocalPlayerContainer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $addHitResult(::HitResult solidHit, ::HitResult liquidHit);

    MCAPI void $clear();

    MCAPI ::gsl::span<::std::pair<::HitResult, ::HitResult> const> $getHits() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace HitResultContainer

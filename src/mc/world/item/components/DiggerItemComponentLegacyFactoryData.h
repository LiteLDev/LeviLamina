#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3f3f82;
    ::ll::UntypedStorage<8, 24> mUnkcfe5b5;
    ::ll::UntypedStorage<8, 56> mUnk19543e;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerItemComponentLegacyFactoryData& operator=(DiggerItemComponentLegacyFactoryData const&);
    DiggerItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DiggerItemComponentLegacyFactoryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiggerItemComponentLegacyFactoryData(::DiggerItemComponentLegacyFactoryData const&);

    MCAPI ::DiggerItemComponentLegacyFactoryData& operator=(::DiggerItemComponentLegacyFactoryData&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DiggerItemComponentLegacyFactoryData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

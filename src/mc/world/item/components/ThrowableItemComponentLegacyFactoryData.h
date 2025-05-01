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

struct ThrowableItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkaf42dc;
    ::ll::UntypedStorage<4, 4> mUnkd1ee69;
    ::ll::UntypedStorage<4, 4> mUnkca5ed4;
    ::ll::UntypedStorage<4, 4> mUnk33ab61;
    ::ll::UntypedStorage<4, 4> mUnkd654d1;
    ::ll::UntypedStorage<1, 1> mUnk9d25cc;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrowableItemComponentLegacyFactoryData& operator=(ThrowableItemComponentLegacyFactoryData const&);
    ThrowableItemComponentLegacyFactoryData(ThrowableItemComponentLegacyFactoryData const&);
    ThrowableItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThrowableItemComponentLegacyFactoryData() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

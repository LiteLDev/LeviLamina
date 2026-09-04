#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/sound/SoundEventIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace Bedrock::Safety { class RedactableString; }
namespace SharedTypes::Beta { struct RecordItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItemComponent : public ::NetworkedItemComponent<::RecordItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SoundEventIdentifier> mSoundEvent;
    ::ll::TypedStorage<4, 4, float>                   mDuration;
    ::ll::TypedStorage<4, 4, int>                     mComparatorSignal;
    // NOLINTEND

public:
    // prevent constructor by default
    RecordItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RecordItemComponent(::SharedTypes::Beta::RecordItemComponent component);

    MCAPI void appendFormattedHovertext(::Bedrock::Safety::RedactableString& hovertext) const;

    MCAPI ::std::string getRecordDescription() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Beta::RecordItemComponent component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

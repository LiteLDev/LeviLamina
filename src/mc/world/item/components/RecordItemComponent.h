#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace Bedrock::Safety { class RedactableString; }
namespace SharedTypes::v1_20_50 { struct RecordItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItemComponent : public ::NetworkedItemComponent<::RecordItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 4, float>                                  mDuration;
    ::ll::TypedStorage<4, 4, int>                                    mComparatorSignal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecordItemComponent();

    MCAPI explicit RecordItemComponent(::SharedTypes::v1_20_50::RecordItemComponent component);

    MCAPI RecordItemComponent(::SharedTypes::Legacy::LevelSoundEvent soundEvent, float duration, int comparatorSignal);

    MCAPI void appendFormattedHovertext(::Bedrock::Safety::RedactableString& hovertext) const;

    MCFOLD int getComparatorSignal() const;

    MCFOLD float getDuration() const;

    MCAPI ::std::string getRecordDescription() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent getSound() const;
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

    MCAPI static ::std::string getRecordNameNoPrefix(::SharedTypes::Legacy::LevelSoundEvent sound);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_20_50::RecordItemComponent component);

    MCAPI void* $ctor(::SharedTypes::Legacy::LevelSoundEvent soundEvent, float duration, int comparatorSignal);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

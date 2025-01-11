#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace Bedrock::Safety { class RedactableString; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItemComponent : public ::NetworkedItemComponent<::RecordItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke31a3c;
    ::ll::UntypedStorage<4, 4> mUnk1484e2;
    ::ll::UntypedStorage<4, 4> mUnk70d250;
    // NOLINTEND

public:
    // prevent constructor by default
    RecordItemComponent& operator=(RecordItemComponent const&);
    RecordItemComponent(RecordItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RecordItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecordItemComponent();

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::Legacy::LevelSoundEvent soundEvent, float duration, int comparatorSignal);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

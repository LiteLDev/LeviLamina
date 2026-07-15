#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"
#include "mc/deps/shared_types/v1_26_30/item/UseModifiersItemComponent.h"

namespace SharedTypes::Beta {

struct UseModifiersItemComponent : public ::SharedTypes::v1_26_30::UseModifiersItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>> mStartSound;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UseModifiersItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct DurabilityThreshold;
namespace SharedTypes::v1_21_10 { struct DurabilitySensorItemComponent; }
// clang-format on

class DurabilitySensorItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd6755f;
    // NOLINTEND

public:
    // prevent constructor by default
    DurabilitySensorItemComponent& operator=(DurabilitySensorItemComponent const&);
    DurabilitySensorItemComponent(DurabilitySensorItemComponent const&);
    DurabilitySensorItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DurabilitySensorItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DurabilitySensorItemComponent(::SharedTypes::v1_21_10::DurabilitySensorItemComponent data);

    MCAPI explicit DurabilitySensorItemComponent(::std::vector<::DurabilityThreshold> const& durabilityThresholds);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_10::DurabilitySensorItemComponent data);

    MCAPI void* $ctor(::std::vector<::DurabilityThreshold> const& durabilityThresholds);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

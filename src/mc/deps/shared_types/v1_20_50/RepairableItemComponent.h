#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct RepairableItemComponent {
public:
    // RepairableItemComponent inner types declare
    // clang-format off
    struct RepairItemEntry;
    // clang-format on

    // RepairableItemComponent inner types define
    struct RepairItemEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk295409;
        ::ll::UntypedStorage<8, 48> mUnka0916c;
        // NOLINTEND

    public:
        // prevent constructor by default
        RepairItemEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RepairItemEntry(::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry const&);

        MCAPI ::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry&
        operator=(::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry const&);

        MCAPI ~RepairItemEntry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk51e8dc;
    // NOLINTEND

public:
    // prevent constructor by default
    RepairableItemComponent& operator=(RepairableItemComponent const&);
    RepairableItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RepairableItemComponent(::SharedTypes::v1_20_50::RepairableItemComponent const&);

    MCAPI ~RepairableItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::RepairableItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50

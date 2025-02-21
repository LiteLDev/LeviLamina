#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
class ItemStackBase;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct DiggerItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DiggerItemComponent : public ::NetworkedItemComponent<::DiggerItemComponent> {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 184> mUnka3c0df;
        ::ll::UntypedStorage<4, 4>   mUnk19ad83;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockInfo& operator=(BlockInfo const&);
        BlockInfo(BlockInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI BlockInfo();

        MCAPI ~BlockInfo();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                             mUseEfficiency;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiggerItemComponent::BlockInfo>> mDestroySpeeds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DiggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DiggerItemComponent(::SharedTypes::v1_20_50::DiggerItemComponent component);

    MCAPI float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::DiggerItemComponent component);
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

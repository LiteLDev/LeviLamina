#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class CompoundTag;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemComponent : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ComponentItem*> mOwner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemComponent() /*override*/ = default;

    virtual bool checkComponentDataForContentErrors() const;

    virtual void writeSettings();

    virtual bool isNetworkComponent() const;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    virtual void _initializeComponent(::ComponentItem& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $checkComponentDataForContentErrors() const;

    MCFOLD void $writeSettings();

    MCFOLD bool $isNetworkComponent() const;

    MCFOLD ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCFOLD bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCFOLD void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCFOLD void $_initializeComponent(::ComponentItem& owner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemRendererData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            itemIdAux;
    ::ll::TypedStorage<1, 1, bool>           isEmptyStack;
    ::ll::TypedStorage<4, 4, int>            chargedItem;
    ::ll::TypedStorage<4, 4, uint>           itemCustomColor;
    ::ll::TypedStorage<4, 4, int>            itemPickupTime;
    ::ll::TypedStorage<1, 1, bool>           showItemPickup;
    ::ll::TypedStorage<8, 32, ::std::string> armorTrimMaterial;
    ::ll::TypedStorage<8, 32, ::std::string> bannerPatterns;
    ::ll::TypedStorage<8, 32, ::std::string> bannerColors;
    ::ll::TypedStorage<4, 4, int>            bannerType;
    ::ll::TypedStorage<8, 32, ::std::string> decoratedPotSherds;
    ::ll::TypedStorage<4, 4, int>            serializedActorPose;
    ::ll::TypedStorage<1, 1, bool>           shieldIsActive;
    ::ll::TypedStorage<4, 4, int>            shieldBaseColor;
    ::ll::TypedStorage<4, 4, int>            shieldBaseColorHovered;
    ::ll::TypedStorage<4, 4, int>            itemLoadstoneTrackingHandle;
    ::ll::TypedStorage<1, 1, bool>           showBundleOpenFront;
    ::ll::TypedStorage<1, 1, bool>           showBundleOpenBack;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRendererData& operator=(ItemRendererData const&);
    ItemRendererData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRendererData(::ItemRendererData const&);

    MCAPI bool operator==(::ItemRendererData const& rhs) const;

    MCAPI ~ItemRendererData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemRendererData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

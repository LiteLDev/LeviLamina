#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class ItemStack;
class Player;
// clang-format on

struct InteractionParticle {
public:
    // InteractionParticle inner types define
    enum class CopperEventType : uchar {
        None = 0,
        WaxOn = 1,
        WaxOff = 2,
        Scrape = 3,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke48609;
    ::ll::UntypedStorage<4, 4> mUnk56cbc5;
    ::ll::UntypedStorage<1, 1> mUnk626a44;
    ::ll::UntypedStorage<1, 1> mUnk7883f6;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractionParticle& operator=(InteractionParticle const&);
    InteractionParticle(InteractionParticle const&);
    InteractionParticle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setCopperEventType(::std::string const& name);

    MCNAPI void setParticleType(::std::string const& name);

    MCNAPI void spawnParticle(::BlockSource& region, ::Actor& owner, ::Player& player, ::ItemStack const& usedItemCopy) const;
    // NOLINTEND

};

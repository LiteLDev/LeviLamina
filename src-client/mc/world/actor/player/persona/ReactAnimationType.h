#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class ReactAnimationType : uint {
    Idle             = 0,
    IdleTorso        = 1,
    IdleHead         = 2,
    IdleBottom       = 3,
    IdleArm          = 4,
    IdleBack         = 5,
    ReactHead        = 6,
    ReactTorso       = 7,
    ReactBottom      = 8,
    ReactArm         = 9,
    ReactBack        = 10,
    ReactConfirm     = 11,
    ReactBored       = 12,
    ReactBoredTorso  = 13,
    ReactBoredHead   = 14,
    ReactBoredBottom = 15,
    ReactBoredArm    = 16,
    ReactBoredBack   = 17,
    ReactOffer       = 18,
    ReactOfferTorso  = 19,
    ReactOfferHead   = 20,
    ReactOfferBottom = 21,
    ReactOfferArm    = 22,
    ReactOfferBack   = 23,
    Zoom             = 24,
};

}

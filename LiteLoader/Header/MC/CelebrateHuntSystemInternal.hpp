// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CelebrateHuntSystemInternalAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace CelebrateHuntSystemInternal {
#include "Extra/CelebrateHuntSystemInternalAPI.hpp"

MCAPI void _tickCelebrateHuntComponent(
    class ViewedEntityContextT<
        class EntityContext, class FlagComponent<struct ActorTickedFlag>,
        class FlagComponent<struct ActorFlag>, class CelebrateHuntComponent> &);

} // namespace CelebrateHuntSystemInternal
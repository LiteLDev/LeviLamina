/**
 * @file  RemovePassengersSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RemovePassengersSystemImpl.
 *
 */
class RemovePassengersSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEPASSENGERSSYSTEMIMPL
public:
    class RemovePassengersSystemImpl& operator=(class RemovePassengersSystemImpl const &) = delete;
    RemovePassengersSystemImpl(class RemovePassengersSystemImpl const &) = delete;
    RemovePassengersSystemImpl() = delete;
#endif

public:
    /**
     * @symbol  ?_removePassengersSystem\@RemovePassengersSystemImpl\@\@SAXAEAVStrictEntityContext\@\@AEAURemovePassengersComponent\@\@AEAUVehicleComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UVehicleComponent\@\@V?$FlagComponent\@URecalculateControlledByLocalInstanceRequestFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _removePassengersSystem(class StrictEntityContext &, struct RemovePassengersComponent &, struct VehicleComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);

};
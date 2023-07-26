/**
 * @file  ControlledByLocalInstanceSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ControlledByLocalInstanceSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYLOCALINSTANCESYSTEMIMPL
public:
    class ControlledByLocalInstanceSystemImpl& operator=(class ControlledByLocalInstanceSystemImpl const &) = delete;
    ControlledByLocalInstanceSystemImpl(class ControlledByLocalInstanceSystemImpl const &) = delete;
    ControlledByLocalInstanceSystemImpl() = delete;
#endif

public:
    /**
     * @symbol  ?_wasControlledByLocalInstanceSystem\@ControlledByLocalInstanceSystemImpl\@\@SAXAEBVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _wasControlledByLocalInstanceSystem(class StrictEntityContext const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasControlledByLocalInstanceFlag>>);

};
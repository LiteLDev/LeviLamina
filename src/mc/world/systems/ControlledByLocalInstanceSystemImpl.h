#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class ControlledByLocalInstanceSystemImpl {

public:
    // prevent constructor by default
    ControlledByLocalInstanceSystemImpl& operator=(ControlledByLocalInstanceSystemImpl const&) = delete;
    ControlledByLocalInstanceSystemImpl(ControlledByLocalInstanceSystemImpl const&)            = delete;
    ControlledByLocalInstanceSystemImpl()                                                      = delete;

public:
    /**
     * @symbol
     * ?_wasControlledByLocalInstanceSystem\@ControlledByLocalInstanceSystemImpl\@\@SAXAEBVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    _wasControlledByLocalInstanceSystem(class StrictEntityContext const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasControlledByLocalInstanceFlag>>); // NOLINT
    /**
     * @symbol
     * ?wasControlledByLocalInstanceSystem\@ControlledByLocalInstanceSystemImpl\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@URemovePassengersComponent\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void wasControlledByLocalInstanceSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct RemovePassengersComponent, class FlagComponent<struct ControlledByLocalInstanceFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasControlledByLocalInstanceFlag>>); // NOLINT
};

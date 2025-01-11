#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct EndPortalBlockFlag;
struct InsideGenericBlockComponent;
struct SweetBerryBushBlockFlag;
// clang-format on

namespace InsideBlockComponentUtility {
// functions
// NOLINTBEGIN
MCFOLD void entityInsideLegacyRedirect(
    ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag> const& insideBlockComponent,
    ::ActorOwnerComponent&                                                  actorOwnerComponent
);

MCAPI void entityInsideLegacyRedirect(::InsideGenericBlockComponent const&, ::ActorOwnerComponent&);

MCAPI void
entityInsideLegacyRedirect(::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag> const&, ::ActorOwnerComponent&);
// NOLINTEND

} // namespace InsideBlockComponentUtility

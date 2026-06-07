#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/vanilla/remapping/ActionEnum.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::Services { struct PersistenceGroupItemMetadata; }
namespace Editor::Services { struct PersistenceGroupMetadata; }
namespace cereal { struct ReflectionCtx; }
class KeyboardRemappingLayout;
// clang-format on

namespace Editor::Services {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::optional<int> _getVanillaActionKey(::KeyboardRemappingLayout& layout, ::Remapping::ActionEnum action);
#endif

MCNAPI void bindDataTransferTypes(::cereal::ReflectionCtx& ctx);

MCNAPI bool operator==(
    ::Editor::Services::PersistenceGroupItemMetadata const&,
    ::Editor::Services::PersistenceGroupItemMetadata const&
);

MCNAPI bool
operator==(::Editor::Services::PersistenceGroupMetadata const&, ::Editor::Services::PersistenceGroupMetadata const&);

MCNAPI ::std::optional<::Vec3> parseVec3(::std::string const& s);
// NOLINTEND

} // namespace Editor::Services

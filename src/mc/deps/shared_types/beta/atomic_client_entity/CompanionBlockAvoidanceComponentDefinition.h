#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta::AtomicClientEntity {

struct CompanionBlockAvoidanceComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mBackupAnchorOffsets;
    ::ll::TypedStorage<1, 1, bool>                   mRequireHiddenBeforeFallback;
    ::ll::TypedStorage<2, 2, ushort>                 mAnchorSwitchCooldown;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ANCHOR_SWITCH_COOLDOWN();

    MCNAPI static ::std::string_view const& BACKUP_ANCHOR_OFFSETS();

    MCNAPI static ::std::string_view const& NAME();

    MCNAPI static ::std::string_view const& REQUIRE_HIDDEN_BEFORE_FALLBACK();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity

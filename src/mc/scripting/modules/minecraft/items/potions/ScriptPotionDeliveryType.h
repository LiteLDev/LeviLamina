#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotionDeliveryType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2940f5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionDeliveryType& operator=(ScriptPotionDeliveryType const&);
    ScriptPotionDeliveryType(ScriptPotionDeliveryType const&);
    ScriptPotionDeliveryType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getPotionDeliveryTypeId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::std::optional<::Potion::PotionType> tryResolvePotionType(::std::string const& potionTypeId);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

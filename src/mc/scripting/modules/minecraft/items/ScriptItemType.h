#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class Item;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemType {
public:
    // ScriptItemType inner types define
    using Key = ::std::string;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WeakPtr<::Item const>> mItem;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScriptItemType();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit ScriptItemType(::WeakPtr<::Item const> item);
#endif

    MCFOLD ::Item const& getItem() const;

    MCFOLD ::WeakPtr<::Item const> const& getItemWeakPtr() const;

    MCAPI ::std::string getName() const;

#ifdef LL_PLAT_S
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptItemType const& other) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::WeakPtr<::Item const> item);
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

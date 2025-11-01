#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolumeItem;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolumeItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkaf6d04;
    ::ll::UntypedStorage<4, 8>  mUnka0e799;
    ::ll::UntypedStorage<4, 8>  mUnk686d88;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCompoundBlockVolumeItem(ScriptCompoundBlockVolumeItem const&);
    ScriptCompoundBlockVolumeItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem&
    operator=(::ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem const& rhs);

    MCNAPI ::CompoundBlockVolumeItem toCompoundBlockVolumeItem() const;

    MCNAPI ~ScriptCompoundBlockVolumeItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

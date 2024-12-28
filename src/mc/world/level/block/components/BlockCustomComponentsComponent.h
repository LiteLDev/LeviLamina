#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
// clang-format on

class BlockCustomComponentsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfa138d;
    ::ll::UntypedStorage<8, 24> mUnk9103d6;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCustomComponentsComponent& operator=(BlockCustomComponentsComponent const&);
    BlockCustomComponentsComponent(BlockCustomComponentsComponent const&);
    BlockCustomComponentsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::gsl::not_null<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*>>
    tryGetComponentsToExecute() const;
    // NOLINTEND
};

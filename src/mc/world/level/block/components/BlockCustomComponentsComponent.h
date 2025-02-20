#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
// clang-format on

class BlockCustomComponentsComponent {
public:
    // BlockCustomComponentsComponent inner types declare
    // clang-format off
    struct ExecutableComponent;
    // clang-format on

    // BlockCustomComponentsComponent inner types define
    struct ExecutableComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf66582;
        ::ll::UntypedStorage<8, 8> mUnk29a4ca;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExecutableComponent& operator=(ExecutableComponent const&);
        ExecutableComponent(ExecutableComponent const&);
        ExecutableComponent();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk9c24ff;
    ::ll::UntypedStorage<1, 1>  mUnk3e06e2;
    ::ll::UntypedStorage<1, 1>  mUnkffbf10;
    ::ll::UntypedStorage<8, 16> mUnkfa138d;
    ::ll::UntypedStorage<8, 24> mUnkaf5f13;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCustomComponentsComponent& operator=(BlockCustomComponentsComponent const&);
    BlockCustomComponentsComponent(BlockCustomComponentsComponent const&);
    BlockCustomComponentsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::BlockCustomComponentsComponent::ExecutableComponent> _gatherComponentsToExecute() const;

    MCAPI ::std::vector<::gsl::not_null<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*>>
    tryGetComponentsToExecute(::BlockLegacy const& baseBlock) const;
    // NOLINTEND
};

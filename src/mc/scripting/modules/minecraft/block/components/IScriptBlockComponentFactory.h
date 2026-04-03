#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptBlockComponentFactory() = default;

    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>
    createComponent(::BlockSource&, ::BlockPos const&, ::Scripting::WeakLifetimeScope const&) = 0;

    virtual ::std::vector<::Scripting::ClassBinding> bind() const = 0;

    virtual bool canAddOn(::Block const& block) const;

    virtual ::std::optional<::Scripting::Release> overrideEnumVersion() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canAddOn(::Block const& block) const;


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

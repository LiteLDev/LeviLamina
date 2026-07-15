#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#include "mc/scripting/modules/minecraft/events/metadata/IScriptAfterEventSignalBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAfterEventBindingInfo; }
namespace Scripting { class Release; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAfterEventSignalBuilderBase : public ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                   mPropertyNameToBind;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mSignalTypeNameToBind;
    ::ll::TypedStorage<8, 8, ::Scripting::ClassBinding (*)()>                  mMaybeOverrideBindFunction;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Scripting::ClassBinding (*)()>> mRawBindFunction;
    ::ll::TypedStorage<8, 32, ::std::optional<::Scripting::TaggedBinding>>     mPropertyReleases;
    ::ll::TypedStorage<8, 32, ::std::optional<::Scripting::TaggedBinding>>     mSignalReleases;
    ::ll::TypedStorage<8, 8, uint64>                                           mHashCode;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAfterEventSignalBuilderBase& operator=(ScriptAfterEventSignalBuilderBase const&);
    ScriptAfterEventSignalBuilderBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::Scripting::Release> getEventDataReleases() const /*override*/;

    virtual ::std::vector<::Scripting::Release> getSignalReleases() const /*override*/;

    virtual ::std::vector<::Scripting::Release> getPropertyReleases() const /*override*/;

    virtual ::std::string getEventDataName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptAfterEventSignalBuilderBase(::ScriptModuleMinecraft::ScriptAfterEventSignalBuilderBase const&);

    MCAPI ScriptAfterEventSignalBuilderBase(
        ::ScriptModuleMinecraft::ScriptAfterEventBindingInfo&& bindingData,
        ::Scripting::ClassBinding (*maybeOverrideBindFunction)(),
        ::gsl::not_null<::Scripting::ClassBinding (*)()> rawBindFunction
    );

    MCAPI uint64 calculateHash(uint64 typeHash) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptAfterEventSignalBuilderBase const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptAfterEventBindingInfo&& bindingData,
        ::Scripting::ClassBinding (*maybeOverrideBindFunction)(),
        ::gsl::not_null<::Scripting::ClassBinding (*)()> rawBindFunction
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::Scripting::Release> $getEventDataReleases() const;

    MCAPI ::std::vector<::Scripting::Release> $getSignalReleases() const;

    MCAPI ::std::vector<::Scripting::Release> $getPropertyReleases() const;

    MCAPI ::std::string $getEventDataName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

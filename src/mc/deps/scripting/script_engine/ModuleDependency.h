#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

struct ModuleDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd06eea;
    ::ll::UntypedStorage<8, 16> mUnkac08cf;
    ::ll::UntypedStorage<8, 24> mUnke8e189;
    ::ll::UntypedStorage<1, 1>  mUnkd298ce;
    ::ll::UntypedStorage<1, 1>  mUnk13820e;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleDependency& operator=(ModuleDependency const&);
    ModuleDependency();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModuleDependency(::Scripting::ModuleDependency const&);

    MCNAPI explicit ModuleDependency(::Scripting::ModuleDescriptor descriptor);

    MCNAPI ModuleDependency(::std::string _name, ::mce::UUID _uuid, ::std::vector<::Scripting::Version> _versions);

    MCNAPI ModuleDependency(
        ::std::string                       _name,
        ::mce::UUID                         _uuid,
        ::std::vector<::Scripting::Version> _versions,
        bool                                _isPeer
    );

    MCNAPI ::std::optional<::Scripting::ModuleDescriptor> getDescriptor() const;

    MCNAPI bool operator==(::Scripting::ModuleDependency const& other) const;

    MCNAPI bool satisfiedBy(::Scripting::ModuleDescriptor const& d) const;

    MCNAPI ::std::string toString() const;

    MCNAPI ~ModuleDependency();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ModuleDependency const&);

    MCNAPI void* $ctor(::Scripting::ModuleDescriptor descriptor);

    MCNAPI void* $ctor(::std::string _name, ::mce::UUID _uuid, ::std::vector<::Scripting::Version> _versions);

    MCNAPI void*
    $ctor(::std::string _name, ::mce::UUID _uuid, ::std::vector<::Scripting::Version> _versions, bool _isPeer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

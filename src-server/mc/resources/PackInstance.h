#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackReport.h"
#include "mc/resources/PackStats.h"

// auto generated forward declare list
// clang-format off
class PackSettings;
class ResourcePack;
namespace Core { class Path; }
// clang-format on

class PackInstance {
public:
    // PackInstance inner types define
    using Callback = ::std::function<void(::Core::Path const&)>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 248, ::PackReport> mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*> mPackSettings;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ResourcePack>>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats> mStats;
    ::ll::TypedStorage<4, 4, int> mSubpackIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    PackInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInstance(::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack, int subpackIndex, bool isDependent, ::PackSettings* packSettings);

    MCAPI PackInstance(::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack, ::std::string const& subpackName, bool isDependent, ::PackSettings* packSettings);

    MCAPI bool getResource(::Core::Path const& resourceName, ::std::string& resourceStream) const;

    MCAPI ~PackInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack, int subpackIndex, bool isDependent, ::PackSettings* packSettings);

    MCAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack, ::std::string const& subpackName, bool isDependent, ::PackSettings* packSettings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

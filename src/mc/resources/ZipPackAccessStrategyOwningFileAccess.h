#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ZipPackAccessStrategy.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class PackAccessStrategy;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

class ZipPackAccessStrategyOwningFileAccess : public ::ZipPackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd6ea6d;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipPackAccessStrategyOwningFileAccess& operator=(ZipPackAccessStrategyOwningFileAccess const&);
    ZipPackAccessStrategyOwningFileAccess(ZipPackAccessStrategyOwningFileAccess const&);
    ZipPackAccessStrategyOwningFileAccess();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ZipPackAccessStrategyOwningFileAccess() /*override*/ = default;

    // vIndex: 17
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ZipPackAccessStrategyOwningFileAccess(
        ::std::shared_ptr<::IFileAccess> fileAccess,
        ::ResourceLocation const&        path,
        ::Core::Path const&              subPath
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::IFileAccess> fileAccess, ::ResourceLocation const& path, ::Core::Path const& subPath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class Pack;
struct DirectoryPackSourceOptions;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
namespace Core { class Path; }
// clang-format on

class DirectoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk821c35;
    ::ll::UntypedStorage<1, 1>  mUnkb21a6a;
    ::ll::UntypedStorage<1, 1>  mUnkafda18;
    ::ll::UntypedStorage<1, 1>  mUnk22bc19;
    ::ll::UntypedStorage<1, 1>  mUnk780433;
    ::ll::UntypedStorage<1, 1>  mUnka63529;
    ::ll::UntypedStorage<8, 24> mUnke5288a;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackSource& operator=(DirectoryPackSource const&);
    DirectoryPackSource(DirectoryPackSource const&);
    DirectoryPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DirectoryPackSource() /*override*/;

    virtual ::PackOrigin getPackOrigin() const /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DirectoryPackSource(::DirectoryPackSourceOptions options);

    MCNAPI_C void addPack(::std::shared_ptr<::Pack>&& pack);

    MCNAPI void deleteAllPacksAndReset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void checkAndRemoveIncompletePacks(
        ::Core::Path const&      path,
        ::IPackIOProvider const& io,
        bool                     saveEncryptedWorldTemplatePacksAsZips
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DirectoryPackSourceOptions options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

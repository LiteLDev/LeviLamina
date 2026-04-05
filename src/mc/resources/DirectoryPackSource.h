#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class Pack;
struct DirectoryPackSourceOptions;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
// clang-format on

class DirectoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                               mPath;
    ::ll::TypedStorage<1, 1, ::PackType const>                                                 mPackType;
    ::ll::TypedStorage<1, 1, ::PackOrigin const>                                               mPackOrigin;
    ::ll::TypedStorage<1, 1, bool>                                                             mDiscovered;
    ::ll::TypedStorage<1, 1, bool const>                                                       mIsRediscoverable;
    ::ll::TypedStorage<1, 1, bool const>                                                       mIsDevDirectory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>> mCommands;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCAPI explicit DirectoryPackSource(::DirectoryPackSourceOptions options);

#ifdef LL_PLAT_C
    MCAPI void addPack(::std::shared_ptr<::Pack>&& pack);
#endif

    MCAPI void deleteAllPacksAndReset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void checkAndRemoveIncompletePacks(
        ::Core::Path const&      path,
        ::IPackIOProvider const& io,
        bool                     saveEncryptedWorldTemplatePacksAsZips
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DirectoryPackSourceOptions options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::PackOrigin $getPackOrigin() const;

    MCFOLD ::PackType $getPackType() const;

    MCAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

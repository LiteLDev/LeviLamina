#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/DirectoryPackSource.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class PackSourceReport;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct WorldTemplatePackSourceOptions;
// clang-format on

class WorldTemplatePackSource : public ::DirectoryPackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk871116;
    ::ll::UntypedStorage<8, 16> mUnk866f94;
    ::ll::UntypedStorage<1, 1>  mUnkedfcff;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackSource& operator=(WorldTemplatePackSource const&);
    WorldTemplatePackSource(WorldTemplatePackSource const&);
    WorldTemplatePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatePackSource() /*override*/ = default;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldTemplatePackSource(::WorldTemplatePackSourceOptions options);

    MCNAPI ::PackSourceReport _tryLoadFromZip(
        ::std::shared_ptr<::PackSource::PackTaskData>                     data,
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Core::PathBuffer<::std::string> const&                          worldTemplatePath,
        ::std::string const&                                              subDir
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplatePackSourceOptions options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
